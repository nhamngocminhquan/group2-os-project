#include "uart.h"

int main(void) {
    int a = 1, b = 1;
    for (int i = 0; i < 10; i++) {
        a = a + b;
        b = a - b;
    }
    UART_init();
    UART_printf("Hello, World!\n");
    UART_printf("UART RX Polling started\n");

    while(1){
        unsigned int sr = UART0_STATE;
        if(sr & (1<<21)){ //21 is Data reg full flag.

            char c = (char)(UART0_DATA & 0xFF); //Taking the one byte data.

            UART_printf("\n \n The value of the data = ");
            char buf[2] = {c, '\0'}; 
            UART_printf(buf);
        }   
    }
    
    return 0;
    // UART_init();
    // UART_printf("Hello, World!\n");
}

