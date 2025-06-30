/*
 * Copyright 2023 NXP.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef HW_SYSTEM_H
#define HW_SYSTEM_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>

/* register access */
#define SYS_REG32(address)            ( *(volatile uint32_t *)(address) ) /**<  32-bit register */
#define SYS_REG16(address)            ( *(volatile uint16_t *)(address) ) /**<  16-bit register */
#define SYS_REG8(address)             ( *(volatile uint8_t  *)(address) ) /**<   8-bit register */

/*! @} */

/* Interrupt Router base address */
#define IR_BASE_ADDR                  0x40260000u
#define CPU_NUM_OFFSET                (0x4u)                        /**<  Processor number register */
#define CPU_NUM_MASK                  (0x3u)

#define IR_SPRC(x)                    SYS_REG16( IR_BASE_ADDR + 0x880 + ((x)<<1) ) /**< Interrupt Router Shared Peripheral Routing Control */
#define IR_ROUTE_INT(id,core)         IR_SPRC(id)=(core)       /**< route interrupt to core, id=0->111, core={0,1} */

#define IR_ROUTE_NO_INT               240

/* Get core id */
#define GET_CORE_ID                   (SYS_REG32(IR_BASE_ADDR + CPU_NUM_OFFSET) & (CPU_NUM_MASK))

/* route all interrupts to selected core */
#define IR_ROUTE_ALL_2_CPU(core)                                                  \
                                      {                                           \
                                          uint32_t x;                             \
                                          for (x=0; x<IR_ROUTE_NO_INT; x++) {     \
                                                  IR_ROUTE_INT(x, (core));        \
                                              }                                   \
                                      }                                           \

/* Watchdog */
#define SWT_BASE(id)                                                                               \
                                      ({                                                           \
                                            unsigned int baseAddr;                                 \
                                            if( (id) < 2 ){                                        \
                                                baseAddr = (0x40270000UL + (id * 0x1FC000UL));     \
                                            }else{                                                 \
                                                baseAddr = (0x40470000UL - (id%2) * 0x400000UL);   \
                                            }                                                      \
                                            baseAddr;                                              \
                                      })
#define SWT_DISABLE(id)                                                            \
                                      {                                            \
                                        SYS_REG32(SWT_BASE(id) + 0x10) = 0xC520;   \
                                        SYS_REG32(SWT_BASE(id) + 0x10) = 0xD928;   \
                                        SYS_REG32(SWT_BASE(id)) = 0xFF000040;      \
                                      }                                            \

/* Timer configuration macro */
/** STM */
#define STM0_INT_ID                          39
#define STM1_INT_ID                          40
#define STM2_INT_ID                          41
#define STM3_INT_ID                          57
#define ENABLE                              (1 << 0)
#define FREEZE                              (1 << 1) /* Allows the timer counter to be stopped when the device enters Debug mode. */
#define STM_ENABLE_BIT                       (1 << 0)
#define STM_FREEZE_BIT                       (1 << 1) /* Allows the timer counter to be stopped when the device enters Debug mode. */

/* stm id from 0 -> 7; RTU0.STM_3 means STM3, RTU1.STM_0 means STM4 */
#define STM_BASE(id)                        ({                                                         \
                                                unsigned int baseAddr;                                 \
                                                if( (id) < 2 ){                                        \
                                                    baseAddr = (0x40274000UL + (id%2) * 0x200000UL);    \
                                                }else if( (id) >= 2 && (id) < 4){                      \
                                                    baseAddr = (0x40478000UL + (id%2) * 0x4000UL);      \
                                                }                                                       \
                                                baseAddr;                                              \
                                            })
#define STM_ENABLE(id, div)                 (SYS_REG32(STM_BASE(id)) = (STM_ENABLE_BIT|STM_FREEZE_BIT) + ((0xff & (div)) << 8))
#define STM_DISABLE(id)                     (SYS_REG32(STM_BASE(id)) = (STM_ENABLE_BIT >>1 |STM_FREEZE_BIT))

#define STM_ENABLE_CHAN(id, chan, cmp)      {                                                                       \
                                                SYS_REG32(STM_BASE(id) + 0x10 * (chan) + 0x14) = 1;                 \
                                                SYS_REG32(STM_BASE(id) + 0x10 * (chan) + 0x18) = (cmp);             \
                                                SYS_REG32(STM_BASE(id) + 0x10 * (chan) + 0x10) = 1;                 \
                                            }
#define STM_UPDATE_CHAN(id, chan, new)      {                                                                       \
                                                uint32_t oldVal = SYS_REG32(STM_BASE(id) + 0x10 * (chan) + 0x18);   \
                                                oldVal += (new);                                                    \
                                                SYS_REG32(STM_BASE(id) + 0x10 * (chan) + 0x14) = 1;                 \
                                                SYS_REG32(STM_BASE(id) + 0x10 * (chan) + 0x18) = oldVal;            \
                                            }
