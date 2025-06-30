/*
* Copyright 2016 Freescale Semiconductor, Inc.
* Copyright-2023 NXP
*/

#include <stdarg.h>

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "FreeRTOS.h"
#include "task.h"

#include "hw_system.h"
#include "nvic.h"

#include "semphr.h"
#define MAIN_PRIORITY (tskIDLE_PRIORITY + 1)

SemaphoreHandle_t xSemaphore0;
SemaphoreHandle_t xSemaphore1;
SemaphoreHandle_t xSemaphore2;

#if configUSE_TICK_HOOK > 0

static TaskHandle_t taskH0, taskH1, taskH2;
uint32_t svcCnt = 0;
__attribute__((section("privileged_data"))) volatile uint32_t ui32_ms_cnt = 0;
__attribute__((section("privileged_data"))) volatile uint32_t ui32_get_ID_core2 = 0;

volatile uint32_t counter = 0;
volatile uint32_t handlerFlag = 0;

void vApplicationTickHook(void);
void PIT0_Handler(void);
void timerDisable(void);
void timerSetUp(void);

void vApplicationTickHook(void)
{
    // increments every 1ms if configCPU_CLOCK_HZ is set correctly
    ui32_ms_cnt++;
}
void vAssertCalled(uint32_t ulLine, const char *pcFile)
{

}

void vApplicationStackOverflowHook(xTaskHandle pxTask, char *pcTaskName)
{

}

void vApplicationMallocFailedHook(void)
{

}
#endif

volatile uint32_t task0_count = 0;
volatile uint32_t task1_count = 0;
volatile uint32_t task2_count = 0;
void task0(void *p1) /* pri MAIN_PRIORITY +2 */
{
    (void)p1;
        /*get value of tich tick counter*/
    while (1)
    {
        /*just little delay, assume task still run*/
        if (pdTRUE == xSemaphoreTake(xSemaphore0, portMAX_DELAY))
		{
            task0_count++;
		}
    }
}

void task1(void *p2) /* pri MAIN_PRIORITY +1 */
{
    (void)p2;
    while (1)
    {
        if (pdTRUE == xSemaphoreTake(xSemaphore1, portMAX_DELAY))
		{
            task1_count++;
		}
        xSemaphoreGive(xSemaphore0);
    }
}

void task2(void *p2) /* pri MAIN_PRIORITY +1 */
{
    (void)p2;
    timerSetUp();
    while (1)
    {
        if (pdTRUE == xSemaphoreTake(xSemaphore2, portMAX_DELAY))
		{
            task2_count++;
		}
        xSemaphoreGive(xSemaphore1);
    }
}

void timerSetUp(void){
    PIT_DISABLE(0);
    PIT_TIMER_DISABLE(0,1);
    PIT_TIMER_LOAD_VAL(0, 1, (uint32_t)(configCPU_CLOCK_HZ/configTICK_RATE_HZ + 0x20000));
    PIT_TIMER_ENABLE_INT(0, 1);
    PIT_TIMER_ENABLE(0,1);
    PIT_ENABLE(0);
    vInitInterruptTable(PIT0_INT_ID, PIT0_Handler);
    vEnableInterrupt(PIT0_INT_ID, 3);

}
void timerDisable(){
    PIT_DISABLE(0);
}

void PIT0_Handler(){
    BaseType_t xHigherPriorityTaskWoken = pdFALSE;
    PIT_TIMER_CLEAR_INT(0,1);
    if (pdTRUE != xSemaphoreGiveFromISR(xSemaphore2, &xHigherPriorityTaskWoken))
	{
		counter++;
	}
	portYIELD_FROM_ISR(xHigherPriorityTaskWoken);
    return;
}

/*
 * @test_id        S32K388_GCC
 * @brief          Three tasks have difference priority that are blocked by semaphore, then be unblock by three interrupt handler-PIT0 that give semaphore
 * @details        One task which have highest priority run before two tasks having less priority share time slice alternatively
 * @pre            external interrupt support / software interrupt support
 * @post           N/A
 * @test_level     Unit
 * @test_type      Functional
 * @test_technique WhiteBox
 * @test_procedure
 *                 -# Create 3 tasks with different priority: high(HT) medium (MT) low (LT)
 *                 -# 3 tasks be blocked by semaphores
 *                 -# task2(LT) be unblocked by PIT0 handler that give semaphore
 * @pass_criteria  -# Two tasks can share CPU time slice alternatively
 *                 -# PIT operat correctly
 * @requirements   
 * @hw_environment   N/A
 */

int main(void)
{
    OS_PlatformInit();

    xSemaphore0 = xSemaphoreCreateBinary();
    xSemaphore1 = xSemaphoreCreateBinary();
    xSemaphore2 = xSemaphoreCreateBinary();
    taskH0 = xTaskCreate(task0, (const char *const)"task0", configMINIMAL_STACK_SIZE, (void*)0x0, (MAIN_PRIORITY + 3), NULL);
    taskH1 = xTaskCreate(task1, (const char *const)"task1", configMINIMAL_STACK_SIZE, (void*)0x1, (MAIN_PRIORITY + 2), NULL);
    taskH2 = xTaskCreate(task2, (const char *const)"task2", configMINIMAL_STACK_SIZE, (void*)0x2, (MAIN_PRIORITY + 1), NULL);
    // Start the scheduler.
    vTaskStartScheduler();
    // Will only get here if there was insufficient memory to create the idle
    // task.
    while (1) {
	}
	return 0;
}
