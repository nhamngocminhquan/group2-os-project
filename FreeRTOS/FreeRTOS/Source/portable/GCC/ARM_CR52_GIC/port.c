/*
 * FreeRTOS Kernel V11.1.0
 * Copyright (C) 2021 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include "FreeRTOS.h"
#include "task.h"
#include <string.h>
#if (configUSE_SMP == 1)
#include "gic500.h"
#include "core.h"
#endif

#if ( configENABLE_FPU == 1 )

    /* Values that can be used to allocate the stack for the FPU . */
    #define portSIZE_OF_ONE_STACK_ELEMENT                   (sizeof(StackType_t))
    #define portFPU_STACK_DEEP_SIZE                         ( ( uint16_t ) 68 ) /* 8 bytes aligned, D0-D31, FPSCR, FPEXC */
    #define portTASK_STACK_DEEP_SIZE                        ( ( uint8_t ) 18 )
    #define portSIZE_OF_STACK_FPU                           (portFPU_STACK_DEEP_SIZE * portSIZE_OF_ONE_STACK_ELEMENT)
    #define portSIZE_OF_TASK_STACK_USE_FPU                  ((portFPU_STACK_DEEP_SIZE + portTASK_STACK_DEEP_SIZE) * portSIZE_OF_ONE_STACK_ELEMENT)

    /* This variable points the TCB handler of the task
     * which owns the FPU, use to save FPU. */
    volatile void *volatile prevFpuCtx = NULL;

    /* This variable points the TCB handler of the previous
     * task which owns the FPU, use to load FPU. */
    volatile void *volatile newFpuCtx = NULL;

    /* This boolean variable indicates switching by irq function hay yield function?
     * b_SwitchByIRQ = 0: switch by yeild function.
     * b_SwitchByIRQ = 1: switch by IRQ function*/
    volatile UBaseType_t b_SwitchByIRQ = 0;

    /* This variable is the condition to allocate
     * the stack for the FPU. */
    UBaseType_t task_use_fpu = 1;

    /* This variable is the FPU usage interrupt number
     * in the nested interrupt. */
    UBaseType_t ulPortInterruptHasFPUContext = 0;

    /* This is a pointer where the illegal_handler save the
     * new fpu context and update the global_irq_fpu_stack */
    StackType_t new_global_irq_fpu_stack = 0;
    StackType_t global_irq_fpu_stack = 0;

#endif /* configENABLE_FPU */
#if (configUSE_SMP==1)
extern volatile void *volatile pxCurrentTCBs[ configNUMBER_OF_CORES ];
#else
extern volatile void *volatile pxCurrentTCB;
#endif
static UBaseType_t uxCriticalNesting[ configNUMBER_OF_CORES ] = { 0U };
UBaseType_t uxInterruptNested[ configNUMBER_OF_CORES ] = { 0U };
volatile uint8_t flagCheckStartFirstTask[ configNUMBER_OF_CORES ] = { 0U };
extern void vUpdateTimer(void);
extern void xPortCoreSysTickHandler(void);

void vPortYield(void)
{
    /** do not save R0, R1, R2, R3, R12 */
    OSASM(" mrc p15, 0, r3, c4, c6, 0                       \t\n"); /* get the ICC_PMR */
    OSASM(" mov r2, %0\t\n": : "i" ( configMAX_SYSCALL_INTERRUPT_PRIORITY ): );
    OSASM(" mcr p15, 0, r2, c4, c6, 0                       \t\n"); /* Write r2 into ICC_PMR, disable OS interrupts */
#if (configUSE_SMP==1)
    OSASM(" mrc  p15, 0, r4, c0, c0, 5                      \t\n"); /* Corresponds to MPIDR. Each RTU has two clusters and each cluster has 2 cores */
    OSASM(" and  r2, r4, #0xFF                              \t\n");/* Aff0 */
    OSASM(" lsr  r4, r4, #8                                 \t\n"); /* Aff1 */
    OSASM(" and  r4, r4, #0xFF                              \t\n");
    OSASM(" add  r4, r2, r4, lsl #1                         \t\n"); /* CoreID = Aff0 + (Aff1*2) */
    OSASM(" lsl  r4, r4, #2                                 \t\n"); /* CoreID = CoreID*4 */
    OSASM(" ldr  r0, =pxCurrentTCBs                         \t\n"); /* Get current TCB */
    OSASM(" add  r0, r4, r0                                 \t\n");/* Aff0 */
#else
    OSASM(" ldr  r0, =pxCurrentTCB                         \t\n"); /* Get current TCB */
#endif
    OSASM(" ldr r1, [r0]                                    \t\n");

    OSASM(" stmfd sp!, {r3-r11, lr}                         \t\n"); /* interrupt priority mask and callee-save registers using task stack */
    OSASM(" mov r2, #0                                      \t\n"); /* solicited = 0 */
#if (configUSE_SMP==1)
    OSASM(" push {r1,r2,r4}                                 \t\n");
    OSASM(" mrc  p15, 0, r4, c0, c0, 5                      \t\n"); /* Corresponds to MPIDR. Each RTU has two clusters and each cluster has 2 cores */
    OSASM(" and  r2, r4, #0xFF                              \t\n");/* Aff0 */
    OSASM(" lsr  r4, r4, #8                                 \t\n"); /* Aff1 */
    OSASM(" and  r4, r4, #0xFF                              \t\n");
    OSASM(" add  r4, r2, r4, lsl #1                         \t\n"); /* CoreID = Aff0 + (Aff1*2) */
    OSASM(" lsl  r4, r4, #2                                 \t\n"); /* CoreID = CoreID*4 */
    OSASM(" ldr r0, =uxCriticalNesting                      \t\n");
    OSASM(" add  r0, r4, r0                                 \t\n");/* uxCriticalNesting [CoreID] */
    OSASM(" pop {r1,r2,r4}                                  \t\n");
#else
    OSASM(" ldr r0, =uxCriticalNesting                      \t\n");
#endif
    OSASM(" ldr r3, [r0]                                    \t\n");
    OSASM(" stmfd sp!, {r2,r3}                              \t\n"); /* solicited (0, CPSR) context switched and uxCriticalNesting*/

    OSASM(" str sp, [r1]                                    \t\n"); /* save task top of stack */

#if configENABLE_FPU == 1
    OSASM(" mov r0, #0                                      \t\n"); /* first parameter */
    OSASM(" mov r1, #0                                      \t\n"); /* Second parameter */
    OSASM(" bl pvTaskGetThreadLocalStoragePointer           \t\n"); /* Call function */
    OSASM(" ldr r1, =prevFpuCtx                             \t\n");
    OSASM(" ldr r1, [r1]                                    \t\n"); /* Get prevFpuCtx's value */
    OSASM(" cmp r1, r0                                      \t\n"); /* Compare newFpuCtx with prevFpuCtx */
    OSASM(" bne 2f                                          \t\n");
    /* newFpuCtx == prevFpuCtx : solicited for switched out task,
     * buffer to save registers status, d8-d15 only */
    OSASM(" ldr r0, =b_SwitchByIRQ                          \t\n");
    OSASM(" ldr r1, [r0]                                    \t\n"); /* get boolean check switch by IRQ or Yield: b_SwitchByIRQ */
    OSASM(" mov r1, #0                                      \t\n");
    OSASM(" str r1, [r0]                                    \t\n"); /* b_SwitchByIRQ = 0 */
    OSASM(" 2:                                              \t\n");
    OSASM(" fmrx r0, FPEXC                                  \t\n"); /* Disable FPU coprocessor - for switched in task */
    OSASM(" and r0, r0, #~(1 << 30)                         \t\n");
    OSASM(" fmxr FPEXC, r0                                  \t\n");
#endif /* configENABLE_FPU */
    OSASM(" mrc  p15, 0, r4, c0, c0, 5                      \t\n"); /* Corresponds to MPIDR. Each RTU has two clusters and each cluster has 2 cores */
    OSASM(" and  r2, r4, #0xFF                              \t\n");/* Aff0 */
    OSASM(" lsr  r4, r4, #8                                 \t\n"); /* Aff1 */
    OSASM(" and  r4, r4, #0xFF                              \t\n");
    OSASM(" add  r4, r2, r4, lsl #1                         \t\n"); /* CoreID = Aff0 + (Aff1*2) */
    OSASM(" mov  r0, r4                                     \t\n");
    OSASM(" bl vTaskSwitchContext                           \t\n");
#if (configUSE_SMP==1)
    OSASM(" mrc  p15, 0, r4, c0, c0, 5                      \t\n"); /* Corresponds to MPIDR. Each RTU has two clusters and each cluster has 2 cores */
    OSASM(" and  r2, r4, #0xFF                              \t\n");/* Aff0 */
    OSASM(" lsr  r4, r4, #8                                 \t\n"); /* Aff1 */
    OSASM(" and  r4, r4, #0xFF                              \t\n");
    OSASM(" add  r4, r2, r4, lsl #1                         \t\n"); /* CoreID = Aff0 + (Aff1*2) */
    OSASM(" lsl  r4, r4, #2                                 \t\n"); /* CoreID = CoreID*4 */
    OSASM(" ldr  r0, =pxCurrentTCBs                         \t\n"); /* Get current TCB */
    OSASM(" add  r0, r4, r0                    \t\n");/* Aff0 */
#else
    OSASM(" ldr  r0, =pxCurrentTCB                         \t\n"); /* Get current TCB */
#endif
    OSASM(" ldr r0, [r0]                                    \t\n");
    OSASM(" ldr sp, [r0]                                    \t\n"); /* get new stack of the task */

    OSASM(" ldmfd sp!, {r1-r11,lr}                          \t\n"); /* r1 - sol = 0/unsol = CPSR, r2 critical, r3 int mask */
#if (configUSE_SMP==1)
    OSASM("push {r0, r1,r2,r4}                              \t\n");
    OSASM(" mrc  p15, 0, r4, c0, c0, 5                      \t\n"); /* Corresponds to MPIDR. Each RTU has two clusters and each cluster has 2 cores */
    OSASM(" and  r2, r4, #0xFF                              \t\n");/* Aff0 */
    OSASM(" lsr  r4, r4, #8                                 \t\n"); /* Aff1 */
    OSASM(" and  r4, r4, #0xFF                              \t\n");
    OSASM(" add  r4, r2, r4, lsl #1                         \t\n"); /* CoreID = Aff0 + (Aff1*2) */
    OSASM(" lsl  r4, r4, #2                                 \t\n"); /* CoreID = CoreID*4 */
    OSASM(" ldr r12, =uxCriticalNesting                     \t\n");
    OSASM(" add  r12, r4, r12                               \t\n");/* uxCriticalNesting [CoreID] */
    OSASM(" pop {r0, r1,r2,r4}                              \t\n");
#else
    OSASM(" ldr r12, =uxCriticalNesting                     \t\n");
#endif
    OSASM(" mcr p15, 0, r3, c4, c6, 0                       \t\n"); /* restore r3 into ICC_PMR, task mask level */
    OSASM(" str r2, [r12]                                   \t\n"); /* restore critical nesting */
    OSASM(" cmp r1, #0                                      \t\n");
    OSASM(" beq 1f                                          \t\n"); /* go to solicited, 1: */
    OSASM(" cpsid i                                         \t\n"); /* disable interrupts */
    OSASM(" mov r0, sp                                      \t\n"); /* prepare exit from interrupt, r0 contains user SP */
    OSASM(" add sp, sp, #24                                 \t\n"); /* user stack unload r0 - r3, r12, r14 */
    OSASM(" msr spsr_irq, r1                                \t\n"); /* unsolicited (MOV R1 to SPSR) */
    OSASM(" cps #0x12                                       \t\n"); /* enter in IRQ mode */
    OSASM(" ldm r0, {r0-r3, r12, r14}                       \t\n"); /* get registers from user stack */
    OSASM(" subs pc, lr, #4                                 \t\n"); /* return from interrupt */
    OSASM(" 1:                                              \t\n");
    OSASM(" mov pc, lr                                      \t\n"); /* return unsolicited */
}

