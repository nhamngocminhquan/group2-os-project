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

 //#include "hw/timer/cmsdk-apb-timer.h"
 #include "hw/timer/s32k3x8-timer.h"
/* Main SYSCLK frequency in Hz */
#define SYSCLK_FRQ 25000000
// Q:   ARMV7M needs 2 clocks, sysclk and refclk. From mps2 this
//      is the clock for the systick
#define REFCLK_FRQ (1 * 1000 * 1000)

// Q:   Values from memory map of reference manual
#define RAM_BASE_ADDRESS            0x20400000
#define RAM_SIZE                    (768 * KiB)

// Q:   Program flash: 4 separate blocks modeled as one
#define P_FLASH_BASE_ADDRESS        0x00400000
#define P_FLASH_SIZE                (8192 * KiB)

#define D_FLASH_BASE_ADDRESS        0x10020000
#define D_FLASH_SIZE                (128 * KiB)

#define ITCM_BASE_ADDRESS        0x00000000
#define ITCM_SIZE                (64 * KiB)

#define NUM_TIMERS 3

struct S32K3X8MachineClass {
    MachineClass parent;
};

struct S32K3X8MachineState {
    MachineState parent;
    ARMv7MState armv7m;

    Clock *sysclk;
    Clock *refclk;

    MemoryRegion itcm;
    MemoryRegion pflash;

    S32K3X8Timer timer[NUM_TIMERS];
};


#define TYPE_S32K3X8_MACHINE "S32K3X8-machine"
// Q:   Since we have no virtual methods, SIMPLE_TYPE is enough
// OBJECT_DECLARE_TYPE(S32K3X8MachineState, S32K3X8MachineClass, S32K3X8_MACHINE)
OBJECT_DECLARE_SIMPLE_TYPE(S32K3X8MachineState, S32K3X8_MACHINE)

#endif