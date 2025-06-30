/*
 * FreeRTOS Kernel V11.1.0
 * Copyright 2024 NXP.
 *
 * SPDX-License-Identifier: MIT
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
 * https://www.FreeRTOS.org
 * https://github.com/FreeRTOS
 *
 */

#include <stdint.h>
#include "generic_timer.h"
#include "OsIf_ArchCfg.h"
#include "core.h"
#include "FreeRTOS.h"

/*
 * Local function access to core registers
 */
#define READ_MPIDR_INSTR                    "mrc p15, 0, %[Rd], c0, c0, 5"

#if (configUSE_PHYSICAL_TIMER == 1)
#define WRITE_CNTP_CTL_INSTR                "mcr p15, 0, %[Rd], c14, c2, 1"
#define READ_CNTP_CTL_INSTR                 "mrc p15, 0, %[Rd], c14, c2, 1"
#define READ_CNTPCT_INSTR                   "mrrc p15, 0, %[Rd], %[Rd2], c14"
#define WRITE_CNTP_CVAL_INSTR               "mcrr p15, 2, %[Rd], %[Rd2], c14"
#define TIMER_INT_ID                        PHYSICAL_TIMER_INT_ID
#endif

#if (configUSE_VIRTUAL_TIMER == 1)
#define WRITE_CNTV_CTL_INSTR                "mcr p15, 0, %[Rd], c14, c3, 1"
#define READ_CNTV_CTL_INSTR                 "mrc p15, 0, %[Rd], c14, c3, 1"
#define READ_CNTVCT_INSTR                   "mrrc p15, 1, %[Rd], %[Rd2], c14"
#define WRITE_CNTV_CVAL_INSTR               "mcrr p15, 3, %[Rd], %[Rd2], c14"
#define TIMER_INT_ID                        VIRTUAL_TIMER_INT_ID
#endif

static volatile uint8_t cnt_div = 1;        /** The value is read from CFG_CNTDV to calibrate the timer counter(cnt_val). Default by 1 */

extern void SysTick_Handler(void);
#if (configUSE_PHYSICAL_TIMER == 1)
/*-----------------------------------------------------------*/

static void write_CNTP_CTL(uint32_t val);
static void write_CNTP_CTL(uint32_t val)
{
    uint32_t val32 = val;
    ASMV_KEYWORD(
        WRITE_CNTP_CTL_INSTR
        : /* No Output */
        : [Rd]"r"(val32)
    );
}
/*-----------------------------------------------------------*/

static uint32_t read_CNTP_CTL(void);
static uint32_t read_CNTP_CTL(void)
{
    uint64_t cntp_ctl = 0;
    ASMV_KEYWORD(
        READ_CNTP_CTL_INSTR
        : [Rd]"=r"(cntp_ctl)
    );
    return cntp_ctl;
}
/*-----------------------------------------------------------*/

static void write_CNTP_CVAL(uint64_t val);
static void write_CNTP_CVAL(uint64_t val)
{
    uint32_t val32 = val;
    uint32_t val32_1 = val >> 32;
    ASMV_KEYWORD(
        WRITE_CNTP_CVAL_INSTR
        : /* No Output */
        : [Rd]"r"(val32),
          [Rd2]"r"(val32_1):
    );
}
/*-----------------------------------------------------------*/

static uint64_t read_CNTPCT(void);
static uint64_t read_CNTPCT(void)
{
    uint64_t cntp_cval = 0;
    uint32_t val1,val2;
    ASMV_KEYWORD(
        READ_CNTPCT_INSTR
        : [Rd]"=r"(val1),
          [Rd2]"=r"(val2):
    );
    cntp_cval = ((uint64_t)val2);
    cntp_cval = (cntp_cval << 32);
    cntp_cval |= val1;
    return cntp_cval;
}
/*-----------------------------------------------------------*/
#endif

#if (configUSE_VIRTUAL_TIMER == 1)
/*-----------------------------------------------------------*/

static void write_CNTV_CTL(uint32_t val);
static void write_CNTV_CTL(uint32_t val)
{
    uint32_t val32 = val;
    ASMV_KEYWORD(
        WRITE_CNTV_CTL_INSTR
        : /* No Output */
        : [Rd]"r"(val32)
    );
}
/*-----------------------------------------------------------*/

static uint32_t read_CNTV_CTL(void);
static uint32_t read_CNTV_CTL(void)
{
    uint64_t cntp_ctl = 0;
    ASMV_KEYWORD(
        READ_CNTV_CTL_INSTR
        : [Rd]"=r"(cntp_ctl)
    );
    return cntp_ctl;
}
/*-----------------------------------------------------------*/

