// Q:   A skeleton based on mps2.c and stm32f405_soc.c
#ifndef HW_ARM_S32K3X8_H
#define HW_ARM_S32K3X8_H

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

 //#include "hw/timer/cmsdk-apb-timer.h"
 #include "hw/timer/s32k3x8-timer.h"
/* Main SYSCLK frequency in Hz */
#define SYSCLK_FRQ 25000000
// ARMV7M needs 2 clocks, sysclk and refclk. From mps2 this
// is the clock for the systick
#define REFCLK_FRQ (1 * 1000 * 1000)

// Multi-CPU variables
#define MAX_CPU                     4               // Absolute maximum number of cores (ex. 388)
#define CPU_MASK                    0b0101          // The 358 has CPUs 0 and 2, so bits 0 and 2 are selected
#define USE_SBAF                    0
#define IVT_SIZE                    11

// Values from memory map of reference manual
#define RAM_BASE_ADDRESS            0x20400000
#define RAM_SIZE                    (768 * KiB)

// Program flash: 4 separate blocks modeled as one
#define P_FLASH_BASE_ADDRESS        0x00400000
#define P_FLASH_SIZE                (8192 * KiB)

#define D_FLASH_BASE_ADDRESS        0x10020000
#define D_FLASH_SIZE                (128 * KiB)

#define ITCM_BASE_ADDRESS           0x00000000
#define ITCM_SIZE                   (64 * KiB)

#define NUM_TIMERS 3

struct S32K3X8MachineClass {
    MachineClass parent;
};

struct S32K3X8MachineState {
    MachineState parent;
    ARMv7MState armv7m[MAX_CPU];
    S32K3X8UARTState uart0;

    // Local view of memory from each CPU
    MemoryRegion cpu_memory[MAX_CPU];
    // Aliases of system memory for each CPU
    MemoryRegion sys_memory_alias[MAX_CPU];

    Clock *sysclk;
    Clock *refclk;

    MemoryRegion itcm[MAX_CPU];
    MemoryRegion sram;  // Unused
    MemoryRegion pflash;

    S32K3X8Timer timer[NUM_TIMERS];
};


#define TYPE_S32K3X8_MACHINE "S32K3X8-machine"
// Q:   Since we have no virtual methods, SIMPLE_TYPE is enough
// OBJECT_DECLARE_TYPE(S32K3X8MachineState, S32K3X8MachineClass, S32K3X8_MACHINE)
OBJECT_DECLARE_SIMPLE_TYPE(S32K3X8MachineState, S32K3X8_MACHINE)

// Q:   Prototype for parse_elf_for_ivt()
static ssize_t parse_elf_for_ivt(
    const char* kernel_filename, int n_cpu,
    size_t cpu_mask, size_t* cpu_enable, hwaddr* ivt_addr
);

#endif