/* FreeRTOS includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include "queue.h"

/* Standard includes. */
#include <stdio.h>
#include <string.h>

/* Application includes. */
#include "IntTimer.h"
#include "uart.h"

#define QUEUE_LENGTH 10

/*
 * TODO: adding a mock task to use registers to compute stuff so that at each
 * context print values stored in registers are different; maybe printing somre
 * more info to show that we're not printing random values
 */

QueueHandle_t xQueue;
SemaphoreHandle_t xBinarySemaphore;

struct context {
    int r[12];
    int ip;
    int sp;
    int lr;
    int pc;
};

void print_context(struct context *context, unsigned int ra);
void store_context();

static void prvUARTInit(void) {
    UART0_BAUDDIV = 16;
    UART0_CTRL = 1;
}

void print_context(struct context *context, unsigned int ra) {
    printf("============ Context saved on stack ============\n");
    for (int i = 0; i < 12; i++) {
        printf("r%d = 0x%08x\n",i,context->r[i]);
    }
    printf("ip = 0x%08x\n",context->ip);
    printf("sp = 0x%08x\n",context->sp);
    printf("lr = 0x%08x\n",context->lr);
    // printf("\nstore_context -> 0x%08x\n",(unsigned int)store_context);
    // printf("Instruction precedint BL address -> 0x%08x\n",ra);
    // printf("0x%08x: 0x%08x\n", ra, *((unsigned int *)ra));
    printf("============ Context print end =================\n\n");
}

void store_context() {
    // register int sp asm("sp");
    asm volatile (

        "SUB sp, sp, #64\t\n"
        "STR r0, [sp, #0]\t\n"
        "STR r1, [sp, #4]\t\n"
        "STR r2, [sp, #8]\t\n"
        "STR r3, [sp, #12]\t\n"
        "STR r4, [sp, #16]\t\n"
        "STR r5, [sp, #20]\t\n"
        "STR r6, [sp, #24]\t\n"
        "STR r7, [sp, #28]\t\n"
        "STR r8, [sp, #32]\t\n"
        "STR r9, [sp, #36]\t\n"
        "STR r10, [sp, #40]\t\n"
        "STR r11, [sp, #44]\t\n"
        "STR ip, [sp, #48]\t\n"
        "STR sp, [sp, #52]\t\n"
        "STR lr, [sp, #56]\t\n"
        // "STR pc, [sp, #60]\t\n"

        // "MOV r0, r1\t\n"
        "MOV r0, sp\t\n"
        // "MOV r1, pc\t\n"
        "BL print_context\t\n"

        ".global return_label"
        "return_label\t\n"

        "LDR r0, [sp, #0]\t\n"
        "LDR r1, [sp, #4]\t\n"
        "LDR r2, [sp, #8]\t\n"
        "LDR r3, [sp, #12]\t\n"
        "LDR r4, [sp, #16]\t\n"
        "LDR r5, [sp, #20]\t\n"
        "LDR r6, [sp, #24]\t\n"
        "LDR r7, [sp, #28]\t\n"
        "LDR r8, [sp, #32]\t\n"
        "LDR r9, [sp, #36]\t\n"
        "LDR r10, [sp, #40]\t\n"
        "LDR r11, [sp, #44]\t\n"
        "LDR ip, [sp, #48]\t\n"
        "LDR lr, [sp, #56]\t\n"
        "ADD sp, sp, #64\t\n"
    );
}

/*
 * TaskB waits for an element in the queue as a trigger (could replace with
 * another bin semaphore as it makes more sense, but it's just to play around
 * with FreeRTOS tools). When triggered, it basically makes sure context is
 * printed to screen.
 *
 * TODO: I plan to do the UART polling so that user can enter "c" or "s"
 * so that user can choose betweeen printing Context (register content) or
 * Stack (contents of some contiguous words on the stack)
 *
 * This way timer interrupt are used to trigger the polling by UART to let user
 * choose what to print
 */

void TaskA(void *pvParameters) {
    (void) pvParameters;

    int reg_nr = -1;

    for (;;) {
        if (xQueueReceive(xQueue,&reg_nr,portMAX_DELAY) == pdPASS) {
            // printf("TaskA received from TaskB -> %d\n",reg_nr);
            store_context();
        }
    }


}

/*
 * TaskB is blocked by a semaphore which is given by TIMER0_Handler.
 * TaskB will send a number through a queue to TaskA to unlock it so
 * that it can store registers context on stack, and then print via UART.
 */

void TaskB(void *pvParameters) {
    (void) pvParameters;

    int i = 0;

    for (;;) {
        if (xSemaphoreTake(xBinarySemaphore, portMAX_DELAY) == pdTRUE) {
            xQueueSend(xQueue,&i,portMAX_DELAY);
            i++;
            if (i == 17) {
                i = 0;
            }
            // vTaskDelay(pdMS_TO_TICKS(2000));
        }
    }

}

int main(void) {

    prvUARTInit();

    xQueue = xQueueCreate(QUEUE_LENGTH,sizeof(int));
    if (xQueue == NULL) {
		printf("queue creation failed\n");
		return -1;
	}

    xBinarySemaphore = xSemaphoreCreateBinary();
    if (xBinarySemaphore == NULL) {
        printf("binary semaphore creation failed\n");
        return -1;
    }

    vInitialiseTimers();

    xTaskCreate(
        TaskA,
        "TaskA",
        configMINIMAL_STACK_SIZE,
        NULL,
        tskIDLE_PRIORITY + 3,
        NULL
    );

    xTaskCreate(
        TaskB,
        "TaskB",
        configMINIMAL_STACK_SIZE,
        NULL,
        tskIDLE_PRIORITY + 2,
        NULL
    );

    vTaskStartScheduler();

    for (;;);

}
