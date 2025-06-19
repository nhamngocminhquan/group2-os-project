#include "FreeRTOS.h"
#include "task.h"

#include "uart.h"

#define mainTASK_PRIORITY    ( tskIDLE_PRIORITY + 2 )

void vTaskFunction(void *pvParameters);
void vTaskFunction2(void *pvParameters);

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

	xTaskCreate(
		// Function which implements the task
		vTaskFunction2,
		// Name of the task (debug purposes, not used by the kernel)
		"Task2",
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
        gBlinkCounter++;               /* increment every second   */
		UART_printf("testing uart\n");
        vTaskDelay( pdMS_TO_TICKS( 1000 ) );
    }
}

void vTaskFunction2(void *pvParameters) {
	(void) pvParameters;

	while(1){
        unsigned int sr = UART0_STATE;
        if(sr & (1<<21)){ //21 is Data reg full flag.

            char c = (char)(UART0_DATA & 0xFF); //Taking the one byte data.

            UART_printf("The value of the data = ");
			char buf[3] = {c,'\n', '\0'};
            UART_printf(buf);
        }
    }

}
