// Q:   A skeleton based on mps2.c and stm32f405_soc.c
//      Also armsse.c and mps3r.c
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

    // Q:   SBAF variables
    // Q:   According to Table 191 @ reference manual, the SBAF
    // runs first on boot and will scan Flash program addresses
    // 0x400000, 0x600000, 0x800000, 0xA00000 and data address
    // 0x10000000 for the boot image vector table. The IVT, 
    // whose format is defined in Table 200 @ refmanual, stores
    // the addresses of vector tables of individual cores and
    // the CPU_ENABLE bits in the boot configuration word.
    // Our emulation here will only scan the ELF at location
    // 0x400000, the first address in program flash.
    // 
    // We use the USE_SBAF define to set whether to emulate this
    // functionality, by scanning the provided ELF for the boot
    // image vector table. If USE_SBAF = 0 then these following
    // default values will be used.
    size_t cpu_enable[MAX_CPU] = {1, 1};
    hwaddr ivt_addr[MAX_CPU] = {
        0x00000000, 0x00000000
    };
#if USE_SBAF == 1
    if (parse_elf_for_ivt(
        ms->kernel_filename, ms->smp.cpus,
        CPU_MASK, cpu_enable, ivt_addr
    ) < 0) {
        exit(1);
    }
#endif

    // Q:   This system memory is common to all CPUs.
    //      It has the lowest priority (-1), so other private
    //      memory regions can cover it. Since it can only be
    //      added as subregions once, we need to create additional
    //      aliases to add it to the CPUs. This is similar to
    //      mps3r.c and armsse.c
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
    // memory_region_init_ram(&sms->sram, NULL, "s32k3x8.sram", RAM_SIZE, &error_fatal);
    // memory_region_add_subregion(get_system_memory(), RAM_BASE_ADDRESS, &sms->sram);

    memory_region_init_rom(
        &sms->pflash, NULL, "s32k3x8.flash",
        P_FLASH_SIZE, &error_fatal
    );
    memory_region_add_subregion(system_memory, P_FLASH_BASE_ADDRESS, &sms->pflash);

    // Q:   Create CPU children
    for (int cpu_i = 0; cpu_i < ms->smp.cpus; cpu_i++) {
        // Create some CPU-specific names
        g_autofree char *cpu_name = g_strdup_printf("armv7m-%d", cpu_i);
        g_autofree char *cpu_mem_name = g_strdup_printf("armv7m-%d-memory", cpu_i);
        g_autofree char *sys_mem_alias_name = g_strdup_printf("armv7m-%d-sysmem-alias", cpu_i);
        g_autofree char *itcm_name = g_strdup_printf("armv7m-%d-itcm", cpu_i);

        // Create CPU-specific memory region. We alias
        // system_memory to add it to the CPUs as subregion
        // with priority -1
        memory_region_init(
            &sms->cpu_memory[cpu_i], OBJECT(ms),
            cpu_mem_name, UINT32_MAX
        );
        memory_region_init_alias(
            &sms->sys_memory_alias[cpu_i], OBJECT(ms),
            sys_mem_alias_name, system_memory, 0, UINT32_MAX
        );
        memory_region_add_subregion_overlap(
            &sms->cpu_memory[cpu_i], 0,
            &sms->sys_memory_alias[cpu_i], -1
        );

        object_initialize_child(OBJECT(sms), cpu_name, &sms->armv7m[cpu_i], TYPE_ARMV7M);
        armv7m = DEVICE(&sms->armv7m[cpu_i]);
        qdev_connect_clock_in(armv7m, "cpuclk", sms->sysclk);
        qdev_connect_clock_in(armv7m, "refclk", sms->refclk);
        qdev_prop_set_string(armv7m, "cpu-type", ms->cpu_type);

        // Set the starting addresses
        if (!cpu_enable[cpu_i])
            qdev_prop_set_bit(armv7m, "start-powered-off", true);

        qdev_prop_set_uint32(armv7m, "init-svtor", ivt_addr[cpu_i]);
        qdev_prop_set_uint32(armv7m, "init-nsvtor", ivt_addr[cpu_i]);

        // IRQ-related properties
        qdev_prop_set_uint32(armv7m, "num-irq", 256);
        qdev_prop_set_uint8(armv7m, "num-prio-bits", 4);
        qdev_prop_set_bit(armv7m, "enable-bitband", true);

        // Connect CPU to memory
        object_property_set_link(OBJECT(&sms->armv7m[cpu_i]), "memory",
                                OBJECT(&sms->cpu_memory[cpu_i]), &error_abort);

        // Realize the CPU
        if (!sysbus_realize(SYS_BUS_DEVICE(&sms->armv7m[cpu_i]), &error_fatal)) {
            error_report("Failed to realize CPU %d", cpu_i);
            return;
        }

        // ITCM is needed for memory starting at 0. It is
        // specific to each CPU
        memory_region_init_ram(
            &sms->itcm[cpu_i], NULL, itcm_name,
            ITCM_SIZE, &error_fatal
        );
        memory_region_add_subregion(
            &sms->cpu_memory[cpu_i], ITCM_BASE_ADDRESS,
            &sms->itcm[cpu_i]
        );
    }

    // Get reference to first CPU for peripherals
    armv7m = DEVICE(&sms->armv7m[0]);
    
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
    // // Q:   Create placeholder unimplemented devices
    // //      Each device gets created into the unimplemented area
    // create_unimplemented_device("CMSDK APB peripheral region @0x40000000",
    //                             0x40000000, 0x00010000);
    // create_unimplemented_device("CMSDK AHB peripheral region @0x40010000",
    //                             0x40010000, 0x00010000);
    // create_unimplemented_device("Extra peripheral region @0x40020000",
    //                             0x40020000, 0x00010000);

    // Q:   Load kernel for simulation, size argument means kernel cannot
    //      exceed this size? (probably cropped). We call it twice because
    //      each CPU needs to be reset to receive correctly the vector
    //      table from init-nsvtor. If it is called only for the first CPU
    //      the second CPU ignores init-nsvtor. The kernel is placed in
    //      the CPU's view of the system, but if two CPU's have certain
    //      similar components (such as Flash) the operation is redundant. 
    for (int cpu_i = 0; cpu_i < ms->smp.cpus; cpu_i++)
        armv7m_load_kernel(sms->armv7m[cpu_i].cpu, ms->kernel_filename,
                        0, P_FLASH_SIZE);
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
    mc->max_cpus = MAX_CPU;
    // mc->default_cpu_type = POWERPC_CPU_TYPE_NAME("755_v2.8");
    // mc->default_ram_size = CPIOM_MMAP_SDRAM_SIZE
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