#define STM_INT_CLEAR(id, chan)             {                                                                       \
                                                SYS_REG32(STM_BASE(id) + 0x10 * (chan) + 0x14) = 1;                 \
                                            }

#define STM_CR_VAL(id, chan)                ( SYS_REG32(STM_BASE(id) + 0x10 * (chan) + 0x4) )
#define STM_CNT_VAL(id)                     ( SYS_REG32(STM_BASE(id) + 0x4 ) )
#define STM_CMP_VAL(id, chan)               ( SYS_REG32(STM_BASE(id) + 0x10 * (chan) + 0x18) )
#define STM_SATRT(id)                       (SYS_REG32(STM_BASE(id)) |= STM_ENABLE_BIT)
/* End of STM */

/** PIT */
#define PIT0_INT_ID                          96
#define PIT1_INT_ID                          97
#define PIT2_INT_ID                          98
#define PIT3_INT_ID                          99
#define PIT_FREEZE_VAL                      (1 << 0)
#define PIT_DISABLE_VAL                        (1 << 1)
#define PIT_TIMER_ENABLE_VAL                  (1<<0)
#define PIT_TIMER_INT_ENABLE_VAL                           (1<<1)
#define PIT_TIMER_INT_CLR_VAL                          (1<<0)
// id 0 mean RTU0.PIT0 id 2 mean RTU1.PIT0
#define PIT_BASE(id)                        ({                                                                  \
                                                unsigned int baseAddr;                                          \
                                                if( (id) < 2 ){                                                 \
                                                    baseAddr = (0x400B0000 + (id%2) * 0x4000UL);              \
                                                }else if( (id) >= 2 && (id) < 4){                               \
                                                    baseAddr = (0x402FC000 + (id%2) * 0x4000UL);              \
                                                }                                                               \
                                                baseAddr;                                                   \
                                            })

#define PIT_ENABLE(id)            ({                                                                        \
                                                SYS_REG32(PIT_BASE(id)) &= (~PIT_DISABLE_VAL);        \
                                            })
#define PIT_TIMER_DISABLE(id,chan)          ({                                                                        \
                                                SYS_REG32(PIT_BASE(id) + 0x10 * (chan) + 0x108) &= (~PIT_TIMER_ENABLE_VAL);        \
                                            })
#define PIT_TIMER_ENABLE(id,chan)          ({                                                                        \
                                                SYS_REG32(PIT_BASE(id) + 0x10 * (chan) + 0x108) |= (PIT_TIMER_ENABLE_VAL);        \
                                            })                                                           

#define PIT_TIMER_ENABLE_INT(id,chan)             ({                                                                        \
                                                SYS_REG32(PIT_BASE(id) + 0x10 * (chan) + 0x108) |= PIT_TIMER_INT_ENABLE_VAL;        \
                                                SYS_REG32(PIT_BASE(id)) = (uint32_t)(PIT_FREEZE_VAL);                     \
                                            })

#define PIT_TIMER_CLEAR_INT(id,chan)              ({                                                                        \
                                                SYS_REG32(PIT_BASE(id) + 0x10 * (chan) + 0x10c) = PIT_TIMER_INT_CLR_VAL;        \
                                            })                                                                        \

#define PIT_DISABLE(id)                     ({                                                                        \
                                                SYS_REG32(PIT_BASE(id)) |= PIT_DISABLE_VAL;        \
                                            })
#define PIT_TIMER_LOAD_VAL(id,chan,val)           ({                                                                        \
                                                SYS_REG32(PIT_BASE(id) + 0x10 * (chan) + 0x100) = (uint32_t)(val);    \
                                            })                                                                        \

#define PIT_TIMER_GET_CUR_VAL(id,chan)            ({                                                                        \
                                                SYS_REG32(PIT_BASE(id) + 0x10 * (chan) + 0x104);                      \
                                            })                                                                        \
/* End of PIT */

extern void vInitInterruptTable(int, void*);

#define SCB_BASE                            (0xE000ED00UL)
#define SCB_CPACR                           (SCB_BASE + 0x088)
#define STM0_BASE                           (0x45020000UL)

#define STM0_CR_VAL(chan)                   ( SYS_REG32(STM0_BASE + 0x10 *(chan) + 0x4) )
#define OS_PlatformInit()                               {                                            \
                                                            SYS_REG32(SCB_BASE + 0x014) |= (1 << 1); \
                                                        }
static inline uint32_t OSINTC_GET_INT_PRI_MASK(void)
{
    uint32_t result;
    __asm__ volatile ("MRS %0, basepri" : "=r" (result) );
    return result;
}


#ifdef __cplusplus
}
#endif

#endif /** HW_SYSTEM_H */