static void write_CNTV_CVAL(uint64_t val);
static void write_CNTV_CVAL(uint64_t val)
{
    uint32_t val32 = val;
    uint32_t val32_1 = val >> 32;
    ASMV_KEYWORD(
        WRITE_CNTV_CVAL_INSTR
        : /* No Output */
        : [Rd]"r"(val32),
          [Rd2]"r"(val32_1):
    );
}
/*-----------------------------------------------------------*/

static uint64_t read_CNTVCT(void);
static uint64_t read_CNTVCT(void)
{
    uint64_t cntv_cval = 0;
    uint32_t val1,val2;
    ASMV_KEYWORD(
        READ_CNTVCT_INSTR
        : [Rd]"=r"(val1),
          [Rd2]"=r"(val2):
    );
    cntv_cval = ((uint64_t)val2);
    cntv_cval = (cntv_cval << 32);
    cntv_cval |= val1;
    return cntv_cval;
}
/*-----------------------------------------------------------*/
#endif

static uint32_t read_MPIDR(void);
static uint32_t read_MPIDR(void)
{
    uint64_t mpidr = 0;
    ASMV_KEYWORD(
        READ_MPIDR_INSTR
        : [Rd]"=r"(mpidr)
    );
    return mpidr;
}
/*-----------------------------------------------------------*/

/*
 *   Get cluster
 */
uint32_t GET_CLUSTER_ID(void)
{
	return MPIDR_GET_CLUSTER(read_MPIDR());
}
/*-----------------------------------------------------------*/

/*
 * Update the tick count to next interrupt
 */
__attribute__( ( weak ) ) void vUpdateTimer(void)
{
#if((configUSE_PHYSICAL_TIMER == 1)&&(configUSE_VIRTUAL_TIMER == 1))
    configASSERT(ERROR);
#elif (configUSE_PHYSICAL_TIMER == 1)
    uint64_t cnt_val = read_CNTPCT();

    /* Calculate the constants required to configure the tick interrupt. */
    cnt_val += (uint64_t)((configCPU_CLOCK_HZ/cnt_div)/configTICK_RATE_HZ);
    write_CNTP_CVAL(cnt_val);
    write_CNTP_CTL(read_CNTP_CTL() | ENABLE);

#elif (configUSE_VIRTUAL_TIMER == 1)
    uint64_t cnt_val = read_CNTVCT();

    /* Calculate the constants required to configure the tick interrupt. */
    cnt_val += (uint64_t)((configCPU_CLOCK_HZ/cnt_div)/configTICK_RATE_HZ);
    write_CNTV_CVAL(cnt_val);
    write_CNTV_CTL(read_CNTV_CTL() | ENABLE);
#else
    configASSERT(ERROR);
#endif

}
/*-----------------------------------------------------------*/

/*
 * Setup the generic timer to generate the tick interrupts at the required
 * frequency.
 */
__attribute__( ( weak ) ) void prvSetupTimerInterrupt(void)
{
    uint64_t cnt_val = 0;
#ifndef S32NZ55
    uint32_t cluster = 0;

    /* Setup divider value used for generating the Cortex-R52 generic timer clock-enable */
    cluster = GET_CLUSTER_ID();
    cnt_div = READ_CFG_CNTDV(cluster) + 1;  /** The value of CFG_CNTDV is 0-7 (3bit): 0 <=> div 1 */
#else
    cnt_div = 1;
#endif

#if((configUSE_PHYSICAL_TIMER == 1)&&(configUSE_VIRTUAL_TIMER == 1))
    configASSERT(ERROR);
#elif (configUSE_PHYSICAL_TIMER == 1)
    cnt_val = read_CNTPCT();

    /* Calculate the constants required to configure the tick interrupt. */
    cnt_val += (uint64_t)((configCPU_CLOCK_HZ/cnt_div)/configTICK_RATE_HZ);
    write_CNTP_CTL(read_CNTP_CTL() | ENABLE);
    write_CNTP_CVAL(cnt_val);
#elif (configUSE_VIRTUAL_TIMER == 1)
    cnt_val = read_CNTVCT();

    /* Calculate the constants required to configure the tick interrupt. */
    cnt_val += (uint64_t)((configCPU_CLOCK_HZ/cnt_div)/configTICK_RATE_HZ);
    write_CNTV_CTL(read_CNTV_CTL() | ENABLE);
    write_CNTV_CVAL(cnt_val);
#else
    configASSERT(ERROR);
#endif
    /* Configure SysTick to interrupt at the requested rate. */
    Core_registerIsrHandler(TIMER_INT_ID, SysTick_Handler);
    Core_enableIsrSource(TIMER_INT_ID, TIMER_PRIO);
}