// ====================================================
//
// Q:   Include for ELF file parsing. This is inspired
// by include/hw/elf_ops.h.inc used by loader.c to load
// the elf files
#include <elf.h>

// Note: cpu_mask denotes the cores that we will check
// out of 4 possible cores. For example, the 358 has
// cores 0 and 2, so the mask will be 0b0101.
static ssize_t parse_elf_for_ivt(
    const char* kernel_filename, int n_cpu,
    size_t cpu_mask, size_t* cpu_enable, hwaddr* ivt_addr
) {
    int fd;
    uint8_t e_ident[EI_NIDENT];

    fd = open(kernel_filename, O_RDONLY | O_BINARY);
    if (fd < 0) {
        error_report("Could not load kernel '%s'", kernel_filename);
        return -1;
    }
    if (read(fd, e_ident, EI_NIDENT) != EI_NIDENT) {
        error_report("Kernel '%s': incorrect ELF identity size", kernel_filename);
        goto fail;
    }
    if (e_ident[0] != ELFMAG0 ||
        e_ident[1] != ELFMAG1 ||
        e_ident[2] != ELFMAG2 ||
        e_ident[3] != ELFMAG3) {
        error_report("Kernel '%s': incorrect ELF magic", kernel_filename);
        goto fail;
    }
    if (e_ident[EI_DATA] != ELFDATA2LSB) {
        error_report("Kernel '%s': incorrect endianness", kernel_filename);
        goto fail;
    }
    if (e_ident[EI_DATA] != ELFCLASS32) {
        error_report("Kernel '%s': 64-bit not supported", kernel_filename);
        goto fail;
    }

    Elf32_Ehdr elf_header;
    lseek(fd, 0, SEEK_SET);
    if (read(fd, &elf_header, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr)) {
        error_report("Kernel '%s': incorrect ELF header size", kernel_filename);
        goto fail;
    }

    Elf32_Shdr section_header;
    size_t found_ivt = 0;
    uint32_t ivt_table[IVT_SIZE];
    lseek(fd, elf_header.e_shoff, SEEK_SET);
    for (int i = 0; i < elf_header.e_shnum; i++) {
        lseek(fd, elf_header.e_shoff + 
            i * sizeof(Elf32_Shdr), SEEK_SET);
        if (read(fd, &section_header, sizeof(Elf32_Shdr)) != elf_header.e_shentsize) {
            error_report("Kernel '%s': incorrect section header size", kernel_filename);
            goto fail;
        };
        if (section_header.sh_addr == 0x400000) {
            lseek(fd, section_header.sh_offset, SEEK_SET);
            if (read(fd, &ivt_table, IVT_SIZE * sizeof(uint32_t)) != IVT_SIZE * sizeof(uint32_t)) {
                error_report("Kernel '%s': incorrect boot IVT size", kernel_filename);
                goto fail;
            };
            if (ivt_table[0] != 0x5AA55AA5) {
                error_report("Kernel '%s': incorrect IVT marker", kernel_filename);
                goto fail;
            };
            info_report("Found IVT");
            found_ivt = 1;
            break;
        }
    }
    if (!found_ivt) {
        error_report("Kernel '%s': could not find boot IVT", kernel_filename);
        goto fail;
    };

    // Set CPU-enable bits and interrupt vector table addresses
    int cpu = 0;
    for (int i = 0; i < MAX_CPU; i++)
        if (cpu_mask & (1 << i)) {
            if (i < 3) {
                cpu_enable[cpu] = (ivt_table[1] >> i) & 1;
                ivt_addr[cpu] = ivt_table[3 + i * 2];
            } else {
                cpu_enable[cpu] = (ivt_table[1] >> 8) & 1;
                ivt_addr[cpu] = ivt_table[10];
            }
            info_report("Set CPU %d with IVT %lx", cpu, ivt_addr[cpu]);
            cpu++;
        }

    close(fd);
    return 0;

fail:
    close(fd);
    return -1;
}