void vPortStartFirstTask(void) __attribute__ (( naked ));
void vPortStartFirstTask(void)
{
    OSASM(" mrc  p15, 0, r4, c0, c0, 5                      \t\n"); /* Corresponds to MPIDR. Each RTU has two clusters and each cluster has 2 cores */
    OSASM(" and  r2, r4, #0xFF                              \t\n");/* Aff0 */
    OSASM(" lsr  r4, r4, #8                                 \t\n"); /* Aff1 */
    OSASM(" and  r4, r4, #0xFF                              \t\n");
    OSASM(" add  r4, r2, r4, lsl #1                         \t\n"); /* CoreID = Aff0 + (Aff1*2) */
    OSASM(" mov  r0, r4                                     \t\n");
    OSASM(" bl vTaskSwitchContext                           \t\n");
    OSASM(" cpsid ia                                        \t\n"); /* disable interrupts */
#if (configUSE_SMP==1)
    OSASM(" mrc  p15, 0, r4, c0, c0, 5                      \t\n"); /* Corresponds to MPIDR. Each RTU has two clusters and each cluster has 2 cores */
    OSASM(" and  r2, r4, #0xFF                              \t\n");/* Aff0 */
    OSASM(" lsr  r4, r4, #8                                 \t\n"); /* Aff1 */
    OSASM(" and  r4, r4, #0xFF                              \t\n");
    OSASM(" add  r4, r2, r4, lsl #1                         \t\n"); /* CoreID = Aff0 + (Aff1*2) */
    OSASM(" lsl  r4, r4, #2                                 \t\n"); /* CoreID = CoreID*4 */
    OSASM(" ldr  r0, =pxCurrentTCBs                         \t\n"); /* Get current TCB */
     OSASM(" add  r0, r4, r0                                 \t\n");/* Aff0 */
#else
    OSASM(" ldr  r0, =pxCurrentTCB                          \t\n"); /* Get current TCB */
#endif
    OSASM(" ldr r0, [r0]                                    \t\n");
    OSASM(" ldr sp, [r0]                                    \t\n"); /* get new stack of the task */
#if configENABLE_FPU == 1
    OSASM(" fmrx r2, FPEXC                                  \t\n"); /* Disable FPU coprocessor for the task */
    OSASM(" and r2, r2, #~(1 << 30)                         \t\n");
    OSASM(" fmxr FPEXC, r2                                  \t\n");
#endif /* configENABLE_FPU */
    OSASM(" ldmfd sp!, {r1-r11,lr}                          \t\n"); /* r1 - sol(0)/unsol(CPSR), r2 critical, r3 int mask*/
#if (configUSE_SMP==1)
    OSASM(" push {r0, r1,r2,r4}                             \t\n");
    OSASM(" mrc  p15, 0, r4, c0, c0, 5                      \t\n"); /* Corresponds to MPIDR. Each RTU has two clusters and each cluster has 2 cores */
    OSASM(" and  r2, r4, #0xFF                              \t\n");/* Aff0 */
    OSASM(" lsr  r4, r4, #8                                 \t\n"); /* Aff1 */
    OSASM(" and  r4, r4, #0xFF                              \t\n");
    OSASM(" add  r4, r2, r4, lsl #1                         \t\n"); /* CoreID = Aff0 + (Aff1*2) */
    OSASM(" lsl  r4, r4, #2                                 \t\n"); /* CoreID = CoreID*4 */
    OSASM(" ldr r12, =uxCriticalNesting                     \t\n");
    OSASM(" add  r12, r4, r12                               \t\n");/* uxCriticalNesting [CoreID] */
    OSASM(" pop {r0, r1,r2,r4}                              \t\n");
#else
    OSASM(" ldr r12, =uxCriticalNesting                     \t\n");
#endif
    OSASM(" mcr p15, 0, r3, c4, c6, 0                       \t\n"); /* Write r3 into ICC_PMR, task mask level */
    OSASM(" str r2, [r12]                                   \t\n"); /* save critical */
    OSASM(" mov r0, sp                                      \t\n"); /* r0 contains user SP */
    OSASM(" add sp, sp, #24                                 \t\n"); /* unload user stack */
    OSASM(" msr spsr_irq, r1                                \t\n"); /* unsolicited (MOV R1 to spsr) */
    OSASM(" cps #0x12                                       \t\n"); /* enter to irq mode */
    OSASM(" ldm r0, {r0-r3, r12, r14}                       \t\n");
    OSASM(" subs pc, lr, #4                                 \t\n"); /* return from interrupt */
}

/*
 * Initialise the stack
 */
StackType_t *pxPortInitialiseStack( StackType_t *pxTopOfStack, TaskFunction_t pxCode, void *pvParameters )
{
#if configENABLE_FPU == 1
    if (task_use_fpu == 1)
    {
        pxTopOfStack -= portFPU_STACK_DEEP_SIZE;               /* 8 bytes aligned, D0-D31, FPSCR, FPEXC */
        memset( pxTopOfStack, 0x00, portSIZE_OF_STACK_FPU );
    }
    task_use_fpu = 0;
#endif /* configENABLE_FPU */
    pxTopOfStack --;
    *pxTopOfStack -- = (StackType_t)pxCode + 4;                /* R14_IRQ */
    *pxTopOfStack -- = (StackType_t)0x12121212;                /* R12 */
    *pxTopOfStack -- = (StackType_t)0x03030303;                /* R3 */
    *pxTopOfStack -- = (StackType_t)0x02020202;                /* R2 */
    *pxTopOfStack -- = (StackType_t)0x01010101;                /* R1 */
    *pxTopOfStack -- = (StackType_t)pvParameters;              /* R0 */

    *pxTopOfStack -- = (StackType_t)0xFFFFFFFF;                /* R14_USR, invalid return */
    *pxTopOfStack -- = (StackType_t)0x11111111;                /* R11 */
    *pxTopOfStack -- = (StackType_t)0x10101010;                /* R10 */
    *pxTopOfStack -- = (StackType_t)0x09090909;                /* R9 */
    *pxTopOfStack -- = (StackType_t)0x08080808;                /* R8 */
    *pxTopOfStack -- = (StackType_t)0x07070707;                /* R7 */
    *pxTopOfStack -- = (StackType_t)0x06060606;                /* R6 */
    *pxTopOfStack -- = (StackType_t)0x05050505;                /* R5 */
    *pxTopOfStack -- = (StackType_t)0x04040404;                /* R4 */

    *pxTopOfStack -- = (StackType_t)0x000000f8;                /* Task interrupt mask */
    *pxTopOfStack -- = (StackType_t)0;                         /* critical */
#if defined(__thumb__)
    *pxTopOfStack = (StackType_t)0x0000013f;                   /* CPSR mode system, T32 (unsolicited)*/
#else
    *pxTopOfStack = (StackType_t)0x0000011f;                   /* CPSR mode system, A32 (unsolicited)*/
#endif

    return pxTopOfStack;
}
/*-----------------------------------------------------------*/
extern void prvSetupTimerInterrupt(void);
BaseType_t xPortStartScheduler( void )
{
#if (configUSE_SMP==1)
    if(vPortGET_CORE_ID()== configCORE_MASTER)
    {
        /* Start the timer that generates the tick ISR.  Interrupts are disabled here already. */
        prvSetupTimerInterrupt();
        flagCheckStartFirstTask[0] = 1;
    }
    else
    {

        /* Setup interrtupt for other cores */
    	Core_registerIsrHandler(0, xPortCoreSysTickHandler);
    	gic500_setIntPriority(0, 4);
    	gic500_enableIntID(0);
    }
    while ( flagCheckStartFirstTask[ 0 ] != 1)
    {
        ;
    }
#else
    prvSetupTimerInterrupt();
#endif

    /* Start the first task. */
    vPortStartFirstTask();

    #if(configUSE_SMP==1)
    {
        vTaskSwitchContext(vPortGET_CORE_ID());
        flagCheckStartFirstTask[ portGET_CORE_ID() ] = 1;
    }
    #else
    {
        vTaskSwitchContext();
    }
    #endif

    /* Should not get here! */
    return 0;
}
/*-----------------------------------------------------------*/

void vPortEndScheduler( void )
{
    /* It is unlikely that the ARM port will require this function as there
    is nothing to return to.  */
}

/*-----------------------------------------------------------*/

void vPortEnterCritical( void )
{
    portDISABLE_INTERRUPTS();
    uxCriticalNesting[ portGET_CORE_ID() ] ++;
}
/*-----------------------------------------------------------*/

void vPortExitCritical( void )
{
    configASSERT( uxCriticalNesting[ portGET_CORE_ID() ] );
    uxCriticalNesting[ portGET_CORE_ID() ] --;
    if( uxCriticalNesting[ portGET_CORE_ID() ]  == 0 )
    {
        portENABLE_INTERRUPTS();
    }
}
/*-----------------------------------------------------------*/

