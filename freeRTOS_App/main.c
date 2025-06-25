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
#define tmrTIMER_0_PERIOD	( 5UL )
#define tmrTIMER_1_PERIOD	( 2UL )
#define tmrTIMER_2_PERIOD	( 9UL )

static int i, iter, n;
int reveal = 0;

SemaphoreHandle_t dumpSemaphore;

static void prvUARTInit(void) {
    UART0_BAUDDIV = 16;
    UART0_CTRL = 1;
}

struct context {
    int r[12];
    int ip;
    int sp;
    int lr;
    int pc;
};

void dump_stack(void) {
    uint32_t *sp;
    asm volatile ("MOV %0, sp" : "=r" (sp));

    printf("\n============ Stack Dump ============\n");
    for (int i = 0; i < 4; i++) {
        printf("0x%08x:", (unsigned int)(sp + i * 4));
        for (int j = 0; j < 4; j++) {
            uint32_t val = *(sp + i * 4 + j);
            printf(" 0x%08x", val);
        }
        printf("\n");
    }
    printf("============ Dump End ==============\n\n");
}

void print_context(struct context *context) {
    printf("\n============ Context saved on stack ============\n");
    for (int j = 0; j < 12; j++) {
        printf("r%d = 0x%08x\n",j,context->r[j]);
    }
    printf("ip = 0x%08x\n",context->ip);
    printf("sp = 0x%08x\n",context->sp);
    printf("lr = 0x%08x\n",context->lr);
    printf("============ Context print end =================\n\n");
}

void store_context() {
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

        "MOV r0, sp\t\n"
        "BL print_context\t\n"

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
        "An invisible task will keep the CPU busy by computing Fibonacci and "
        "restarting everytime an overflow is imminent and incrementing the "
        "computation iteration cound\n\n"
        "After starting the demo, three timers will cause interrupt with a "
        "different frequency each and causing different behaviour:\n"
        "Timer 0 -> will print registers context on screen\n"
        "Timer 1 -> will \"reveal\" the last computed Fibonacci number and iteration\n"
        "Timer 2 -> will dump memory content on screen\n\n"
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
    struct timeval t1;
    gettimeofday(&t1, NULL);
    srand(t1.tv_usec * t1.tv_sec);

    int a = 0, b = 1, r;
    volatile int spin;
    i = 1;
    iter = 1;
    while (1) {
        if (a > INT_MAX - b) { // if next number would cause overflow
            a = 0;
            b = 1;
            i = 1;
            iter++;
            printf("Fibonacci computation is causing overflow -> starting again"
                   "from 1st number of the series: iteration n°%d\n",iter);
        } else {
            n = b + a;
            a = b;
            b = n;
            i++;
        }
        r = rand() % 800 + 400;
        for (spin = 0; spin < INT_MAX/r; spin++);
    }
}

/*
 * timer interrupt 0 gets register context dump printed on screen
 */
void timer0_user_callback() {
    printf("timer0_callback triggered\n");
    store_context();
}

/* timer interrupt 1 gets the next computed fibonacci number revealed */
void timer1_user_callback() {
    printf("timer1_callback triggered\n");
    printf("Fibonacci n°%2d at iteration n°%2d -> %d\n",i,iter,n);
}

/* timer interrupt 2 gets memory content printed on screen */
void timer2_user_callback() {
    printf("timer2_callback triggered\n");
    dump_stack();
}

int main(int argc, char **argv){

	(void) argc;
	(void) argv;

    prvUARTInit();

    welcome_message();

	xTaskCreate(
        slow_fibonacci,
        "slow_fibonacci",
		configMINIMAL_STACK_SIZE,
		NULL,
		mainTASK_PRIORITY,
		NULL
	);

    timer0_set_callback(timer0_user_callback);
    timer1_set_callback(timer1_user_callback);
    timer2_set_callback(timer2_user_callback);

    timer0_start(tmrTIMER_0_PERIOD);
    timer1_start(tmrTIMER_1_PERIOD);
    timer2_start(tmrTIMER_2_PERIOD);

	vTaskStartScheduler();

    for( ; ; );
}
