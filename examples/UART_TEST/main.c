#include "uart.h"

int main(void) {
    int a = 1, b = 1;
    for (int i = 0; i < 10; i++) {
        a = a + b;
        b = a - b;
    }
    UART_init();
    UART_printf("Hello, World!\n");
    return 0;
    // UART_init();
    // UART_printf("Hello, World!\n");
}

