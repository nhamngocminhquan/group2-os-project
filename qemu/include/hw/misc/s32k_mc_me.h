#ifndef S32K3X8_MC_ME_H
#define S32K3X8_MC_ME_H

#define TYPE_S32K3X8_MC_ME "s32k3x8-mc-me"

typedef struct S32KMcMeState {
    SysBusDevice parent_obj;
    MemoryRegion mmio;

    /* Partition‑1 register file */
    uint32_t pconf;          /* 0x300 */
    uint32_t pupd;           /* 0x304 */
    uint32_t stat;           /* 0x308 */
    uint32_t cofb_stat[4];   /* 0x310‑0x31C */
    uint32_t cofb_clken[4];  /* 0x330‑0x33C */
} S32KMcMeState;

OBJECT_DECLARE_SIMPLE_TYPE(S32KMcMeState, S32K3X8_MC_ME)

#endif