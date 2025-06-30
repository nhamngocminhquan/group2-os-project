/*
 * main.c
 * Copyright (C) 2025
 *
 * Licensed under Creative Commons Attribution-NonCommercial 4.0
 * (CC BY-NC 4.0) — https://creativecommons.org/licenses/by-nc/4.0/
 */

#include "FreeRTOS.h"
#include "task.h"

//#include "uart.h"

#define mainTASK_PRIORITY    ( tskIDLE_PRIORITY + 2 )

void vTaskFunction(void *pvParameters);

volatile uint32_t gBlinkCounter = 0;

int main(int argc, char **argv){

	(void) argc;
	(void) argv;

    //UART_init();

	xTaskCreate(
		// Function which implements the task
		vTaskFunction,
		// Name of the task (debug purposes, not used by the kernel)
		"Task1",
		// Stack to allocate to the task
		configMINIMAL_STACK_SIZE,
		// Parameter passed to the task. Not needed for Hello World example
		NULL,
		// Priority assigned to the task
		mainTASK_PRIORITY,
		// Task handle. Not required
		NULL
	);

	// Give control to the scheduler
	vTaskStartScheduler();

	// If everything ok should never reach here
    for( ; ; );
}

/* Task Function */
void vTaskFunction(void *pvParameters) {
    (void) pvParameters;

	for( ;; )
    {
        gBlinkCounter++;
		UART_printf("testint uart\n");             /* increment every second   */
        vTaskDelay( pdMS_TO_TICKS( 1000 ) );
    }
}
