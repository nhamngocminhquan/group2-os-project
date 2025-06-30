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
#ifndef NVIC_H
#define NVIC_H

#include <stdint.h>

#define OSINTC_NVIC_ISER0                   (0xE000E100ul)               /**< RW: Interrupt Set-Enable    Register 0-15  : 0xE000E100 -> 0xE000E13C */
#define OSINTC_NVIC_ICER0                   (0xE000E180ul)               /**< RW: Interrupt Clear-Enable  Register 0-15  : 0xE000E180 -> 0xE000E1BC */
#define OSINTC_NVIC_ISPR0                   (0xE000E200ul)               /**< RW: Interrupt Set-Pending   Register 0-15  : 0xE000E200 -> 0xE000E23C */
#define OSINTC_NVIC_ICPR0                   (0xE000E280ul)               /**< RW: Interrupt Clear-Pending Register 0-15  : 0xE000E280 -> 0xE000E2BC */
#define OSINTC_NVIC_IABR0                   (0xE000E300ul)               /**< RO: Active Bit Register     Register 0-15  : 0xE000E300 -> 0xE000E37C */
#define OSINTC_NVIC_IPR0                    (0xE000E400ul)               /**< RW: Interrupt Priority      Register 0-123 : 0xE000E400 -> 0xE000E7EC */
#define OSINTC_NVIC_STIR                    (0xE000EF00ul)               /**< WO: Software Trigger Interrupt Register */

#define OSINTC_NVIC_ENABLE_INTX(id)         SYS_REG32(OSINTC_NVIC_ISER0 + ((id>>5)<<2)) = (unsigned int)1ul<<((unsigned int)id & 0x1Fu)
#define OSINTC_NVIC_PRIO_INTX(id)           SYS_REG8( OSINTC_NVIC_IPR0 +  (id)    )  /**< interrupt priority */

    /* set interrupt priority */
#define OSINTC_SET_PRIO_INTX(id, pri)       OSINTC_NVIC_PRIO_INTX(id) = (unsigned char)(pri)
/*
 * Convert from low number value means low prio to
 * low number value means high prio - the way NVIC works
 *
 * 0x00 means 0xFF in hw - this level will never generate an interrupt (>= in basepri)
 */

/* these values to be used only through conversion macros */
#define OSINTC_NVIC_MIN_PRIO                0x00u
#define OSINTC_NVIC_MAX_PRIO                0xFFu

#define OSINTC_NVIC_PRIO_BITS               (4u)
#define OSINTC_NVIC_PRIO_SHIFT              (8u - OSINTC_NVIC_PRIO_BITS)

#define OSINTC_NVIC_CONVERT_PRIO_SET(prio)  ((((prio) & 0xFu) ^ 0xFu) << OSINTC_NVIC_PRIO_SHIFT)

#define vEnableInterrupt(id, pri)           {                                                                   \
                                                OSINTC_NVIC_ENABLE_INTX(id);                                    \
                                                OSINTC_SET_PRIO_INTX(id, OSINTC_NVIC_CONVERT_PRIO_SET(pri));    \
                                            }
#define vTriggerInterrupt(id)               SYS_REG32(OSINTC_NVIC_STIR) = id


#endif /** NVIC_H */