// Q:   A skeleton based on mps2.c and stm32f405_soc.c
//      Common includes
#include "hw/arm/s32k3x8.h"
#include "qemu/osdep.h"
#include "qapi/error.h"
#include "qom/object.h"
#include "qemu/units.h"     // For MiB
#include "exec/address-spaces.h"
#include "system/system.h"
#include "hw/boards.h"
#include "hw/arm/armv7m.h"
#include "hw/qdev-clock.h"
#include "hw/misc/unimp.h"
#include "hw/or-irq.h"
#include "hw/char/s32k3x8_uart.h"  // UART definitions

//      mps2 includes - may be important
#include "qemu/error-report.h"  // For error reporting
#include "qemu/cutils.h"        // For size_to_str
// #include "hw/arm/boot.h"

//      mps2 includes - unknowns
// #include "hw/qdev-properties.h"
// #include "net/net.h"
// #include "qobject/qlist.h"

//      mps2 includes - peripherals
// #include "hw/char/cmsdk-apb-uart.h"
 //#include "hw/timer/cmsdk-apb-timer.h"
 #include "hw/timer/s32k3x8-timer.h"
// #include "hw/timer/cmsdk-apb-dualtimer.h"
// #include "hw/watchdog/cmsdk-apb-watchdog.h"
// #include "hw/i2c/arm_sbcon_i2c.h"
// #include "hw/misc/mps2-scc.h"
// #include "hw/misc/mps2-fpgaio.h"
// #include "hw/ssi/pl022.h"
// #include "hw/net/lan9118.h"

/*
PIT_0 base address: 0x400B0000 - 0x400B3FFF
PIT_1 base address: 0x400B4000 - 0x400B7FFF
PIT_2 base address: 0x402FC000 - 0x402FFFFF
PIT_3 base address: 0x40300000 - 0x40303FFF --not used in S32K348
 */

static const uint32_t timer_addr[] = { 0x400B0000, 0x400B4000,
                                       0x402FC000 }; 
//static const int    timer_irq[] = { 96, 97, 98 };
static const int    timer_irq[] = { 8, 9, 10 };

