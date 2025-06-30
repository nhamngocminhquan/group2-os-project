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

#ifndef PORTMACRO_H
#define PORTMACRO_H
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void vPortYield(void) __attribute__ (( naked ));

#define OSASM __asm volatile

/*-----------------------------------------------------------
 * Port specific definitions.
 *
 * The settings in this file configure FreeRTOS correctly for the
 * given hardware and compiler.
 *
 * These settings should not be altered.
 *-----------------------------------------------------------
 */

/* Type definitions. */
#define portCHAR        char
#define portFLOAT       float
#define portDOUBLE      double
#define portLONG        long
#define portSHORT       short
#define portSTACK_TYPE  uint32_t
#define portBASE_TYPE   long
#ifndef configSTACK_DEPTH_TYPE

/* Defaults to uint16_t for backward compatibility, but can be overridden
 * in FreeRTOSConfig.h if uint16_t is too restrictive. */
    #define configSTACK_DEPTH_TYPE    uint16_t
#endif

typedef portSTACK_TYPE StackType_t;
typedef long BaseType_t;
typedef unsigned long UBaseType_t;
typedef struct tskTaskControlBlock * pTaskHandle_t;

#if( configUSE_16_BIT_TICKS == 1 )
    typedef uint16_t TickType_t;
    #define portMAX_DELAY ( TickType_t ) 0xffff
#else
    typedef uint32_t TickType_t;
    #define portMAX_DELAY ( TickType_t ) 0xffffffffUL

    /* 32-bit tick type on a 32-bit architecture, so reads of the tick count do
    not need to be guarded with a critical section. */
    #define portTICK_TYPE_IS_ATOMIC 1
#endif
/*-----------------------------------------------------------*/

/* Architecture specifics. */
#define portSTACK_GROWTH            ( -1 )
#define portTICK_PERIOD_MS          ( ( TickType_t ) 1000 / configTICK_RATE_HZ )
#define portBYTE_ALIGNMENT          8
/*-----------------------------------------------------------*/

#define portINLINE  __inline

#ifndef portFORCE_INLINE
    #define portFORCE_INLINE inline __attribute__(( always_inline))
#endif



#define portINTC_GIC_PRIO_BITS                  (5u)
#define portINTC_GIC_PRIO_SHIFT                 (8u - portINTC_GIC_PRIO_BITS)
#define portINTC_GIC_CONVERT_PRIO_SET(prio)     ((((prio) & 0x1Fu) ^ 0x1Fu) << portINTC_GIC_PRIO_SHIFT)
#ifndef portINTC_GIC_MIN_PRIO
    #define portINTC_GIC_MIN_PRIO                   (0)
#endif

#define portYIELD()                     vPortYield()

/* This port uses the critical nesting count from the TCB rather than
 * maintaining a separate value and then saving this value in the task stack. */
#define portCRITICAL_NESTING_IN_TCB    1
/* Critical section management. */
extern void vPortEnterCritical( void );
extern void vPortExitCritical( void );
#define portSET_INTERRUPT_MASK_FROM_ISR()       ulPortRaiseBASEPRI()
#define portCLEAR_INTERRUPT_MASK_FROM_ISR(x)    vPortSetBASEPRI(x)
#define portDISABLE_INTERRUPTS()                vPortRaiseBASEPRI()
#define portENABLE_INTERRUPTS()                 vPortSetBASEPRI(portINTC_GIC_CONVERT_PRIO_SET( portINTC_GIC_MIN_PRIO ))
#define portENTER_CRITICAL()                    vPortEnterCritical()
#define portEXIT_CRITICAL()                     vPortExitCritical()

#if (configUSE_SMP==1)
#define portRTOS_LOCK_COUNT 2
#define portMAX_CORE_COUNT 2
#define ISR_LOCK   (0u)
#define TASK_LOCK  (1u)
extern BaseType_t vPortGET_CORE_ID(void);
void vYieldCore( int xCoreID );
#define portGET_CORE_ID()                       vPortGET_CORE_ID()
#define portSET_INTERRUPT_MASK()                ulPortRaiseBASEPRI()                                      
#define portCLEAR_INTERRUPT_MASK( ulState )     vPortSetBASEPRI(ulState)
#define portGET_ISR_LOCK()                      vPortRecursiveLock(ISR_LOCK, pdTRUE)
#define portRELEASE_ISR_LOCK()                  vPortRecursiveLock(ISR_LOCK, pdFALSE)
#define portGET_TASK_LOCK()                     vPortRecursiveLock(TASK_LOCK, pdTRUE)
#define portRELEASE_TASK_LOCK()                 vPortRecursiveLock(TASK_LOCK, pdFALSE)
#define portYIELD_CORE( a )                     vYieldCore( a )
#define portENTER_CRITICAL_FROM_ISR()           vTaskEnterCriticalFromISR()
#define portEXIT_CRITICAL_FROM_ISR(x)           vTaskExitCriticalFromISR( x )

