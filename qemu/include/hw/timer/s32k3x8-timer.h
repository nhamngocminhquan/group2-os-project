/*
 * ARM CMSDK APB timer emulation
 *
 * Copyright (c) 2017 Linaro Limited
 * Written by Peter Maydell
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 or
 *  (at your option) any later version.
 */

#ifndef S32K3X8_TIMER_H
#define S32K3X8_TIMER_H

#include "hw/sysbus.h"
#include "hw/ptimer.h"
#include "hw/clock.h"
#include "qom/object.h"

#define TIM_MCR      0x00
#define TIM_LTMR64H  0xE0
#define TIM_LTMR64L  0xE4
//RTI (Defined to assign space in meme but not implemented in QEMU)
#define TIM_RTI_LDVAL_STAT 0xEC
#define TIM_RTI_LDVAL 0xF0
#define TIM_RTI_CVAL  0xF4
#define TIM_RTI_CTRL  0xF8
#define TIM_RTI_TFLG  0xFC
//TIMER 0
#define TIM_LDVAL0   0x100
#define TIM_CVAL0    0x104
#define TIM_TCTRL0   0x108
#define TIM_TFLG0    0x10C
//TIMER 1
#define TIM_LDVAL1   0x110
#define TIM_CVAL1    0x114
#define TIM_TCTRL1   0x118
#define TIM_TFLG1    0x11C
//TIMER 2
#define TIM_LDVAL2   0x120
#define TIM_CVAL2    0x124
#define TIM_TCTRL2   0x128
#define TIM_TFLG2    0x12C
//TIMER 3
#define TIM_LDVAL3   0x130
#define TIM_CVAL3    0x134
#define TIM_TCTRL3   0x138
#define TIM_TFLG3    0x13C

#define TYPE_S32K3X8_TIMER "s32k3x8-timer"
//setuo QOM
OBJECT_DECLARE_SIMPLE_TYPE(S32K3X8Timer, S32K3X8_TIMER)

/*
 * QEMU interface:
 *  + Clock input "pclk": clock for the timer
 *  + sysbus MMIO region 0: the register bank
 *  + sysbus IRQ 0: timer interrupt TIMERINT
 */
struct S32K3X8Timer {
    /*< private >*/
    SysBusDevice parent_obj;

    /*< public >*/
    MemoryRegion iomem;
    qemu_irq timerint;
    struct ptimer_state *timer;
    Clock *pclk;

    uint32_t ctrl;
    uint32_t value;
    uint32_t reload;
    uint32_t intstatus;
};

#endif
