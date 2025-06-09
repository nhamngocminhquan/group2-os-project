#include "uart.h"
#include <stdint.h>
#include "timer.h"


void UART_init( void )
{
    UART0_BAUDDIV = 16;
    UART0_CTRL = 1;
    UART0_CTRL = UART0_CTRL | 0x200000; //Enable Interrupt.

    NVIC_SetPriority(UART0_IRQn, 10);  // Lower than timers
    // Enable interrupts in NVIC
    NVIC_EnableIRQ(UART0_IRQn); 
}

void UART_printf(const char *s) {
    while(*s != '\0') {
        UART0_DATA = (unsigned int)(*s);
        s++;
    }
}


//Printing the value which is taken from the serial input. (Terminal)
void UART0_Handler(){
    char c = (char)(UART0_DATA & 0xFF); //Taking the one byte data.

    UART_printf("\n \n The value of the data = ");
    char buf[2] = {c, '\0'}; 
    UART_printf(buf);
    UART_printf("\n");

    //Interrupt is being cleared in qemu side when the transmission is done.
}