BaseType_t xPortIsInsideInterrupt( void )
{
    uint32_t ulCurrentInterrupt = 0;
    BaseType_t xReturn;

    /* Obtain the number of the currently executing interrupt. Interrupt Program
     * Status Register (BASEPRI) holds the exception number of the currently-executing
     * exception or zero for Thread mode.*/
    __asm volatile ( "mrc p15, 0, %0, c4, c6, 0" : "=r" ( ulCurrentInterrupt )::"memory" );

    if( ulCurrentInterrupt == 0 )
    {
        xReturn = pdFALSE;
    }
    else
    {
        xReturn = pdTRUE;
    }

    return xReturn;
}
/*-----------------------------------------------------------*/

#if ( configSUPPORT_DYNAMIC_ALLOCATION == 1 )
    /*
     * This function is called to create a task that uses the FPU instead of xCreateTask
     */
    BaseType_t xTaskCreateFpu(  TaskFunction_t pxTaskCode,
                                const char * const pcName, /*lint !e971 Unqualified char types are allowed for strings and single characters only. */
                                const configSTACK_DEPTH_TYPE usStackDepth,
                                void * const pvParameters,
                                UBaseType_t uxPriority,
                                pTaskHandle_t * const pxCreatedTask )
    {
        BaseType_t xReturn;
        TaskHandle_t vTaskToSet;
        TaskHandle_t * vCreatedTask;

        #if ( configENABLE_FPU == 1 )
            {
                if(pxCreatedTask != NULL)
                {
                    vCreatedTask = pxCreatedTask;
                }
                else
                {
                    vCreatedTask = &vTaskToSet;
                }
                task_use_fpu = 1;
                xReturn = xTaskCreate( pxTaskCode, pcName, usStackDepth, pvParameters, uxPriority, vCreatedTask );
                vTaskSetThreadLocalStoragePointer((*vCreatedTask), 0, (void *)(*(StackType_t *)(*(StackType_t *)vCreatedTask) + portSIZE_OF_TASK_STACK_USE_FPU));
            }
        #else /* configENABLE_FPU */
            {
                xReturn = xTaskCreate( pxTaskCode, pcName, usStackDepth, pvParameters, uxPriority, pxCreatedTask );
            }
        #endif /* configENABLE_FPU */

        return xReturn;
    }
#endif /* configSUPPORT_DYNAMIC_ALLOCATION */

/*-----------------------------------------------------------*/

#if ( configSUPPORT_STATIC_ALLOCATION == 1 )
    /*
     * This function is called to create a task that uses the FPU instead of xCreateTaskStatic
     */
    TaskHandle_t xTaskCreateStaticFpu(  TaskFunction_t pxTaskCode,
                                        const char * const pcName, /*lint !e971 Unqualified char types are allowed for strings and single characters only. */
                                        const uint32_t ulStackDepth,
                                        void * const pvParameters,
                                        UBaseType_t uxPriority,
                                        StackType_t * const puxStackBuffer,
                                        StaticTask_t * const pxTaskBuffer )
    {
        TaskHandle_t xReturn;

        #if ( configENABLE_FPU == 1 )
            {
                task_use_fpu = 1;
                xReturn = xTaskCreateStatic( pxTaskCode, pcName, ulStackDepth,pvParameters, uxPriority, puxStackBuffer, pxTaskBuffer );
                vTaskSetThreadLocalStoragePointer(xReturn, 0, (void *)(*(StackType_t *)(*(StackType_t *)(&xReturn)) + portSIZE_OF_TASK_STACK_USE_FPU));
            }
        #else /* configENABLE_FPU */
            {
                xReturn = xTaskCreateStatic( pxTaskCode, pcName, ulStackDepth,pvParameters, uxPriority, puxStackBuffer, pxTaskBuffer );
            }
        #endif /* configENABLE_FPU */

        return xReturn;
    }
#endif /* configSUPPORT_STATIC_ALLOCATION */

/*-----------------------------------------------------------*/

#if configENABLE_FPU == 1
void vPortUndefinedInstruction(void) __attribute__ (( naked ))
#if defined(_S32DS_FREERTOS_)
    __attribute__ ((section (".systeminit")));
#else
    __attribute__((section(".handlers")));
