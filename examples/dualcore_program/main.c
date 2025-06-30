/*
 * main.c
 * Copyright (C) 2025
 *
 * Licensed under Creative Commons Attribution-NonCommercial 4.0
 * (CC BY-NC 4.0) — https://creativecommons.org/licenses/by-nc/4.0/
 */

// Refer to their respective examples for explanations
#include "timer.h"
#include "uart.h"

#define tmrTIMER_0_FREQUENCY	( 1UL )
#define tmrTIMER_1_FREQUENCY	( 2UL ) 
int a = 1, b = 1;
static volatile int mutex = 0;

// User callback functions
void timer0_user_callback(void) {
    while (mutex == 1) {}
    UART_printf("T0_CPU_0\n");
    mutex = 1;
}
void timer1_user_callback(void) {
    while (mutex == 0) {}
    UART_printf("T1_CPU_1\n");
    mutex = 0;
}
void timer2_user_callback(void) {
    UART_printf("T0_CPU0\n");
}


int fib(int *a, int* b) {
    *a = *a + *b;
    *b = *a - *b;
}

// Main program for CPU 0
int main_0(void) {
    UART_init();
    timer0_set_callback(timer0_user_callback);
    timer0_start(tmrTIMER_0_FREQUENCY);
    UART_printf("Hello 0\n");
    mutex = 1;
    for (int i = 0; i < 10; i++) fib(&a, &b);
    while (1);
    return 0;
}

// Main program for CPU 1
int main_1(void) {
    while (mutex == 0) {}
    // UART_init();
    UART_printf("Hello 1\n");
    timer1_set_callback(timer1_user_callback);
    timer1_start(tmrTIMER_1_FREQUENCY);
    mutex = 0;
    while (1);
    return 0;
}

