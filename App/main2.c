#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"

#include "timer.h"
#include "uart.h"

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>


#define mainTASK_PRIORITY    ( tskIDLE_PRIORITY + 2 )

/* period expressed in seconds */
#define tmrTIMER_0_PERIOD	( 1UL )
#define tmrTIMER_1_PERIOD	( 2UL )

// void slow_fibonacci(void *pvParameters);
// void vTaskFunction2(void *pvParameters);

// volatile uint32_t gBlinkCounter = 0;

static int i, iter;
int reveal = 0;

SemaphoreHandle_t dumpSemaphore;

struct context {
    int r[12];
    int ip;
    int sp;
    int lr;
    int pc;
};

static void prvUARTInit(void) {
    UART0_BAUDDIV = 16;
    UART0_CTRL = 1;
}

void print_context(struct context *context) {
    printf("============ Context saved on stack ============\n");
    for (int j = 0; j < 12; j++) {
        printf("r%d = 0x%08x\n",j,context->r[j]);
    }
    printf("ip = 0x%08x\n",context->ip);
    printf("sp = 0x%08x\n",context->sp);
    printf("lr = 0x%08x\n",context->lr);
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

        // ".global return_label"
        // "return_label\t\n"

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

void welcome_message() {
    printf("S32K3x8 EVB FreeRTOS demo\n"
        "=========================\n\n"
        "This demo will show working UART and Timers implementation on an"
        "emulated S32K3x8 EVB with a simple FreeRTOS app executed trough"
        "qemu-system-arm\n\n"
        "An invisible task will keep the CPU busy by computing Fibonacci\n\n"
        "After starting the demo, a timer interrupt will occur each 5 seconds"
        "pausing the computation and will allow the user to type a character"
        "to decide what to print on screen:\n"
        "c -> print register Context\n"
        "s -> print Stack content\n"
        "b -> print both\n"
        "(if nothing is pressed) -> print nothing\n"
        "Press r if you're ready...\n");
    while (1) {
        unsigned int sr = UART0_STATE;
        if(sr & (1 << 21) ) { // 21 is Data reg full flag
            char c = (char)(UART0_DATA & 0xFF); // Taking the one byte data.
            if (c == 'r') {
                break;
            } else {
                printf("Please, press r\n");
            }
        }
    }
    printf("\n================\n"
           "Starting demo...\n\n");
}

void slow_fibonacci(void *pvParameters) {
    (void) pvParameters;
    printf("slow_fibonacci esegue\n");
    srand(time(NULL));

    int a = 0, b = 1, n, r;
    volatile int spin;
    i = 1;
    iter = 1;
    while (1) {
        if (a > INT_MAX - b) { // if next number would cause overflow
            a = 0;
            b = 1;
            i = 0;
            iter++;
            printf("Fibonacci computation is causing overflow -> starting again"
                   "from 1st number of the series: iteration n°%d\n",iter);
        } else {
            n = b + a;
            a = b;
            b = n;
            i++;
            // if (reveal) {
                printf("Fibonacci n°%2d at iteration n°%2d -> %d\n",i,iter,n);
                // reveal--;
            // }
        }
        r = rand() % 100 + 1;
        for (spin = 0; spin < INT_MAX/r; spin++);
    }
}

void dump_content_choice(void *pvParameters) {
    (void) pvParameters;
    while (xSemaphoreTake(dumpSemaphore,portMAX_DELAY) == pdTRUE) {
    waiting_key:
        unsigned int sr = UART0_STATE;
        if(sr & (1 << 21) ) { // 21 is Data reg full flag
            char c = (char)(UART0_DATA & 0xFF); // Taking the one byte data.
            switch (c) {
                case 'c':
                    store_context();
                    break;
                case 's':
                    // TODO: call stack content print function
                    printf("=== stack content goes here ===\n");
                    break;
                case 'b':
                    store_context;
                    printf("=== stack content goes here ===\n");
                    break;
                default:
                    printf("invalid key, press:\n"
                           "\tc -> context\n"
                           "\ts -> stack\n"
                           "\tb -> both\n");
                goto waiting_key;
            }
        }
        break;
    }
}

/*
 * timer int 0 makes the user choose between a register context or a stack
 * content dump with a keyboard input
 */
void timer0_user_callback() {
    printf("timer0_callback triggered\n");
    xSemaphoreGive(dumpSemaphore);
}

/* timer int 0 gets the next computed fibonacci number revealed */
void timer1_user_callback() {
    printf("timer1_callback triggered\n");
    reveal = 1;
}

int main(int argc, char **argv){

	(void) argc;
	(void) argv;

    prvUARTInit();

    welcome_message();

    dumpSemaphore = xSemaphoreCreateCounting(1,0);
    if (dumpSemaphore == NULL) {
        printf("dumpSemaphore creation failed\n");
        return 1;
    }
	xTaskCreate(
        slow_fibonacci,
        "slow_fibonacci",
		configMINIMAL_STACK_SIZE,
		NULL,
		mainTASK_PRIORITY,
		NULL
	);

    // xTaskCreate(
    //     dump_content_choice,
    //     "dump_content_choice",
	// 	configMINIMAL_STACK_SIZE,
	// 	NULL,
    //     mainTASK_PRIORITY,
	// 	NULL
	// );

    // timer0_set_callback(timer0_user_callback);
    // timer1_set_callback(timer1_user_callback);
    //
    // timer0_start(tmrTIMER_0_PERIOD);
    // timer1_start(tmrTIMER_1_PERIOD);
    // printf("timer callback assegnate ok\n");

	vTaskStartScheduler();

    for( ; ; );
}