#endif
void vPortUndefinedInstruction(void)
{
    OSASM(" sub     lr, lr, #2                              \t\n"); /* update link register */
    OSASM(" stmfd   r13!, {r0-r3, r12, r14}                 \t\n"); /* save r0 - r3, r12, r14 to und stack */

    OSASM(" fmrx    r0, FPEXC                               \t\n"); /* Check FPEXC.EN is on */
    OSASM(" tst     r0, #(1 << 30)                          \t\n");
#if defined(__thumb__)
    OSASM(" it      ne                                      \t\n");
#endif /* __thumb__ */
    OSASM(" bne     undefine_exc                            \t\n");

    /* FPEXC.EN == 0 : for fpu exception */
    OSASM(" orr     r0, r0, #(1 << 30)                      \t\n");
    OSASM(" vmsr    FPEXC, r0                               \t\n"); /* Enable FPU */

    OSASM(" mov     r0, #0                                  \t\n");
    OSASM(" mov     r1, #0                                  \t\n");
    OSASM(" bl      pvTaskGetThreadLocalStoragePointer      \t\n");
    OSASM(" ldr     r2, =newFpuCtx                          \t\n");
    OSASM(" str     r0, [r2]                                \t\n"); /* get pointer & solicited/unsolicited (size) */

    OSASM(" mrs     r1, spsr_und                            \t\n"); /* Read SPSR into r1 to find previous program's mode */
    OSASM(" and     r1, r1, #0x1F                           \t\n");
    OSASM(" cmp     r1, #0x1F                               \t\n"); /* check if undefine from task(sys) or from interrupt(svc) */
    OSASM(" bne     svc_mode                                \t\n");

    /* spsr.M == 0x1F : An task which uses FPU instruction */
    OSASM(" ldr     r2, =prevFpuCtx                         \t\n");
    OSASM(" ldr     r2, [r2]                                \t\n"); /* get FPU stack pointer of prev task: prevFpuCtx */
    OSASM(" ldr     r1, =b_SwitchByIRQ                      \t\n");
    OSASM(" ldr     r1, [r1]                                \t\n"); /* get boolean check switch by IRQ or Yield: b_SwitchByIRQ */
    OSASM(" cmp     r2, #0                                  \t\n"); /* compare prevFpuCtx with NULL */
    OSASM(" beq     1f                                      \t\n");

    /* prevFpuCtx != 0 : prev task has used fpu */
    OSASM(" mov     r3, #0                                  \t\n");
    OSASM(" cmp     r0, r2                                  \t\n"); /* compare newFpuCtx with prevFpuCtx */
    OSASM(" beq     OR                                      \t\n");
    OSASM(" mov     r3, #1                                  \t\n");

    OSASM(" OR:                                             \t\n");
    OSASM(" cmp     r1, #1                                  \t\n"); /* compare b_SwitchByIRQ with 1 */
    OSASM(" bne     END_OR                                  \t\n");
    OSASM(" mov     r3, #1                                  \t\n");

    OSASM(" END_OR:                                         \t\n");

    OSASM(" cmp     r3, #1                                  \t\n"); /* compare R3 for (newFpuCtx != prevFpuCtx) ||  (b_SwitchByIRQ == 1) */
    OSASM(" bne     2f                                      \t\n");

    /* newFpuCtx != prevFpuCtx : the previous task is other than
     * current task else do nothing, same task was scheduled */
    /* save context from fpu to prevFpuCtx (fpu_buffer, sizetask) */
    OSASM(" cmp     r1, #0x1                                \t\n"); /* compare b_SwitchByIRQ with 1 */
    OSASM(" beq     3f                                      \t\n");

    /* bit0 == 0 : switch by yeild function
     * save (D8-D15), set first stack position = 0(8 bytes) */
    OSASM(" mov     r1, #0                                  \t\n");
    OSASM(" stmdb   r2!, {r1}                               \t\n");
    OSASM(" vstmdb  r2!, {d8-d15}                           \t\n");
    OSASM(" b       4f                                      \t\n");

    /* bit0 == 1 : switch by IRQ function
     * save (D0-D31), set first stack position = 1(8 bytes) */
    OSASM(" 3:                                              \t\n");
    OSASM(" mov     r1, #1LL                                \t\n");
    OSASM(" stmdb   r2!, {r1}                               \t\n");
    OSASM(" vstmdb  r2!, {d0-d15}                           \t\n");
    OSASM(" vstmdb  r2!, {d16-d31}                          \t\n");

    OSASM(" 4:                                              \t\n");
    OSASM(" fmrx    r1, FPSCR                               \t\n"); /* save: FPSCR, FPEXC */
    OSASM(" stmdb   r2!, {r1}                               \t\n");
    OSASM(" fmrx    r1, FPEXC                               \t\n");
    OSASM(" stmdb   r2!, {r1}                               \t\n");

    /* restore fpu from newFpuCtx(fpu_buffer, size) */
    OSASM(" ldmdb   r0!, {r1}                               \t\n"); /* restore fpu from newFpuCtx(fpu_buffer, size) to FPU based on first 8 bytes for size */
    OSASM(" cmp     r1, #1                                  \t\n"); /* compare first stack position with 1 */
    OSASM(" beq     3f                                      \t\n");

    /* first stack position == 0 : switch by yeild function, restore (D8-D15)*/
    OSASM(" vldmdb  r0!, {d8-d15}                           \t\n");
    OSASM(" b       4f                                      \t\n");

    /* first stack position == 1 : switch by irq, restore (D0-D31)*/
    OSASM(" 3:                                              \t\n");
    OSASM(" vldmdb  r0!, {d0-d15}                           \t\n");
    OSASM(" vldmdb  r0!, {d16-d31}                          \t\n");

    OSASM(" 4:                                              \t\n");
    OSASM(" ldmdb   r0!, {r1}                               \t\n"); /* restore: FPSCR, FPEXC */
    OSASM(" fmxr    FPSCR, r1                               \t\n");
    OSASM(" ldmdb   r0!, {r1}                               \t\n");
    OSASM(" fmxr    FPEXC, r1                               \t\n");
    OSASM(" b       2f                                      \t\n");

    /* prevFpuCtx == 0: there is no previous task using fpu,
     * so the crt can load its own registers */
    OSASM(" 1:                                              \t\n");
    OSASM(" ldmdb   r0!, {r1}                               \t\n"); /* restore fpu from newFpuCtx */
    OSASM(" vldmdb  r0!, {d0-d15}                           \t\n");
    OSASM(" vldmdb  r0!, {d16-d31}                          \t\n");
    OSASM(" ldmdb   r0!, {r1}                               \t\n");
    OSASM(" fmxr    FPSCR, r1                               \t\n"); /* restore: FPSCR, FPEXC */
    OSASM(" ldmdb   r0!, {r1}                               \t\n");
    OSASM(" fmxr    FPEXC, r1                               \t\n");

    /* exit FPU execution for a task using the FPU instruction */
    OSASM(" 2:                                              \t\n");
    OSASM(" ldr     r0, =newFpuCtx                          \t\n");
    OSASM(" ldr     r0, [r0]                                \t\n");
    OSASM(" ldr     r1, =prevFpuCtx                         \t\n");
    OSASM(" str     r0, [r1]                                \t\n"); /* prevFpuCtx <= newFpuCtx */
    OSASM(" b       exit                                    \t\n");

    /* spsr.M == 0x13 : An interrupt which uses FPU instruction */
    OSASM(" svc_mode:                                       \t\n");
    OSASM(" ldr     r0, =ulPortInterruptHasFPUContext       \t\n");
    OSASM(" ldr     r0, [r0]                                \t\n");
    OSASM(" cmp     r0, #0                                  \t\n"); /* check for task or interrupt was interrupted */
    OSASM(" bgt     1f                                      \t\n");

    OSASM(" ldr     r0, =prevFpuCtx                         \t\n");
    OSASM(" ldr     r2, [r0]                                \t\n");
    OSASM(" ldr     r1, =b_SwitchByIRQ                      \t\n");
    OSASM(" ldr     r1, [r1]                                \t\n"); /* get boolean check switch by IRQ or Yield: b_SwitchByIRQ */
    OSASM(" cmp     r1, #1                                  \t\n"); /* compare b_SwitchByIRQ with 1 */
    OSASM(" beq     2f                                      \t\n");

    /* ulPortInterruptHasFPUContext < 1 : task was interrupted */
    OSASM(" cmp     r2, #0                                  \t\n"); /* compare prevFpuCtx with NULL */
    OSASM(" beq     2f                                      \t\n");

    /* prevFpuCtx != 0 : prev task has used fpu.
     * Don't need to save fpu if previous task didn't use fpu*/
    OSASM(" mov     r1, #1LL                                \t\n"); /* save context from fpu to prevFpuCtx (fpu_buffer, sizetask) */
    OSASM(" stmdb   r2!, {r1}                               \t\n"); /* save 8 bytes 1 */
    OSASM(" vstmdb  r2!, {d0-d15}                           \t\n");
    OSASM(" vstmdb  r2!, {d16-d31}                          \t\n");
    OSASM(" fmrx    r1, FPSCR                               \t\n"); /* save: FPSCR, FPEXC */
    OSASM(" stmdb   r2!, {r1}                               \t\n");
    OSASM(" fmrx    r1, FPEXC                               \t\n");
    OSASM(" stmdb   r2!, {r1}                               \t\n");

    OSASM(" 2:                                              \t\n");
    OSASM(" mov     r1, #0                                  \t\n");
    OSASM(" str     r1, [r0]                                \t\n"); /* prevFpuCtx = 0, save was done */
    OSASM(" ldr     r2, =b_SwitchByIRQ                      \t\n");
    OSASM(" str     r1, [r2]                                \t\n"); /* get boolean check switch by IRQ or Yield: b_SwitchByIRQ */
    OSASM(" mrs     r0, sp_irq                              \t\n"); /* set first new_global_irq_fpu_stack's value is start of irq stack */
    OSASM(" ldr     r1, =new_global_irq_fpu_stack           \t\n");
    OSASM(" str     r0, [r1]                                \t\n");
    OSASM(" ldr     r1, =global_irq_fpu_stack               \t\n");
    OSASM(" str     r0, [r1]                                \t\n"); /* global_irq_fpu_stack = new_global_irq_fpu_stack */

    OSASM(" ldr     r1, =ulPortInterruptHasFPUContext       \t\n");
    OSASM(" ldr     r0, [r1]                                \t\n");
    OSASM(" add     r0, r0, #1                              \t\n");
    OSASM(" str     r0, [r1]                                \t\n"); /* ulPortInterruptHasFPUContext++ */
    OSASM(" b       exit                                    \t\n");

    /* ulPortInterruptHasFPUContext >= 1 : interrupt was interrupted */
    OSASM(" 1:                                              \t\n");
    OSASM(" ldr     r1, =uxInterruptNested                  \t\n");
    OSASM(" ldr     r1, [r1]                                \t\n");
    OSASM(" cmp     r0, r1                                  \t\n"); /* ulPortInterruptHasFPUContext < uxInterruptNested */
    OSASM(" bge     exit                                    \t\n");

    /* only if the number of tasks using the fpu is greater than
     * the number of nested interrupts.Avoid the case that in nested
     * interrupts an interrupt uses fpu before and after the other
     * interrupt takes precedence. Next time we don't need to save
     * the fpu because we saved it last time */
    /* IRQ1( FPU Instruction ) --> IRQ2 --> IRQ1( FPU Instruction ) */
    OSASM(" ldr     r0, =new_global_irq_fpu_stack           \t\n");
    OSASM(" ldr     r2, [r0]                                \t\n");
    OSASM(" ldr     r3, =global_irq_fpu_stack               \t\n");
    OSASM(" ldr     r1, [r3]                                \t\n");
    OSASM(" cmp     r1, r2                                  \t\n"); /* new_global_irq_fpu_stack != global_irq_fpu_stack */
    OSASM(" beq     3f                                      \t\n");

    /* only if the new_global_irq_fpu_stack != global_irq_fpu_stack
     * Avoid the case that in nested interrupts, in interrupt(IRQ1)
     * occurs more than 2 other interrupts (these interrupts use fpu)
     * (IRQ2,IRQ3,..). Then in the next interrupt (IRQ3/IRQ2(second
     * times)), we don't need to save the fpu because the previous
     * interrupt(IRQ2) is already saved */
    /* IRQ1 --> IRQ2( FPU Instruction ) --> IRQ1 --> IRQ2/IRQ3( FPU Instruction ) --> IRQ1 */
    OSASM(" str     r2, [r3]                                \t\n"); /* global_irq_fpu_stack = new_global_irq_fpu_stack */
    OSASM(" mov     r1, #1LL                                \t\n"); /* save context from fpu to new_global_irq_fpu_stack (fpu_buffer, size_interrupt) */
    OSASM(" stmdb   r2!, {r1}                               \t\n"); /* save 8 bytes 1 */
    OSASM(" vstmdb  r2!, {d0-d15}                           \t\n");
    OSASM(" vstmdb  r2!, {d16-d31}                          \t\n");
    OSASM(" fmrx    r1, FPSCR                               \t\n"); /* save: FPSCR, FPEXC */
    OSASM(" stmdb   r2!, {r1}                               \t\n");
    OSASM(" fmrx    r1, FPEXC                               \t\n");
    OSASM(" stmdb   r2!, {r1}                               \t\n");

    OSASM(" 3:                                              \t\n");
    OSASM(" ldr     r1, =ulPortInterruptHasFPUContext       \t\n");
    OSASM(" ldr     r0, [r1]                                \t\n");
    OSASM(" add     r0, r0, #1                              \t\n");
    OSASM(" str     r0, [r1]                                \t\n"); /* ulPortInterruptHasFPUContext++ */

    /* return from undefine instruction */
    OSASM(" exit:                                           \t\n");
#if defined(__thumb__)
    OSASM(" ldmfd   r13!, {r0-r3, r12, r14}                 \t\n"); /* restore r0 - r3, r12 from und stack */
    OSASM(" movs    pc, lr                                  \t\n");
#else
    OSASM(" ldmfd   r13!, {r0-r3, r12, pc}^                 \t\n"); /* restore r0 - r3, r12, r15 from und stack */
#endif
    /* FPEXC bit30 == 1 : The FPU is already enabled then und_ins is
     * not of the FPU => for any other instructions => stop */
    OSASM(" undefine_exc:                                   \t\n");
    OSASM(" b .                                             \t\n"); /* Loop */
}
#endif /* configENABLE_FPU */

/*-----------------------------------------------------------*/

#if (configUSE_SMP==1)
#define OSSTRING(x) #x

/* read 32bit from coprocessor */
#define __MRC(coproc, opcode1, CRn, CRm, opcode2) ({ \
            register uint32_t _tempRegRt; \
            __asm volatile(" "OSSTRING(mrc p##coproc)", "OSSTRING(opcode1)", %0, "OSSTRING(c##CRn)", "OSSTRING(c##CRm)", "OSSTRING(opcode2)" ": "=r"(_tempRegRt));   \
            _tempRegRt; })
