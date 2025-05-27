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

/* This is a model of the "APB timer" which is part of the Cortex-M
 * System Design Kit (CMSDK) and documented in the Cortex-M System
 * Design Kit Technical Reference Manual (ARM DDI0479C):
 * https://developer.arm.com/products/system-design/system-design-kits/cortex-m-system-design-kit
 *
 * The hardware has an EXTIN input wire, which can be configured
 * by the guest to act either as a 'timer enable' (timer does not run
 * when EXTIN is low), or as a 'timer clock' (timer runs at frequency
 * of EXTIN clock, not PCLK frequency). We don't model this.
 *
 * The documentation is not very clear about the exact behaviour;
 * we choose to implement that the interrupt is triggered when
 * the counter goes from 1 to 0, that the counter then holds at 0
 * for one clock cycle before reloading from the RELOAD register,
 * and that if the RELOAD register is 0 this does not cause an
 * interrupt (as there is no further 1->0 transition).
 */

/* To implement the S32K3X8 timer, we use the CMSDK APB timer
 * as a reference, since it has similar functionality. The Timers count down from 
 a preloaded value to 0 is the functiontality that is being used
 
 The files edited to be able to build it in qemu where:
 - qemu/hw/timer/meson.build 
 - qemu/configs/targets/arm-softmmu.mak
 - qemu/hw/arm/Kconfig **in this file was added to use the ptimer
 - qemu/hw/timer/Kconfig **in this file was added to use the ptimer

 After making all of this changes it was needed to rebuild qemu 
 with the specific target to ensure that the new timer is built
 and associate PTIMER to it.
 >rm -rf build
 >./configure --target-list=arm-softmmu   # plus your usual options
 >make -j$(nproc)

 */



#include "qemu/osdep.h"
#include "qemu/log.h"
#include "qemu/module.h"
#include "qapi/error.h"
#include "trace.h"
#include "hw/sysbus.h"
#include "hw/irq.h"
#include "hw/registerfields.h"
#include "hw/qdev-clock.h"
#include "hw/timer/s32k3x8-timer.h"
#include "migration/vmstate.h"

REG32(CTRL, 0)
    FIELD(CTRL, EN, 0, 1)
    FIELD(CTRL, SELEXTEN, 1, 1)
    FIELD(CTRL, SELEXTCLK, 2, 1)
    FIELD(CTRL, IRQEN, 3, 1)
REG32(VALUE, 4)
REG32(RELOAD, 8)
REG32(INTSTATUS, 0xc)
    FIELD(INTSTATUS, IRQ, 0, 1)
REG32(PID4, 0xFD0)
REG32(PID5, 0xFD4)
REG32(PID6, 0xFD8)
REG32(PID7, 0xFDC)
REG32(PID0, 0xFE0)
REG32(PID1, 0xFE4)
REG32(PID2, 0xFE8)
REG32(PID3, 0xFEC)
REG32(CID0, 0xFF0)
REG32(CID1, 0xFF4)
REG32(CID2, 0xFF8)
REG32(CID3, 0xFFC)

/* PID/CID values */
static const int timer_id[] = {
    0x04, 0x00, 0x00, 0x00, /* PID4..PID7 */
    0x22, 0xb8, 0x1b, 0x00, /* PID0..PID3 */
    0x0d, 0xf0, 0x05, 0xb1, /* CID0..CID3 */
};

static void s32k3x8_timer_update(S32K3X8Timer *s)
{
    qemu_set_irq(s->timerint, !!(s->intstatus & R_INTSTATUS_IRQ_MASK));
}

static uint64_t s32k3x8_timer_read(void *opaque, hwaddr offset, unsigned size)
{
    S32K3X8Timer *s = S32K3X8_TIMER(opaque);
    uint64_t r;

    switch (offset) {
    case A_CTRL:
        r = s->ctrl;
        break;
    case A_VALUE:
        r = ptimer_get_count(s->timer);
        break;
    case A_RELOAD:
        r = ptimer_get_limit(s->timer);
        break;
    case A_INTSTATUS:
        r = s->intstatus;
        break;
    case A_PID4 ... A_CID3:
        r = timer_id[(offset - A_PID4) / 4];
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "CMSDK APB timer read: bad offset %x\n", (int) offset);
        r = 0;
        break;
    }
    //trace_cmsdk_apb_timer_read(offset, r, size);
    return r;
}

