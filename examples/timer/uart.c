/*
 * uart.c
 * Copyright (C) 2025
 *
 * Licensed under Creative Commons Attribution-NonCommercial 4.0
 * (CC BY-NC 4.0) — https://creativecommons.org/licenses/by-nc/4.0/
 */

#include "uart.h"

void UART_init( void )
{
    UART0_BAUDDIV = 16;
    UART0_CTRL = 1;
}

void UART_printf(const char *s) {
    while(*s != '\0') {
        UART0_DATA = (unsigned int)(*s);
        s++;
    }
}