// Q:   From Airbus and mps2
static void s32k3x8_init(MachineState *ms) {
    int i=0;//for timer iteration

    // Q:   Useful variables
    DeviceState *armv7m;
    MachineClass *mc = MACHINE_GET_CLASS(ms);
    MemoryRegion *system_memory = get_system_memory();
    // Q:   Conversion to S32K3X8 to access members
    S32K3X8MachineState *sms = S32K3X8_MACHINE(ms);

    // Q:   Create system clocks
    /* This clock doesn't need migration because it is fixed-frequency */
    sms->sysclk = clock_new(OBJECT(ms), "SYSCLK");
    clock_set_hz(sms->sysclk, SYSCLK_FRQ);

    sms->refclk = clock_new(OBJECT(ms), "REFCLK");
    clock_set_hz(sms->refclk, REFCLK_FRQ);

    // Q:   Memory mappings used in loader file
    //      ms->ram was created automatically, used as default RAM
    memory_region_add_subregion(system_memory, RAM_BASE_ADDRESS, ms->ram);

    // Q:   ITCM is needed for memory starting at 0, for the 
    //      program/interrupt vector table
    memory_region_init_ram(
        &sms->itcm, NULL, "s32k3x8.itcm",
        ITCM_SIZE, &error_fatal
    );
    memory_region_add_subregion(system_memory, ITCM_BASE_ADDRESS, &sms->itcm);
    memory_region_init_rom(
        &sms->pflash, NULL, "s32k3x8.flash",
        P_FLASH_SIZE, &error_fatal
    );
    memory_region_add_subregion(system_memory, P_FLASH_BASE_ADDRESS, &sms->pflash);


    // Q:   Create CPU child
    object_initialize_child(OBJECT(sms), "armv7m", &sms->armv7m, TYPE_ARMV7M);
    armv7m = DEVICE(&sms->armv7m);
    qdev_connect_clock_in(armv7m, "cpuclk", sms->sysclk);
    qdev_connect_clock_in(armv7m, "refclk", sms->refclk);
    qdev_prop_set_string(armv7m, "cpu-type", ms->cpu_type);

    // Q:   Set the starting addresses
    // qdev_prop_set_uint32(armv7m, "init-svtor", P_FLASH_BASE_ADDRESS);
    // qdev_prop_set_uint32(armv7m, "init-nsvtor", P_FLASH_BASE_ADDRESS);

    // Q:   Unknowns
    qdev_prop_set_uint32(armv7m, "num-irq", 256);
    qdev_prop_set_bit(armv7m, "enable-bitband", true);

    // Q:   Connect CPU to memory
    object_property_set_link(OBJECT(&sms->armv7m), "memory",
                             OBJECT(system_memory), &error_abort);
    sysbus_realize(SYS_BUS_DEVICE(&sms->armv7m), &error_fatal);
    
     //-------------- TIMER IMPLEMENTATION -----------------
    for (i = 0; i < NUM_TIMERS; i++) {
        g_autofree char *name = g_strdup_printf("timer%d", i);
        object_initialize_child(OBJECT(sms), name, &sms->timer[i],
                               TYPE_S32K3X8_TIMER);
    }

    for (i = 0; i < NUM_TIMERS; i++) {
        
        SysBusDevice *sbd;
        sbd = SYS_BUS_DEVICE(&sms->timer[i]);
        qdev_connect_clock_in(DEVICE(&sms->timer[i]), "pclk", sms->sysclk);
        if (!sysbus_realize(sbd, &error_fatal)) {
            error_report("Failed to realize timer %d", i);
            return;
        }
        sysbus_mmio_map(sbd, 0, timer_addr[i]);
        sysbus_connect_irq(sbd, 0, qdev_get_gpio_in(armv7m, timer_irq[i]));//need to understand to what irq assign them
    }
    //-------------------------------------------------

    /* E:UART 
    * TODO: Implement UART interrupt handling
    *       Currently, it is not connected to the CPU IRQ line.
    * 
    * 
    */
    {
        /* Create child UART device */
        object_initialize_child(OBJECT(ms), "lpuart0", &sms->uart0, TYPE_S32K3X8_UART);
        
        qdev_prop_set_chr(DEVICE(&sms->uart0), "chardev", qemu_chr_find("serial0"));

        /* Connect clocks 
        * TODO: When clocks are needed uncomment.
        */
        //qdev_connect_clock_in(DEVICE(&sms->uart0), "periph_clk", sms->sysclk);
        //qdev_connect_clock_in(DEVICE(&sms->uart0), "ipg_clk", sms->refclk);

        /* Realize UART */
        sysbus_realize(SYS_BUS_DEVICE(&sms->uart0), &error_fatal);

        /* Map MMIO region */
        sysbus_mmio_map(SYS_BUS_DEVICE(&sms->uart0), 0,
                        LPUART0_BASE_ADDRESS);

        /* Hook its interrupt line which is not implemented yet.*/
        //sysbus_connect_irq(SYS_BUS_DEVICE(&sms->uart0), 0, sms->armv7m.cpu->irq[irq_LPUART0]);

    }
    /*E: End UART */

    // Q:   Load kernel for simulation, size argument means kernel cannot
    //      exceed this size? (probably cropped)
    armv7m_load_kernel(sms->armv7m.cpu, ms->kernel_filename,
                       0, RAM_SIZE);
}

static void s32k3x8_machine_init(MachineClass *mc) {
    static const char * const valid_cpu_types[] = {
        ARM_CPU_TYPE_NAME("cortex-m7"),
        NULL
    };

    mc->desc = "S32K3X8EVB-Q289 board";
    mc->init = s32k3x8_init;
    mc->valid_cpu_types = valid_cpu_types;
    mc->default_cpu_type = ARM_CPU_TYPE_NAME("cortex-m7");
    mc->default_ram_size = RAM_SIZE;
    // Q:   IMPORTANT: ID is crucial, otherwise QEMU will not create RAM
    mc->default_ram_id = "s32k3x8.ram";
}

// Q:   Macro used to automate creation of types
//      Unused in favor of customized MachineClass and MachineState in
//      s32k3x8.h header file
// DEFINE_MACHINE("s32k3x8", s32k3x8_machine_init)
//      Instead we use these 4 steps:
static void s32k3x8_machine_class_init(ObjectClass *oc, void *data)
{
    MachineClass *mc = MACHINE_CLASS(oc);
    s32k3x8_machine_init(mc);
}

static const TypeInfo s32k3x8_machine_typeinfo = {
    .name       = TYPE_S32K3X8_MACHINE,
    .parent     = TYPE_MACHINE,
    .instance_size = sizeof(S32K3X8MachineState),
    //.class_size = sizeof(S32K3X8MachineState),
    .class_init = s32k3x8_machine_class_init,
};

static void s32k3x8_machine_register_types(void)
{
    type_register_static(&s32k3x8_machine_typeinfo);
}
type_init(s32k3x8_machine_register_types)
 