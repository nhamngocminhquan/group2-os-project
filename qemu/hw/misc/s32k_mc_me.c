/*
 * QEMU stub model for NXP S32K3x8 MC_ME – **Partition‑1 subset only**
 * -------------------------------------------------------------------
 * This minimal device lets S32K3 firmware run past the Mode‑Entry
 * sequence in emulation.  It **stores/loads** register values so that
 * key‑write sequences no longer raise BusFaults, but it does **not**
 * attempt to reproduce the real clock / power‑domain side‑effects.
 *
 * Implemented registers (offsets from MC_ME base):
 *   0x300  PRTN1_PCONF        (RW) – Process Configuration
 *   0x304  PRTN1_PUPD         (RW) – Process Update
 *   0x308  PRTN1_STAT         (R ) – Partition Status
 *   0x310  PRTN1_COFB0_STAT   (R ) – Clock‑status, set 0
 *   0x314  PRTN1_COFB1_STAT   (R ) – Clock‑status, set 1
 *   0x318  PRTN1_COFB2_STAT   (R ) – Clock‑status, set 2
 *   0x31C  PRTN1_COFB3_STAT   (R ) – Clock‑status, set 3
 *   0x330  PRTN1_COFB0_CLKEN  (RW) – Clock‑enable, set 0
 *   0x334  PRTN1_COFB1_CLKEN  (RW) – Clock‑enable, set 1
 *   0x338  PRTN1_COFB2_CLKEN  (RW) – Clock‑enable, set 2
 *   0x33C  PRTN1_COFB3_CLKEN  (RW) – Clock‑enable, set 3
 *
 * Reset values correspond to the S32K3x8 RM (rev.
 * 8‑Dec‑2022, table 13‑12).
 *
 * Build:
 *   (inside QEMU tree)
 *   $ gcc -I. -Iinclude -c hw/misc/s32k_mc_me.c
 *   # or just add the file to meson.build and re‑configure.
 *
 * Board glue (example):
 *   DeviceState *mcme = qdev_new(TYPE_S32K_MC_ME);
 *   sysbus_realize_and_unref(SYS_BUS_DEVICE(mcme), &error_fatal);
 *   sysbus_mmio_map(SYS_BUS_DEVICE(mcme), 0, 0x40078000);
 */

#include "qemu/osdep.h"
#include "hw/sysbus.h"
#include "qemu/log.h"
#include "hw/misc/s32k_mc_me.h"

/* -------------------- MMIO access helpers ------------------------- */
static uint64_t mcme_read(void *opaque, hwaddr off, unsigned size)
{
    S32KMcMeState *s = opaque;
    uint32_t val = 0;

    switch (off) {
    case 0x300: val = s->pconf; break;
    case 0x304: val = s->pupd;  break;
    case 0x308: val = s->stat;  break;
    case 0x310: case 0x314: case 0x318: case 0x31C:
        val = s->cofb_stat[(off - 0x310) >> 2];
        break;
    case 0x330: case 0x334: case 0x338: case 0x33C:
        val = s->cofb_clken[(off - 0x330) >> 2];
        break;
    default:
        qemu_log_mask(LOG_GUEST_ERROR,
                       "MC_ME: bad read @0x%04" HWADDR_PRIx "\n", off);
    }

    return val;
}

static void mcme_write(void *opaque, hwaddr off, uint64_t val, unsigned size)
{
    S32KMcMeState *s = opaque;

    switch (off) {
    case 0x300:               /* PRTN1_PCONF (RW) */
        s->pconf = val;
        break;
    case 0x304:               /* PRTN1_PUPD (RW) */
        s->pupd  = val;
        break;
    case 0x330: case 0x334: case 0x338: case 0x33C: {
        int idx = (off - 0x330) >> 2;
        s->cofb_clken[idx] = val;
        s->cofb_stat[idx] = val;
        break;
    }
    default:
        /* Writes to RO / unimplemented offsets are logged & ignored */
        qemu_log_mask(LOG_UNIMP,
                      "MC_ME: write 0x%08" PRIx64 " @0x%04" HWADDR_PRIx " (ignored)\n",
                      val, off);
    }
}

static const MemoryRegionOps mcme_ops = {
    .read = mcme_read,
    .write = mcme_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .valid = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

/* --------------------- Reset & init hooks ------------------------- */
static void mcme_reset(DeviceState *d)
{
    S32KMcMeState *s = S32K3X8_MC_ME(d);

    s->pconf = 0x00000001;
    s->pupd  = 0x00000000;
    s->stat  = 0x00000001;

    s->cofb_stat[0] = 0x5E3F0007;
    s->cofb_stat[1] = 0x7CFE2FFC;
    s->cofb_stat[2] = 0x300C0000;
    s->cofb_stat[3] = 0x00005FEE;

    /* CLKEN mirrors STAT on reset */
    for (int i = 0; i < 4; ++i) {
        s->cofb_clken[i] = s->cofb_stat[i];
    }
}

static void s32k3x8_mcme_realize(DeviceState *dev, Error **errp)
{
    mcme_reset(dev);
}

static void mcme_init(Object *obj)
{
    SysBusDevice *sbd = SYS_BUS_DEVICE(obj);
    S32KMcMeState *s = S32K3X8_MC_ME(obj);

    memory_region_init_io(&s->mmio, obj, &mcme_ops,
                          s, "s32k3x8-mc-me", 0x400);
    sysbus_init_mmio(sbd, &s->mmio);
}

/* ---------------------- QOM boiler‑plate -------------------------- */
static void mcme_class_init(ObjectClass *oc, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(oc);
    dc->realize = s32k3x8_mcme_realize;
}

static const TypeInfo mcme_info = {
    .name          = TYPE_S32K3X8_MC_ME,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(S32KMcMeState),
    .instance_init = mcme_init,
    .class_init    = mcme_class_init,
};

static void mcme_register_types(void)
{
    type_register_static(&mcme_info);
}

type_init(mcme_register_types)