int32_t GateSmp_tryLock(uint32_t *gateWord);

void GateSmp_unlock(uint32_t *gateWord); 

/* Read 64b value shared between cores */
static inline uint64_t Get_64(volatile uint64_t* x)
{
    return *x;
}

/* Write 64b value shared between cores */
static inline void Set_64(volatile uint64_t* x, uint64_t value)
{
    *x = value;
}

portFORCE_INLINE static void vPortRaiseBASEPRI( void );

/*-----------------------------------------------------------*/
static inline void vPortRecursiveLock(uint32_t ulLockNum, BaseType_t uxAcquire)
{
    /* Which core owns the lock */
    static uint64_t ucOwnedByCore[ portMAX_CORE_COUNT ];
    /* Lock count a core owns */
    static uint64_t ucRecursionCountByLock[ portRTOS_LOCK_COUNT ];

    /* Index 0 is used for ISR lock and Index 1 is used for task lock */
    static uint32_t GateWord[ portRTOS_LOCK_COUNT ];
    uint32_t ulCoreNum = portGET_CORE_ID();
    uint32_t ulLockBit = 1u << ulLockNum;

    /* Lock acquire */
    if (uxAcquire)
    {
        /* Check if spinlock is available */
        /* If spinlock is not available check if the core owns the lock */
        /* If the core owns the lock wait increment the lock count by the core */
        /* If core does not own the lock wait for the spinlock */
        if( GateSmp_tryLock( &GateWord[ulLockNum] ) != 0)
        {
            /* Check if the core owns the spinlock */
            if( Get_64(&ucOwnedByCore[ulCoreNum]) & ulLockBit )
            {
                configASSERT( Get_64(&ucRecursionCountByLock[ulLockNum]) != 255u);
                Set_64(&ucRecursionCountByLock[ulLockNum], (Get_64(&ucRecursionCountByLock[ulLockNum])+1));
                return;
            }

            /* Preload the gate word into the cache */
            uint32_t dummy = GateWord[ulLockNum];
            dummy++;

            /* Wait for spinlock */
            while( GateSmp_tryLock(&GateWord[ulLockNum]) != 0);
        }

        //  /* Add barrier to ensure lock is taken before we proceed */
        // OSASM (
        //     "dmb"
        // );

        /* Assert the lock count is 0 when the spinlock is free and is acquired */
        configASSERT(Get_64(&ucRecursionCountByLock[ulLockNum]) == 0);

        /* Set lock count as 1 */
        Set_64(&ucRecursionCountByLock[ulLockNum], 1);
        /* Set ucOwnedByCore */
        Set_64(&ucOwnedByCore[ulCoreNum], (Get_64(&ucOwnedByCore[ulCoreNum]) | ulLockBit));
    }
    /* Lock release */
    else
    {
        /* Assert the lock is not free already */
        configASSERT( (Get_64(&ucOwnedByCore[ulCoreNum]) & ulLockBit) != 0 );
        configASSERT( Get_64(&ucRecursionCountByLock[ulLockNum]) != 0 );

        /* Reduce ucRecursionCountByLock by 1 */
        Set_64(&ucRecursionCountByLock[ulLockNum], (Get_64(&ucRecursionCountByLock[ulLockNum]) - 1) );

        if( !Get_64(&ucRecursionCountByLock[ulLockNum]) )
        {
            Set_64(&ucOwnedByCore[ulCoreNum], (Get_64(&ucOwnedByCore[ulCoreNum]) & ~ulLockBit));
            GateSmp_unlock(&GateWord[ulLockNum]);
            // /* Add barrier to ensure lock is taken before we proceed */
            // OSASM (
            //     "dmb"
            // );
        }
    }
}
#endif

/* Task function macros as described on the FreeRTOS.org WEB site.  These are
not necessary for to use this port.  They are defined so the common demo files
(which build with all the ports) will build. */
#define portTASK_FUNCTION_PROTO( vFunction, pvParameters ) void vFunction( void *pvParameters )
#define portTASK_FUNCTION( vFunction, pvParameters ) void vFunction( void *pvParameters )