static void s32k3x8_timer_write(void *opaque, hwaddr offset, uint64_t value,
                                  unsigned size)
{
    S32K3X8Timer *s = S32K3X8_TIMER(opaque);

    //trace_cmsdk_apb_timer_write(offset, value, size);

    switch (offset) {
    case A_CTRL:
        if (value & 6) {
            /* Bits [1] and [2] enable using EXTIN as either clock or
             * an enable line. We don't model this.
             */
            qemu_log_mask(LOG_UNIMP,
                          "S32K3X8 timer: EXTIN input not supported\n");
        }
        s->ctrl = value & 0xf;
        ptimer_transaction_begin(s->timer);
        if (s->ctrl & R_CTRL_EN_MASK) {
            ptimer_run(s->timer, ptimer_get_limit(s->timer) == 0);
        } else {
            ptimer_stop(s->timer);
        }
        ptimer_transaction_commit(s->timer);
        break;
    case A_RELOAD:
        /* Writing to reload also sets the current timer value */
        ptimer_transaction_begin(s->timer);
        if (!value) {
            ptimer_stop(s->timer);
        }
        ptimer_set_limit(s->timer, value, 1);
        if (value && (s->ctrl & R_CTRL_EN_MASK)) {
            /*
             * Make sure timer is running (it might have stopped if this
             * was an expired one-shot timer)
             */
            ptimer_run(s->timer, 0);
        }
        ptimer_transaction_commit(s->timer);
        break;
    case A_VALUE:
        ptimer_transaction_begin(s->timer);
        if (!value && !ptimer_get_limit(s->timer)) {
            ptimer_stop(s->timer);
        }
        ptimer_set_count(s->timer, value);
        if (value && (s->ctrl & R_CTRL_EN_MASK)) {
            ptimer_run(s->timer, ptimer_get_limit(s->timer) == 0);
        }
        ptimer_transaction_commit(s->timer);
        break;
    case A_INTSTATUS:
        /* Just one bit, which is W1C. */
        value &= 1;
        s->intstatus &= ~value;
        s32k3x8_timer_update(s);
        break;
    case A_PID4 ... A_CID3:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "S32K3X8 timer write: write to RO offset 0x%x\n",
                      (int)offset);
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                      "S32K3X8 timer write: bad offset 0x%x\n", (int) offset);
        break;
    }
}

static const MemoryRegionOps s32k3x8_timer_ops = {
    .read = s32k3x8_timer_read,
    .write = s32k3x8_timer_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
};

static void s32k3x8_timer_tick(void *opaque)
{
    S32K3X8Timer *s = S32K3X8_TIMER(opaque);

    if (s->ctrl & R_CTRL_IRQEN_MASK) {
        s->intstatus |= R_INTSTATUS_IRQ_MASK;
        s32k3x8_timer_update(s);
    }
}

static void s32k3x8_timer_reset(DeviceState *dev)
{
    S32K3X8Timer *s = S32K3X8_TIMER(dev);

    //trace_cmsdk_apb_timer_reset();
    s->ctrl = 0;
    s->intstatus = 0;
    ptimer_transaction_begin(s->timer);
    ptimer_stop(s->timer);
    /* Set the limit and the count */
    ptimer_set_limit(s->timer, 0, 1);
    ptimer_transaction_commit(s->timer);
}

static void s32k3x8_timer_clk_update(void *opaque, ClockEvent event)
{
    S32K3X8Timer *s = S32K3X8_TIMER(opaque);

    ptimer_transaction_begin(s->timer);
    ptimer_set_period_from_clock(s->timer, s->pclk, 1);
    ptimer_transaction_commit(s->timer);
}

static void s32k3x8_timer_init(Object *obj)
{
    SysBusDevice *sbd = SYS_BUS_DEVICE(obj);
    S32K3X8Timer *s = S32K3X8_TIMER(obj);

    memory_region_init_io(&s->iomem, obj, &s32k3x8_timer_ops,
                          s, "s32k3x8-timer", 0x1000);
    sysbus_init_mmio(sbd, &s->iomem);
    sysbus_init_irq(sbd, &s->timerint);
    s->pclk = qdev_init_clock_in(DEVICE(s), "pclk",
                                 s32k3x8_timer_clk_update, s, ClockUpdate);
}

static void s32k3x8_timer_realize(DeviceState *dev, Error **errp)
{
    S32K3X8Timer *s = S32K3X8_TIMER(dev);

    if (!clock_has_source(s->pclk)) {
        error_setg(errp, "S32K3X8 timer: pclk clock must be connected");
        return;
    }

    s->timer = ptimer_init(s32k3x8_timer_tick, s,
                           PTIMER_POLICY_WRAP_AFTER_ONE_PERIOD |
                           PTIMER_POLICY_TRIGGER_ONLY_ON_DECREMENT |
                           PTIMER_POLICY_NO_IMMEDIATE_RELOAD |
                           PTIMER_POLICY_NO_COUNTER_ROUND_DOWN);

    ptimer_transaction_begin(s->timer);
    ptimer_set_period_from_clock(s->timer, s->pclk, 1);
    ptimer_transaction_commit(s->timer);
}

static const VMStateDescription s32k3x8_timer_vmstate = {
    .name = "s32k3x8-timer",
    .version_id = 2,
    .minimum_version_id = 2,
    .fields = (const VMStateField[]) {
        VMSTATE_PTIMER(timer, S32K3X8Timer),
        VMSTATE_CLOCK(pclk, S32K3X8Timer),
        VMSTATE_UINT32(ctrl, S32K3X8Timer),
        VMSTATE_UINT32(value, S32K3X8Timer),
        VMSTATE_UINT32(reload, S32K3X8Timer),
        VMSTATE_UINT32(intstatus, S32K3X8Timer),
        VMSTATE_END_OF_LIST()
    }
};

static void s32k3x8_timer_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->realize = s32k3x8_timer_realize;
    dc->vmsd = &s32k3x8_timer_vmstate;
    device_class_set_legacy_reset(dc, s32k3x8_timer_reset);
}

static const TypeInfo s32k3x8_timer_info = {
    .name = TYPE_S32K3X8_TIMER,
    .parent = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(S32K3X8Timer),
    .instance_init = s32k3x8_timer_init,
    .class_init = s32k3x8_timer_class_init,
};

static void s32k3x8_timer_register_types(void)
{
    type_register_static(&s32k3x8_timer_info);
}

type_init(s32k3x8_timer_register_types);
//Timer
