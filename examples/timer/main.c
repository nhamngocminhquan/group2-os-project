// main.c - Example of timer
#include <stdbool.h>  // For boolean data type (bool, true, false)
#include "timer.h"
#include "uart.h"

// User variables that will be updated by timers
volatile uint32_t led_toggle_count = 0;
volatile uint32_t sensor_read_count = 0;

/* Timer frequencies are slightly offset so they nest. 
 * The frequency is defined here in Hz.
 *
 * Timer0 has a period of 1/2000 sec 
 * Timer1 has a period of 1/1000 sec
 *
 *
 * */
#define tmrTIMER_0_FREQUENCY	( 1UL ) //500us
#define tmrTIMER_1_FREQUENCY	( 1000UL ) //1ms
   
// Counter variables that can be accessed from main
extern uint32_t timer0_tick_count;
extern uint32_t timer1_tick_count;

// User callback functions
void timer0_user_callback(void) {
    UART_printf("T0\n");
    //This function will execute every 500us
    led_toggle_count++;
    //Added inline assembly for debugging purposes
    __asm ("MOV R5, %[input_i]"
            :  /* This is an empty output operand list */
            : [input_i] "r" (led_toggle_count)
    );
    
}

void timer1_user_callback(void) {
    UART_printf("T1\n");
    // This runs every 1ms (1kHz)
    sensor_read_count++;
    //Added inline assembly for debugging purposes
    __asm ("MOV R6, %[input_i]"
            :  /* This is an empty output operand list */
            : [input_i] "r" (sensor_read_count)
    );
}

int main(void) {
    __asm ("MOV R4, #5"
            :  /* This is an empty output operand list */
            :  /* This is an empty input operand list */
            : "r5"  // Clobber list
    );

    UART_init();
    UART_printf("Hello\n");
    
    // Set up callback functions
    timer0_set_callback(timer0_user_callback);
    timer1_set_callback(timer1_user_callback);
    
    // Start timers with different frequencies
    timer0_start(tmrTIMER_0_FREQUENCY);  // 2kHz - fast operations

    timer1_start(tmrTIMER_1_FREQUENCY);  // 1kHz - slower operations

    bool loop_en = true;
    // Main loop
    while (loop_en) {

        
        //When Timer0 has triggered 10 times: prints "T0_ti" and resets counter
        if (timer0_tick_count >= 10) {  
            UART_printf("T0_tick\n");
            timer0_tick_count = 0;  // Reset counter
            timer0_stop();  // Stop Timer0
            loop_en = false;  // Exit loop after Timer0 stops
            UART_printf("END T0\n");
        }
        
        if (timer1_tick_count >= 5) { 
            UART_printf("T1_tick\n");
            timer1_tick_count = 0;  // Reset counter
            //Added inline assembly for debugging purposes
            __asm ("ADD R8, %[input_i], %[input_j]"
                :  /* This is an empty output operand list */
                : [input_i] "r" (led_toggle_count), [input_j] "r" (sensor_read_count)
             );
        }
        
        // Check variables
        if (led_toggle_count >= 15) {  //int i, int j
            led_toggle_count = 0;
            //timer0_stop();  // Stop Timer0
        }
        
        if (sensor_read_count >= 10) { 
            sensor_read_count = 0;
        }
        
    }
    
    return 0;
}