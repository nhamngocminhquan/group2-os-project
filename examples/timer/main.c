// main.c - Example usage
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
#define tmrTIMER_0_FREQUENCY	( 200UL )
#define tmrTIMER_1_FREQUENCY	( 100UL )
   
// Counter variables that can be accessed from main
extern uint32_t timer0_tick_count;
extern uint32_t timer1_tick_count;

// User callback functions
void timer0_user_callback(void) {
    UART_printf("T0\n");
    //This function will execute every 500us
    led_toggle_count++;
    __asm ("MOV R5, %[input_i]"
            :  /* This is an empty output operand list */
            : [input_i] "r" (led_toggle_count)
    );
    
}

void timer1_user_callback(void) {
    UART_printf("T1\n");
    // This runs every 1ms (1kHz)
    sensor_read_count++;
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

    // Main loop
    while (1) {
        // Main application logic here
        
        // You can check timer tick counts
        if (timer0_tick_count >= 2000) {  
            // Do something every second
            UART_printf("T0_ti\n");
            timer0_tick_count = 0;  // Reset counter
        }
        
        if (timer1_tick_count >= 1000) { 
            UART_printf("T1_ti\n");
            // Do something else every second
            timer1_tick_count = 0;  // Reset counter
        }
        
        // Check user variables
        if (led_toggle_count >= 1000) {  //int i, int j
            __asm ("ADD R8, %[input_i], %[input_j]"
                    :  /* This is an empty output operand list */
                    : [input_i] "r" (led_toggle_count), [input_j] "r" (sensor_read_count)
             );
            // LED has toggled 1000 times in t seconds
            led_toggle_count = 0;
        }
        
        if (sensor_read_count >= 100) {  // Every 100ms
            // Sensor has been read 100 times
            sensor_read_count = 0;
        }
        
    }
    
    return 0;
}