/* Architecture specific optimisations. */
#ifndef configUSE_PORT_OPTIMISED_TASK_SELECTION
    #define configUSE_PORT_OPTIMISED_TASK_SELECTION 1
#endif

#if configUSE_PORT_OPTIMISED_TASK_SELECTION == 1

    /* Generic helper function. */
    __attribute__( ( always_inline ) ) static inline uint8_t ucPortCountLeadingZeros( uint32_t ulBitmap )
    {
    uint8_t ucReturn;

        __asm volatile ( "clz %0, %1" : "=r" ( ucReturn ) : "r" ( ulBitmap ) : "memory" );
        return ucReturn;
    }

    /* Check the configuration. */
    #if( configMAX_PRIORITIES > 32 )
        #error configUSE_PORT_OPTIMISED_TASK_SELECTION can only be set to 1 when configMAX_PRIORITIES is less than or equal to 32.  It is very rare that a system requires more than 10 to 15 difference priorities as tasks that share a priority will time slice.
    #endif

    /* Store/clear the ready priorities in a bit map. */
    #define portRECORD_READY_PRIORITY( uxPriority, uxReadyPriorities ) ( uxReadyPriorities ) |= ( 1UL << ( uxPriority ) )
    #define portRESET_READY_PRIORITY( uxPriority, uxReadyPriorities ) ( uxReadyPriorities ) &= ~( 1UL << ( uxPriority ) )

    /*-----------------------------------------------------------*/

    #define portGET_HIGHEST_PRIORITY( uxTopPriority, uxReadyPriorities ) uxTopPriority = ( 31UL - ( uint32_t ) ucPortCountLeadingZeros( ( uxReadyPriorities ) ) )

#endif /* configUSE_PORT_OPTIMISED_TASK_SELECTION */

/*-----------------------------------------------------------*/

/*-----------------------------------------------------------*/

portFORCE_INLINE static void vPortRaiseBASEPRI( void )
{
uint32_t ulNewBASEPRI;

    __asm volatile
    (
        " mov %0, %1                                              \n" \
        " mcr p15, 0, %0, c4, c6, 0                               \n" \
        :"=r" (ulNewBASEPRI) : "i" ( configMAX_SYSCALL_INTERRUPT_PRIORITY ) : "memory"
    );
}

/*-----------------------------------------------------------*/

portFORCE_INLINE static uint32_t ulPortRaiseBASEPRI( void )
{
uint32_t ulOriginalBASEPRI, ulNewBASEPRI;

    __asm volatile
    (
        " mrc p15, 0, %0, c4, c6, 0                               \n" \
        " mov %1, %2                                              \n" \
        " mcr p15, 0, %1, c4, c6, 0                               \n" \
        :"=r" (ulOriginalBASEPRI), "=r" (ulNewBASEPRI) : "i" ( configMAX_SYSCALL_INTERRUPT_PRIORITY ) : "memory"
    );

    return ulOriginalBASEPRI;
}
/*-----------------------------------------------------------*/

portFORCE_INLINE static void vPortSetBASEPRI( uint32_t ulNewMaskValue )
{
    __asm volatile
    (
        " mcr p15, 0, %0, c4, c6, 0   " :: "r" ( ulNewMaskValue ) : "memory"
    );
}
/*-----------------------------------------------------------*/

#define portYIELD_FROM_ISR(x)                if ((x)) {                     \
                                                portDISABLE_INTERRUPTS();   \
                                                vTaskSwitchContext();       \
                                                portENABLE_INTERRUPTS();    \
                                            }
/*-----------------------------------------------------------*/

#if ( configSUPPORT_DYNAMIC_ALLOCATION == 1 )
extern BaseType_t xTaskCreateFpu( TaskFunction_t pxTaskCode,
                                  const char * const pcName, /*lint !e971 Unqualified char types are allowed for strings and single characters only. */
                                  const configSTACK_DEPTH_TYPE usStackDepth,
                                  void * const pvParameters,
                                  UBaseType_t uxPriority,
								  pTaskHandle_t * const pxCreatedTask );
#endif /* configSUPPORT_DYNAMIC_ALLOCATION */
/*-----------------------------------------------------------*/

extern BaseType_t xPortIsInsideInterrupt( void );
/*-----------------------------------------------------------*/

#ifdef __cplusplus
}
#endif
#endif /* PORTMACRO_H */