extern BaseType_t vPortGET_CORE_ID(void)
{
    BaseType_t coreID;
    coreID = __MRC( 15,  0, 0,  0,  5);
    coreID = coreID & 0x3;
    return coreID;
}
#define read_sysreg32(op1, CRn, CRm, op2)						\
({																\
	uint32_t val;												\
	__asm__ volatile ("mrc p15, " #op1 ", %0, c" #CRn ", c"		\
			  #CRm ", " #op2 : "=r" (val) :: "memory");			\
	val;								\
})
#define write_sysreg32(val, op1, CRn, CRm, op2)					\
({									\
	__asm__ volatile ("mcr p15, " #op1 ", %0, c" #CRn ", c"		\
			  #CRm ", " #op2 :: "r" (val) : "memory");	\
})

#define read_sysreg64(op1, CRm)						\
({									\
	uint64_t val;							\
	__asm__ volatile ("mrrc p15, " #op1 ", %Q0, %R0, c"		\
			  #CRm : "=r" (val) :: "memory");		\
	val;								\
})

#define write_sysreg64(val, op1, CRm)						\
({															\
	__asm__ volatile ("mcrr p15, " #op1 ", %Q0, %R0, c"		\
			  #CRm :: "r" (val) : "memory");				\
})

#define MAKE_REG64_HELPER(reg, op1, CRm)				\
	static inline  uint64_t read_##reg(void)			\
	{								\
		return read_sysreg64(op1, CRm);				\
	}								\
	static inline void write_##reg(uint64_t val)		\
	{								\
		write_sysreg64(val, op1, CRm);				\
	}

#define MAKE_REG_HELPER(reg, op1, CRn, CRm, op2)			\
	static inline uint32_t read_##reg(void)			\
	{								\
		return read_sysreg32(op1, CRn, CRm, op2);		\
	}								\
	static inline void write_##reg(uint32_t val)		\
	{								\
		write_sysreg32(val, op1, CRn, CRm, op2);		\
	}

MAKE_REG64_HELPER(ICC_SGI1R, 0, 12);
MAKE_REG_HELPER(mpidr, 0, 0, 0, 5);

/* MPIDR */
#define MPIDR_AFFLVL_MASK	(0xff)

#define MPIDR_AFF0_SHIFT	(0)
#define MPIDR_AFF1_SHIFT	(8)
#define MPIDR_AFF2_SHIFT	(16)

#define MPIDR_AFFLVL(mpidr, aff_level) \
		(((mpidr) >> MPIDR_AFF##aff_level##_SHIFT) & MPIDR_AFFLVL_MASK)

#define write_sysreg(val, reg) write_##reg(val)
#define read_sysreg(reg) read_##reg()
#define GET_MPIDR()		read_sysreg(mpidr)
#define MPIDR_TO_CORE(mpidr)	MPIDR_AFFLVL(mpidr, 0)


/* ICC SGI macros */
#define SGIR_TGT_MASK		(0xffff)
#define SGIR_AFF1_SHIFT		(16)
#define SGIR_AFF2_SHIFT		(32)
#define SGIR_AFF3_SHIFT		(48)
#define SGIR_AFF_MASK		(0xff)
#define SGIR_INTID_SHIFT	(24)
#define SGIR_INTID_MASK		(0xf)
#define SGIR_IRM_SHIFT		(40)
#define SGIR_IRM_MASK		(0x1)
#define SGIR_IRM_TO_AFF		(0)


#define GICV3_SGIR_VALUE(_aff3, _aff2, _aff1, _intid, _irm, _tgt)	\
	((((uint64_t) (_aff3) & SGIR_AFF_MASK) << SGIR_AFF3_SHIFT) |	\
	 (((uint64_t) (_irm) & SGIR_IRM_MASK) << SGIR_IRM_SHIFT) |	\
	 (((uint64_t) (_aff2) & SGIR_AFF_MASK) << SGIR_AFF2_SHIFT) |	\
	 (((_intid) & SGIR_INTID_MASK) << SGIR_INTID_SHIFT) |		\
	 (((_aff1) & SGIR_AFF_MASK) << SGIR_AFF1_SHIFT) |		\
	 ((_tgt) & SGIR_TGT_MASK))

void gic_raise_sgi(unsigned int sgi_id, uint64_t target_aff,
		   uint16_t target_list)
{
	uint32_t aff3, aff2, aff1;
	uint64_t sgi_val;

	/* Extract affinity fields from target */
	aff1 = MPIDR_AFFLVL(target_aff, 1);
	aff2 = MPIDR_AFFLVL(target_aff, 2);
	/* There is no Aff3 in AArch32 MPIDR */
	aff3 = 0;

	sgi_val = GICV3_SGIR_VALUE(aff3, aff2, aff1, sgi_id,
				   SGIR_IRM_TO_AFF, target_list);

    __asm__ volatile ("dsb sy" ::: "memory");
	write_sysreg(sgi_val, ICC_SGI1R);
	__asm__ volatile ("isb" ::: "memory");
}
/*-----------------------------------------------------------*/

void vYieldCore( int xCoreID )
{

    /* Remove warning if configASSERT is not defined.
     * xCoreID is not used in this function due to this is a dual-core system. The yielding core must be different from the current core. */
    ( void ) xCoreID;
        /* Remove warning if configASSERT is not defined. */
	uint32_t aff0;

	uint32_t mpidr = MPIDR_TO_CORE(GET_MPIDR());

	aff0 = MPIDR_AFFLVL(xCoreID, 0);

    configASSERT( xCoreID != ( int ) portGET_CORE_ID() );

    gic_raise_sgi(0, (uint64_t)xCoreID, 1 << aff0);

    #if portRUNNING_ON_BOTH_CORES

        /* Non blocking, will cause interrupt on other core if the queue isn't already full,
         * in which case an IRQ must be pending */
        freertos_irq( xOtherCoreID, xCoreID );
    #endif
}
#endif

extern void* __VECTOR_RAM[];
/*-----------------------------------------------------------*/
void vPortInterruptDispatcher(void) __attribute__ (( naked ))
#if defined(_S32DS_FREERTOS_)
    __attribute__ ((section (".systeminit")));
#else
    __attribute__((section(".handlers")));
#endif
void vPortInterruptDispatcher(void)
{
    OSASM(" push {r3, r12, r14}                             \t\n"); /* save r12, r14 to interrupt stack */
    OSASM(" mrc p15, 0, r14, c12, c12, 0                    \t\n"); /* get interrupt id, r14 */
    OSASM(" mrc p15, 0, r12, c12, c11, 3                    \t\n"); /* get interrupt priority, r12 */
    OSASM(" cmp r12,%0\t\n"::"i" ( configMAX_SYSCALL_INTERRUPT_PRIORITY ):);
    OSASM(" bge osInt                                       \t\n"); /* OS interrupt */
    OSASM(" stmfd sp!, {r0-r2}                              \t\n"); /* save volatiles to IRQ stack, r12 & r14 already saved */
#if defined(_S32DS_FREERTOS_)
#if defined (S32Z27) || defined (S32E27) || defined(S32E28)
    OSASM("ldr  r1, =0x419A0004                            \t\n");  /* GetCoreID MSCM_CPXNUM_ADDR */
    OSASM("ldr  r2, [r1]                                   \t\n");
    OSASM("ldr  r1, =R52VtabeRefArray                               \t\n");  /* Get VTABLE list */
	OSASM("add  r1, r1, r2, lsl #2                         \t\n");  /* Add core offset */
	OSASM("ldr  r0, [r1]                                   \t\n");  /* Get VTABLE */
#elif defined (S32NZ55)
    OSASM(" push {r1,r2,r4}                                \t\n");
    OSASM("mrc  p15, 0, r4, c0, c0, 5                      \t\n"); /* Corresponds to MPIDR. Each RTU has two clusters and each cluster has 2 cores */
    OSASM("and  r2, r4, #0xFF                              \t\n");/* Aff0 */
    OSASM("lsr  r4, r4, #8                                 \t\n"); /* Aff1 */
    OSASM("and  r4, r4, #0xFF                              \t\n");
    OSASM("add  r4, r2, r4, lsl #1                         \t\n"); /* CoreID = Aff0 + (Aff1*2) */
    OSASM("mov  r2,r4                                      \t\n");
    OSASM("ldr  r1, =R52VtabeRefArray                      \t\n"); /* Get VTABLE list */
    OSASM("add  r1, r1, r2, lsl #2                         \t\n"); /* Add core offset */
    OSASM("ldr  r0, [r1]                                   \t\n"); /* Get VTABLE */
    OSASM("pop {r1,r2,r4}                                  \t\n");
#else
    OSASM(" ldr r0, =VTABLE                                 \t\n");
#endif
#else
    OSASM(" ldr r0, =__VECTOR_RAM                           \t\n");
#endif
    OSASM(" mrs r1, LR_svc                                  \t\n");
    OSASM(" mrs r2, SPSR_svc                                \t\n");
    OSASM(" mrs r3, SPSR_irq                                \t\n");
    OSASM(" push {r1, r2, r3, r14}                          \t\n"); /* save: LR_svc, SPSR_svc, SPSR_irq and the interrupt ID */

#if configENABLE_FPU == 1
    OSASM(" fmrx    r2, FPEXC                               \t\n");
    OSASM(" and     r2, r2, #~(1 << 30)                     \t\n");
    OSASM(" fmxr    FPEXC, r2                               \t\n"); /* Disable FPU */
    OSASM(" ldr     r3, =new_global_irq_fpu_stack           \t\n");
    OSASM(" ldr     r1, [r3]                                \t\n"); /* get value of new_global_irq_fpu_stack */
    OSASM(" ldr     r2, =ulPortInterruptHasFPUContext       \t\n");
    OSASM(" ldr     r2, [r2]                                \t\n"); /* get value of ulPortInterruptHasFPUContext */
    OSASM(" push    {r1, r2}                                \t\n"); /* save these to IRQ stack */
    OSASM(" sub     r1, r1, %0\t\n"::"i" (portSIZE_OF_STACK_FPU):);
    OSASM(" str     r1, [r3]                                \t\n"); /* set new irq_fpu stack */
#endif /* configENABLE_FPU */

    OSASM(" ldr r2, [r0, r14, lsl #2]                       \t\n"); /* get user interrupt vector */
    OSASM(" cpsie i, #0x13                                  \t\n"); /* enable interrupts and enter to svc mode */
    OSASM(" cmp r2, #0                                      \t\n");
#if defined(__thumb__)
    OSASM(" it ne                                           \t\n");
#endif
    OSASM(" blxne r2                                        \t\n"); /* call user interrupt handler */
    OSASM(" cpsid i, 0x12                                   \t\n"); /* disable interrupts and enter to irq mode */

#if configENABLE_FPU == 1
    OSASM(" ldr     r1, =ulPortInterruptHasFPUContext       \t\n");
    OSASM(" ldr     r2, [r1]                                \t\n");
    OSASM(" pop     {r3, r14}                               \t\n"); /* restore: new_global_irq_fpu_stack, local_ulPortInterruptHasFPUContext */
    OSASM(" cmp     r14, r2                                 \t\n"); /* compare local_ulPortInterruptHasFPUContext with ulPortInterruptHasFPUContext */
    OSASM(" bge     1f                                      \t\n");
    /* local_ulPortInterruptHasFPUContext < ulPortInterruptHasFPUContext :
     * the irq uses fpu*/
    OSASM(" sub     r2, r2, #1                              \t\n"); /* ulPortInterruptHasFPUContext -- */
    OSASM(" str     r2, [r1]                                \t\n");
    OSASM(" cmp     r2, #0                                  \t\n"); /* compare ulPortInterruptHasFPUContext with NULL */
    OSASM(" beq     2f                                      \t\n");
    /* ulPortInterruptHasFPUContext != 0 : this is not the last IRQ
     * in the nested interrupt */
    OSASM(" ldr     r2, =new_global_irq_fpu_stack           \t\n");
    OSASM(" ldr     r2, [r2]                                \t\n");
    OSASM(" ldr     r1, =global_irq_fpu_stack               \t\n");
    OSASM(" str     r2, [r1]                                \t\n"); /* global_irq_fpu_stack <= new_global_irq_fpu_stack */

    OSASM(" ldmdb   r2!, {r1}                               \t\n");  /* restore fpu from new_global_irq_fpu_stack */
    OSASM(" vldmdb  r2!, {d0-d15}                           \t\n");
    OSASM(" vldmdb  r2!, {d16-d31}                          \t\n");
    OSASM(" ldmdb   r2!, {r1}                               \t\n"); /* restore: FPSCR, FPEXC */
    OSASM(" fmxr    FPSCR, r1                               \t\n");
    OSASM(" ldmdb   r2!, {r1}                               \t\n");
    OSASM(" fmxr    FPEXC, r1                               \t\n");

    OSASM(" ldr     r2, =new_global_irq_fpu_stack           \t\n");
    OSASM(" str     r3, [r2]                                \t\n"); /* restore: new_global_irq_fpu_stack */
    /* ulPortInterruptHasFPUContext == 0 : this is the last IRQ use fpu */
    OSASM(" 2:                                              \t\n");
    OSASM(" fmrx    r2, FPEXC                               \t\n"); /* Disable FPU */
    OSASM(" and     r2, r2, #~(1 << 30)                     \t\n");
    OSASM(" fmxr    FPEXC, r2                               \t\n");
    /* local_ulPortInterruptHasFPUContext == ulPortInterruptHasFPUContext :
     * the irq not uses fpu */
    OSASM(" 1:                                              \t\n");
    OSASM(" ldr     r1, =uxInterruptNested                  \t\n");
    OSASM(" ldr     r1, [r1]                                \t\n");
    OSASM(" cmp     r1, #1                                  \t\n"); /* compare uxInterruptNested with 1 */
    OSASM(" bne     3f                                      \t\n");
    /* uxInterruptNested == 1 : This is the last IRQ
     * reset before return to task. Prepare for another interrupt */
    OSASM(" ldr     r1, =global_irq_fpu_stack               \t\n");
    OSASM(" ldr     r2, =new_global_irq_fpu_stack           \t\n");
    OSASM(" mov     r3, #0                                  \t\n");
    OSASM(" str     r3, [r1]                                \t\n"); /* reset global irq_fpu stack */
    OSASM(" str     r3, [r2]                                \t\n"); /* reset new irq_fpu stack */

    OSASM(" mov     r0, #0                                  \t\n"); /* first parameter 0 */
    OSASM(" mov     r1, #0                                  \t\n"); /* Second parameter 1 */
    OSASM(" bl      pvTaskGetThreadLocalStoragePointer      \t\n"); /* Call function */
    OSASM(" mov     r3, r0                                  \t\n"); /* Save result to R3 */
    OSASM(" ldr     r0, =prevFpuCtx                         \t\n");
    OSASM(" ldr     r1, [r0]                                \t\n"); /* Get prevFpuCtx */
    OSASM(" cmp     r1, r3                                  \t\n"); /* Solicited for switched out task */
    OSASM(" beq     3f                                      \t\n");
    /* newFpuCtx != prevFpuCtx : the switching occurs */
    /* unsolicited for switched out task,
     * buffer to save status, registers d0-d31 */
    OSASM(" ldr     r2, =b_SwitchByIRQ                      \t\n");
    OSASM(" ldr     r1, [r2]                                \t\n"); /* get boolean check switch by IRQ or Yield: b_SwitchByIRQ */
    OSASM(" mov     r1, #1                                  \t\n"); /* b_SwitchByIRQ = 1 */
    OSASM(" str     r1, [r2]                                \t\n");
    OSASM(" 3:                                              \t\n");
#endif /* configENABLE_FPU */
    OSASM(" pop {r1, r2, r3, r14}                           \t\n"); /* restore: LR_svc, SPSR_svc, SPSR_irq and the interrupt ID */
    OSASM(" msr LR_svc, r1                                  \t\n");
    OSASM(" msr SPSR_svc, r2                                \t\n");
    OSASM(" msr SPSR_irq, r3                                \t\n");
    OSASM(" mcr p15, 0, r14, c12, c12, 1                    \t\n"); /* End Of Interrupt */
    OSASM(" dsb                                             \t\n");
    OSASM(" ldmfd sp!, {r0-r3, r12, r14}                    \t\n"); /* restore user registers */
    OSASM(" subs pc, lr, #4                                 \t\n"); /* return from irq */
    OSASM(" osInt:                                          \t\n"); /* OS interrupt handler */
#if (configUSE_SMP==1)
    OSASM(" push {r0, r1,r2,r4}                             \t\n");
    OSASM(" mrc  p15, 0, r4, c0, c0, 5                      \t\n"); /* Corresponds to MPIDR. Each RTU has two clusters and each cluster has 2 cores */
    OSASM(" and  r2, r4, #0xFF                              \t\n");/* Aff0 */
    OSASM(" lsr  r4, r4, #8                                 \t\n"); /* Aff1 */
    OSASM(" and  r4, r4, #0xFF                              \t\n");
    OSASM(" add  r4, r2, r4, lsl #1                         \t\n"); /* CoreID = Aff0 + (Aff1*2) */
    OSASM(" lsl  r4, r4, #2                                 \t\n"); /* CoreID = CoreID*4 */
    OSASM(" ldr r12, =uxInterruptNested                     \t\n");
    OSASM(" add  r12, r4, r12                               \t\n");/* uxInterruptNested [CoreID] */
    OSASM(" pop {r0, r1,r2,r4}                              \t\n");
#else
    OSASM(" ldr r12, =uxInterruptNested                     \t\n");
#endif
    OSASM(" ldr r3, [r12]                                   \t\n");
    OSASM(" cmp r3, #0                                      \t\n");
    OSASM(" add r3, r3, #1                                  \t\n"); /* inc uxInterruptNested */
    OSASM(" str r3, [r12]                                   \t\n"); /* save uxInterruptNested */
#if defined(__thumb__)
    OSASM(" beq 2f                                          \t\n");
    OSASM(" stmdb sp!, {r0-r2}                              \t\n"); /* uxInterruptNested != 0, using irq stack */
    OSASM(" b 1f                                            \t\n"); /* jump to "prepare Call user handler" */
    OSASM(" 2:                                              \t\n");
#else
    OSASM(" stmnedb sp!, {r0-r2}                            \t\n"); /* uxInterruptNested != 0, using irq stack */
    OSASM(" bne 1f                                          \t\n"); /* jump to "prepare Call user handler" */
#endif

    OSASM(" mrs r12, SP_usr                                 \t\n"); /* get user stack to r12 */
    OSASM(" sub r12, r12, #12                               \t\n"); /* space for r3, r12, r14 */
    OSASM(" stmdb    r12!, {r0-r2}                          \t\n"); /* save users regs to user stack, */
    OSASM(" ldmfd sp!, {r0-r2}                              \t\n"); /* get r3 -> r0, r12 -> r1, r14-> r2, unload irq stack */
    OSASM(" add r3, r12, #24                                \t\n");
    OSASM(" stmdb r3, {r0-r2}                               \t\n");
    OSASM(" msr SP_usr, r12                                 \t\n"); /* update user stack, save r12*/
#if (configUSE_SMP==1)
    OSASM(" mrc  p15, 0, r4, c0, c0, 5                      \t\n"); /* Corresponds to MPIDR. Each RTU has two clusters and each cluster has 2 cores */
    OSASM(" and  r2, r4, #0xFF                              \t\n");/* Aff0 */
    OSASM(" lsr  r4, r4, #8                                 \t\n"); /* Aff1 */
    OSASM(" and  r4, r4, #0xFF                              \t\n");
    OSASM(" add  r4, r2, r4, lsl #1                         \t\n"); /* CoreID = Aff0 + (Aff1*2) */
    OSASM(" lsl  r4, r4, #2                                 \t\n"); /* CoreID = CoreID*4 */
    OSASM(" ldr  r1, =pxCurrentTCBs                         \t\n"); /* Get current TCB */
    OSASM(" add  r1, r4, r1                                 \t\n");/* Aff0 */
#else
    OSASM(" ldr  r1, =pxCurrentTCB                          \t\n"); /* Get current TCB */
#endif
    OSASM(" ldr r1, [r1]                                    \t\n");
    OSASM(" push {r1}                                       \t\n"); /* current task TCB to IRQ stack */
    OSASM(" 1:                                              \t\n"); /* prepare Call user handler */
#if defined(_S32DS_FREERTOS_)
#if defined (S32Z27) || defined (S32E27) || defined(S32E28)
    OSASM("ldr  r1, =0x419A0004                            \t\n");  /* GetCoreID MSCM_CPXNUM_ADDR */
    OSASM("ldr  r2, [r1]                                   \t\n");
    OSASM("and r2, r2, #3                                    \t\n");
    OSASM("ldr  r1, =R52VtabeRefArray                                \t\n");  /* Get VTABLE list */
	OSASM("add  r1, r1, r2, lsl #2                         \t\n");  /* Add core offset */
	OSASM("ldr  r0, [r1]                                   \t\n");  /* Get VTABLE */
#elif defined (S32NZ55)
    OSASM("push {r1,r2,r4}                                 \t\n");
    OSASM("mrc  p15, 0, r4, c0, c0, 5                      \t\n"); /* Corresponds to MPIDR. Each RTU has two clusters and each cluster has 2 cores */
    OSASM("and  r2, r4, #0xFF                              \t\n");/* Aff0 */
    OSASM("lsr  r4, r4, #8                                 \t\n"); /* Aff1 */
    OSASM("and  r4, r4, #0xFF                              \t\n");
    OSASM("add  r4, r2, r4, lsl #1                         \t\n"); /* CoreID = Aff0 + (Aff1*2) */
    OSASM("mov  r2,r4                                      \t\n");
    OSASM("ldr  r1, =R52VtabeRefArray                      \t\n"); /* Get VTABLE list */
    OSASM("add  r1, r1, r2, lsl #2                         \t\n"); /* Add core offset */
    OSASM("ldr  r0, [r1]                                   \t\n"); /* Get VTABLE */
    OSASM("pop {r1,r2,r4}                                  \t\n");
#else
    OSASM(" ldr r0, =VTABLE                                 \t\n");
#endif
#else
    OSASM(" ldr r0, =__VECTOR_RAM                           \t\n");
#endif
    OSASM(" mrs r1, LR_svc                                  \t\n");
    OSASM(" mrs r2, SPSR_svc                                \t\n");
    OSASM(" mrs r3, SPSR_irq                                \t\n");
    OSASM(" push {r1, r2, r3, r14}                          \t\n"); /* save: LR_svc, SPSR_svc, SPSR_irq and the interrupt ID */

#if configENABLE_FPU == 1
    OSASM(" fmrx    r2, FPEXC                               \t\n");
    OSASM(" and     r2, r2, #~(1 << 30)                     \t\n");
    OSASM(" fmxr    FPEXC, r2                               \t\n"); /* Disable FPU */
    OSASM(" ldr     r3, =new_global_irq_fpu_stack           \t\n");
    OSASM(" ldr     r1, [r3]                                \t\n"); /* get value of new_global_irq_fpu_stack */
    OSASM(" ldr     r2, =ulPortInterruptHasFPUContext       \t\n");
    OSASM(" ldr     r2, [r2]                                \t\n"); /* get value of ulPortInterruptHasFPUContext */
    OSASM(" push    {r1, r2}                                \t\n"); /* save these to IRQ stack */
    OSASM(" sub     r1, r1, %0\t\n"::"i" (portSIZE_OF_STACK_FPU):);
    OSASM(" str     r1, [r3]                                \t\n"); /* set new irq_fpu stack */
#endif /* configENABLE_FPU */

    OSASM(" ldr r2, [r0, r14, lsl #2]                       \t\n");
    OSASM(" cpsie i, #0x13                                  \t\n"); /* enable interrupts, go to svc mode */
    OSASM(" cmp r2, #0                                      \t\n");
#if defined(__thumb__)
    OSASM(" it ne                                           \t\n");
#endif
    OSASM(" blxne r2                                        \t\n"); /* call user interrupt handler */

    OSASM(" cpsid i, #0x12                                  \t\n"); /* disable interrupts, enter in IRQ mode */

#if configENABLE_FPU == 1
    OSASM(" ldr     r1, =ulPortInterruptHasFPUContext       \t\n");
    OSASM(" ldr     r2, [r1]                                \t\n");
    OSASM(" pop     {r3, r14}                               \t\n"); /* restore: new_global_irq_fpu_stack, local_ulPortInterruptHasFPUContext */
    OSASM(" cmp     r14, r2                                 \t\n"); /* compare local_ulPortInterruptHasFPUContext with ulPortInterruptHasFPUContext */
    OSASM(" bge     1f                                      \t\n");
    /* local_ulPortInterruptHasFPUContext < ulPortInterruptHasFPUContext :
     * the irq uses fpu*/
    OSASM(" sub     r2, r2, #1                              \t\n"); /* ulPortInterruptHasFPUContext -- */
    OSASM(" str     r2, [r1]                                \t\n");
    OSASM(" cmp     r2, #0                                  \t\n"); /* compare ulPortInterruptHasFPUContext with NULL */
    OSASM(" beq     2f                                      \t\n");
    /* ulPortInterruptHasFPUContext != 0 : this is not the last IRQ
     * in the nested interrupt */
    OSASM(" ldr     r2, =new_global_irq_fpu_stack           \t\n");
    OSASM(" ldr     r2, [r2]                                \t\n");
    OSASM(" ldr     r1, =global_irq_fpu_stack               \t\n");
    OSASM(" str     r2, [r1]                                \t\n"); /* global_irq_fpu_stack <= new_global_irq_fpu_stack */

    OSASM(" ldmdb   r2!, {r1}                               \t\n");  /* restore fpu from new_global_irq_fpu_stack */
    OSASM(" vldmdb  r2!, {d0-d15}                           \t\n");
    OSASM(" vldmdb  r2!, {d16-d31}                          \t\n");
    OSASM(" ldmdb   r2!, {r1}                               \t\n"); /* restore: FPSCR, FPEXC */
    OSASM(" fmxr    FPSCR, r1                               \t\n");
    OSASM(" ldmdb   r2!, {r1}                               \t\n");
    OSASM(" fmxr    FPEXC, r1                               \t\n");

    OSASM(" ldr     r2, =new_global_irq_fpu_stack           \t\n");
    OSASM(" str     r3, [r2]                                \t\n"); /* restore: new_global_irq_fpu_stack */
    /* ulPortInterruptHasFPUContext == 0 : this is the last IRQ use fpu */
    OSASM(" 2:                                              \t\n");
    OSASM(" fmrx    r2, FPEXC                               \t\n"); /* Disable FPU */
    OSASM(" and     r2, r2, #~(1 << 30)                     \t\n");
    OSASM(" fmxr    FPEXC, r2                               \t\n");

    /* local_ulPortInterruptHasFPUContext == ulPortInterruptHasFPUContext :
     * the irq not uses fpu */
    OSASM(" 1:                                              \t\n");
    OSASM(" ldr     r1, =uxInterruptNested                  \t\n");
    OSASM(" ldr     r1, [r1]                                \t\n");
    OSASM(" cmp     r1, #1                                  \t\n"); /* compare uxInterruptNested with 1 */
    OSASM(" bne     3f                                      \t\n");
    /* uxInterruptNested == 1 : This is the last IRQ
     * reset before return to task. Prepare for another interrupt */
    OSASM(" ldr     r1, =global_irq_fpu_stack               \t\n");
    OSASM(" ldr     r2, =new_global_irq_fpu_stack           \t\n");
    OSASM(" mov     r3, #0                                  \t\n");
    OSASM(" str     r3, [r1]                                \t\n"); /* reset global irq_fpu stack */
    OSASM(" str     r3, [r2]                                \t\n"); /* reset new irq_fpu stack */

    OSASM(" mov     r0, #0                                  \t\n"); /* first parameter 0 */
    OSASM(" mov     r1, #0                                  \t\n"); /* Second parameter 1 */
    OSASM(" bl      pvTaskGetThreadLocalStoragePointer      \t\n"); /* Call function */
    OSASM(" mov     r3, r0                                  \t\n"); /* Save result to R3 */
    OSASM(" ldr     r0, =prevFpuCtx                         \t\n");
    OSASM(" ldr     r1, [r0]                                \t\n"); /* Get prevFpuCtx */
    OSASM(" cmp     r1, r3                                  \t\n"); /* Solicited for switched out task */
    OSASM(" beq     3f                                      \t\n");
    /* newFpuCtx != prevFpuCtx : the switching occurs */
    /* unsolicited for switched out task,
     * buffer to save status, registers d0-d31 */
    OSASM(" ldr     r2, =b_SwitchByIRQ                      \t\n");
    OSASM(" ldr     r1, [r2]                                \t\n"); /* get boolean check switch by IRQ or Yield: b_SwitchByIRQ */
    OSASM(" mov     r1, #1                                  \t\n"); /* b_SwitchByIRQ = 1 */
    OSASM(" str     r1, [r2]                                \t\n");
    OSASM(" 3:                                              \t\n");
#endif /* configENABLE_FPU */

    OSASM(" pop {r1, r2, r3, r14}                           \t\n"); /* restore: LR_svc, SPSR_svc, SPSR_irq and the interrupt ID */
#if (configUSE_SMP==1)
    OSASM(" push {r0, r1,r2,r4}                             \t\n");
    OSASM(" mrc  p15, 0, r4, c0, c0, 5                      \t\n"); /* Corresponds to MPIDR. Each RTU has two clusters and each cluster has 2 cores */
    OSASM(" and  r2, r4, #0xFF                              \t\n");/* Aff0 */
    OSASM(" lsr  r4, r4, #8                                 \t\n"); /* Aff1 */
    OSASM(" and  r4, r4, #0xFF                              \t\n");
    OSASM(" add  r4, r2, r4, lsl #1                         \t\n"); /* CoreID = Aff0 + (Aff1*2) */
    OSASM(" lsl  r4, r4, #2                                 \t\n"); /* CoreID = CoreID*4 */
    OSASM(" ldr  r12, =uxInterruptNested                    \t\n");
    OSASM(" add  r12, r4, r12                               \t\n");/* uxInterruptNested [CoreID] */
    OSASM(" pop {r0, r1,r2,r4}                              \t\n");
#else
    OSASM(" ldr r12, =uxInterruptNested                     \t\n");
#endif
    OSASM(" msr LR_svc, r1                                  \t\n");
    OSASM(" msr SPSR_svc, r2                                \t\n");
    OSASM(" msr SPSR_irq, r3                                \t\n");
    OSASM(" mcr p15, 0, r14, c12, c12, 1                    \t\n"); /* End Of Interrupt */
    OSASM(" dsb                                             \t\n");
    OSASM(" ldr r3, [r12]                                   \t\n");
    OSASM(" subs r3, r3, #1                                 \t\n"); /* dec uxInterruptNested */
    OSASM(" str r3, [r12]                                   \t\n"); /* save uxInterruptNested */
#if defined(__thumb__)
    OSASM(" beq 2f                                          \t\n");
    OSASM(" ldmfd sp!, {r0-r3, r12, r14}                    \t\n"); /* return from irq uxInterruptNested != 0 */
    OSASM(" subs pc, lr, #4                                 \t\n"); /* return from irq uxInterruptNested != 0 */
    OSASM(" 2:                                              \t\n");
#else
    OSASM(" ldmnefd sp!, {r0-r3, r12, r14}                  \t\n"); /* return from irq uxInterruptNested != 0 */
    OSASM(" subnes pc, lr, #4                               \t\n"); /* return from irq uxInterruptNested != 0 */
#endif
    OSASM(" mrs r0, SP_usr                                  \t\n"); /* get user stack to r0 */
#if (configUSE_SMP==1)
    OSASM(" mrc  p15, 0, r4, c0, c0, 5                      \t\n"); /* Corresponds to MPIDR. Each RTU has two clusters and each cluster has 2 cores */
    OSASM(" and  r2, r4, #0xFF                              \t\n");/* Aff0 */
    OSASM(" lsr  r4, r4, #8                                 \t\n"); /* Aff1 */
    OSASM(" and  r4, r4, #0xFF                              \t\n");
    OSASM(" add  r4, r2, r4, lsl #1                         \t\n"); /* CoreID = Aff0 + (Aff1*2) */
    OSASM(" lsl  r4, r4, #2                                 \t\n"); /* CoreID = CoreID*4 */
    OSASM(" ldr  r14, =pxCurrentTCBs                         \t\n"); /* Get current TCB */
    OSASM(" add  r14, r4, r14                    \t\n");/* Aff0 */
#else
    OSASM(" ldr  r14, =pxCurrentTCB                         \t\n"); /* Get current TCB */
#endif
    OSASM(" pop {r1}                                        \t\n"); /* get prev TCB from IRQ stack */
    OSASM(" ldr r14, [r14]                                  \t\n");
    OSASM(" cmp r14, r1                                     \t\n"); /* compare crt TCB with previous TCB */
#if defined(__thumb__)
    OSASM(" bne 2f                                          \t\n");
    OSASM(" add r1, r0, #24                                 \t\n"); /* unload user stack, no schedule */
    OSASM(" msr SP_usr, r1                                  \t\n"); /* update user stack, no schedule */
    OSASM(" b nothingToDo                                   \t\n");
    OSASM(" 2:                                              \t\n");
#else
    OSASM(" addeq r1, r0, #24                               \t\n"); /* unload user stack, no schedule */
    OSASM(" msreq SP_usr, r1                                \t\n"); /* update user stack, no schedule */
    OSASM(" beq nothingToDo                                 \t\n");
#endif
    OSASM(" mrc p15, 0, r3, c4, c6, 0                       \t\n"); /* get interrupt mask, r3 */

#if defined(__thumb__)
    OSASM(" sub r0, #4                                      \t\n"); /* Space for LR_USR */
    OSASM(" stmfd r0, {r3-r11}                              \t\n"); /* int_mask + save registers r14_usr, old task */
    OSASM(" mrs r2, LR_usr                                  \t\n"); /* get user LINK to r2 */
    OSASM(" str r2, [r0]                                    \t\n"); /* save to user stack */
    OSASM(" sub r0, r0, #36                                 \t\n"); /* update r0 */
#else
    OSASM(" stmfd r0, {r3-r11, r14}^                        \t\n"); /* int_mask + save registers r14_usr, old task */
    OSASM(" sub r0, r0, #40                                 \t\n"); /* update r0 */
#endif
#if (configUSE_SMP==1)
    OSASM(" push {r0, r1,r2,r4}                             \t\n");
    OSASM(" mrc  p15, 0, r4, c0, c0, 5                      \t\n"); /* Corresponds to MPIDR. Each RTU has two clusters and each cluster has 2 cores */
    OSASM(" and  r2, r4, #0xFF                              \t\n");/* Aff0 */
    OSASM(" lsr  r4, r4, #8                                 \t\n"); /* Aff1 */
    OSASM(" and  r4, r4, #0xFF                              \t\n");
    OSASM(" add  r4, r2, r4, lsl #1                         \t\n"); /* CoreID = Aff0 + (Aff1*2) */
    OSASM(" ldr r3, =uxCriticalNesting                      \t\n");
    OSASM(" add  r3, r4, r3                                 \t\n");/* uxCriticalNesting [CoreID] */
    OSASM(" pop {r0, r1,r2,r4}                              \t\n");
#else
    OSASM(" ldr r3, =uxCriticalNesting                      \t\n");
#endif
    OSASM(" mrs r2, spsr_irq                                \t\n"); /* unsolicited (SPSR) to R2 */
    OSASM(" ldr r3, [r3]                                    \t\n"); /* get critical */
    OSASM(" stmfd r0!, {r2, r3}                             \t\n"); /* write type of yield, and critical to user task stack */

    OSASM(" str r0, [r1]                                    \t\n"); /* save stack pointer to old task TCB */
    OSASM(" ldr r0, [r14]                                   \t\n"); /* get new task stack */

    OSASM(" ldmfd r0!, {r2-r4}                              \t\n"); /* get switch type (0 or CPSR), critical, intmask */
    OSASM(" mcr p15, 0, r4, c4, c6, 0                       \t\n"); /* Write r4 into ICC_PMR, task mask level */
#if (configUSE_SMP==1)
    OSASM(" push {r0, r1,r2}                                \t\n");
    OSASM(" mrc  p15, 0, r0, c0, c0, 5                      \t\n"); /* Corresponds to MPIDR. Each RTU has two clusters and each cluster has 2 cores */
    OSASM(" and  r2, r0, #0xFF                              \t\n");/* Aff0 */
    OSASM(" lsr  r0, r0, #8                                 \t\n"); /* Aff1 */
    OSASM(" and  r0, r0, #0xFF                              \t\n");
    OSASM(" add  r0, r2, r0, lsl #1                         \t\n"); /* CoreID = Aff0 + (Aff1*2) */
    OSASM(" lsl  r4, r4, #2                                 \t\n"); /* CoreID = CoreID*4 */
    OSASM(" mov  r2,r4                                      \t\n");
    OSASM(" ldr r4, =uxCriticalNesting                      \t\n");
    OSASM(" add  r4, r2, r4                                 \t\n");/* uxCriticalNesting [CoreID] */
    OSASM(" pop {r0, r1,r2}                                 \t\n");
#else
    OSASM(" ldr r4, =uxCriticalNesting                      \t\n");
#endif
    OSASM(" str r3, [r4]                                    \t\n"); /* store critical */
    OSASM(" ldmfd r0!, {r4-r11, r14}                        \t\n"); /* Get saved regs + r14_usr to r14_irq */
    OSASM(" cmp r2, #0                                      \t\n"); /* is solicited? solicited yield does not need a specific CPSR so, it can use the previous CPSR/SPSR */
#if defined(__thumb__)
    OSASM(" bne 2f                                          \t\n");
    OSASM(" msr SP_usr, r0                                  \t\n"); /* solicited, update user stack */
    OSASM(" movw r2, 0x13f                                  \t\n");
    OSASM(" msr spsr_irq, r2                                \t\n");
    OSASM(" movs pc, lr                                     \t\n"); /* exit from interrupt, solicited return, no need to subs */
    OSASM(" 2:                                              \t\n");
#else
    OSASM(" msreq SP_usr, r0                                \t\n"); /* solicited, update user stack */
    OSASM(" moveqs pc, lr                                   \t\n"); /* exit from interrupt, solicited return, no need to subs */
#endif
    OSASM(" msr spsr_irq, r2                                \t\n"); /* save spsr, unsolicited */
    OSASM(" add r1, r0, #24                                 \t\n");
    OSASM(" msr SP_usr, r1                                  \t\n"); /* update user stack register */
    OSASM(" msr LR_usr, r14                                 \t\n"); /* update user link register */
    OSASM(" nothingToDo:                                    \t\n");
    OSASM(" add r0, r0, #4                                  \t\n");
    OSASM(" ldmfd    r0!, {r1-r3, r12, r14}                 \t\n"); /* save r14_irq to user stack, */
    OSASM(" ldr r0, [r0, #-24]                              \t\n");
    OSASM(" subs pc, lr, #4                                 \t\n"); /* exit from interrupt */
}

#if (configUSE_SMP==1)
extern void xPortCoreSysTickHandler(void);
void xPortCoreSysTickHandler(void) __attribute__ (( naked ))
#if defined(_S32DS_FREERTOS_)
    __attribute__ ((section (".systeminit")));
#else
    __attribute__((section(".handlers")));
#endif
void xPortCoreSysTickHandler(void)
{
    OSASM("push    {r3,r14}\t\n");
    portDISABLE_INTERRUPTS();
    {
        vTaskSwitchContext(vPortGET_CORE_ID()); //vPortGET_CORE_ID()
    }
    portENABLE_INTERRUPTS();
    gic500_clearIntPending(0);
    OSASM(" pop {r3, pc}                              \t\n");
}

int32_t GateSmp_tryLock(uint32_t *gateWord)
{
    OSASM("GateSmp_tryLock:                                   \t\n");
    OSASM("ldrex r1, [r0]                                     \t\n"); /* load gateWord to r1*/
    OSASM("cmp r1, #1                                         \t\n"); /* is locked already? */
    OSASM("beq 1f                                             \t\n"); /* if so, leave with fail */
    OSASM("mov r2, #1                                         \t\n"); /* locked = 1 */
    OSASM("strex r1, r2, [r0]                                 \t\n"); /* if so attempt to grab it */
    OSASM("cmp r1, #0                                         \t\n"); /* did we get it? zero is yes */
    OSASM("bne GateSmp_tryLock                                \t\n"); /* if not, loop while in contention */
    OSASM("1:                                                 \t\n"); /* locked is already*/
    OSASM("mov r0, r1                                         \t\n"); /* return */
    OSASM("dmb sy                                             \t\n");
}

void GateSmp_unlock(uint32_t *gateWord) {
  int32_t unlocked = 0;
 
  // Set the gate value to unlocked with volatile casts for (potential) memory ordering
  *(volatile int32_t*)gateWord = unlocked;
  __asm__ volatile ("dsb sy" ::: "memory");
}
#endif
void xPortSysTickHandler( void )
{
#if (configUSE_SMP==1)
    for (uint8_t CoreID = 0; CoreID < configNUMBER_OF_CORES; CoreID++)
    {
        /* The core's systick does not call the vYieldCore itself */
        if ( CoreID != vPortGET_CORE_ID() )
        {
            vYieldCore(CoreID);
        }
    }
#endif

    vUpdateTimer();
    /* The SysTick runs at the lowest interrupt priority, so when this interrupt
    executes all interrupts must be unmasked.  There is therefore no need to
    save and then restore the interrupt mask value as its value is already
    known. */
    portDISABLE_INTERRUPTS();
    {
        /* Increment the RTOS tick. */
        if( xTaskIncrementTick() != pdFALSE )
        {
            #if(configUSE_SMP==1)
            {
                vTaskSwitchContext(vPortGET_CORE_ID()); //vPortGET_CORE_ID()
            }
            #else
            {
                vTaskSwitchContext();
            }
            #endif
        }
    }
    portENABLE_INTERRUPTS();

}

extern void SVC_Handler(unsigned long* info);
void vPortSVCDispatcher(void) __attribute__ (( naked ))
#if defined(_S32DS_FREERTOS_)
    __attribute__ ((section (".systeminit")));
#else
    __attribute__((section(".handlers")));
#endif
void vPortSVCDispatcher(void)
{
    OSASM(" stmfd r13!, {r0-r3, r12, r14}   \t\n"); /* save r0 - r3, r12, r14 to SVC stack */
    OSASM(" mrc p15, 0, r0, c4, c6, 0       \t\n"); /* get interrupt priority, r0 */
    OSASM(" mov r12,%0\t\n"::"i" ( configMAX_SYSCALL_INTERRUPT_PRIORITY ):);
    OSASM(" push {r0}                       \t\n"); /* save current interrupt mask */
    OSASM(" mcr p15, 0, r12, c4, c6, 0      \t\n"); /* do not allow OS interrupts to execute during SVC */
    OSASM(" cpsie i                         \t\n"); /* enable interrupts */
    OSASM(" mov r0, r13                     \t\n");
    OSASM(" ldr r3, =SVC_Handler            \t\n");
    OSASM(" cmp r3, #0                      \t\n");
#if defined(__thumb__)
    OSASM(" it ne                           \t\n"); /* conditional prefix */
#endif
    OSASM(" blxne r3                        \t\n"); /* call user svc handler */
    OSASM(" cpsid i                         \t\n"); /* disable interrupts */
    OSASM(" pop {r0}                        \t\n"); /* get previous saved interrupt mask */
    OSASM(" mcr p15, 0, r0, c4, c6, 0       \t\n"); /* restore mask */
#if defined(__thumb__)
    OSASM(" ldmfd r13!, {r0-r3, r12, r14}   \t\n"); /* restore r0 - r3, r12 from SVC stack */
    OSASM(" movs pc, lr                     \t\n");
#else
    OSASM(" ldmfd r13!, {r0-r3, r12, pc}^   \t\n"); /* restore r0 - r3, r12, r15 from SVC stack */
#endif
}

