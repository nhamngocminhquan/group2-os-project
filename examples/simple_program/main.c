/*
 * main.c
 * Copyright (C) 2025
 *
 * Licensed under Creative Commons Attribution-NonCommercial 4.0
 * (CC BY-NC 4.0) — https://creativecommons.org/licenses/by-nc/4.0/
 */

#include "uart.h"

int main(void) {
    int a = 1, b = 1;
    for (int i = 0; i < 10; i++) {
        a = a + b;
        b = a - b;
    }
    return 0;
    // UART_init();
    // UART_printf("Hello, World!\n");
}

