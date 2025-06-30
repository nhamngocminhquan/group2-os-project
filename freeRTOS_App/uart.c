/*
 * uart.c
 * Copyright (C) 2025
 *
 * Licensed under Creative Commons Attribution-NonCommercial 4.0
 * (CC BY-NC 4.0) — https://creativecommons.org/licenses/by-nc/4.0/
 */

#include <stdint.h>
#include <stdio.h>

#include "timer.h"
#include "uart.h"

static uart_callback_t uart0_callback = 0;

void UART_init( void )
{
    // UART0_CTRL = *((uint32_t *)(UART0_CTRL)) | 0x200000; //Enable Interrupt.
    UART0_CTRL = UART0_CTRL | 0x200000; //Enable Interrupt.
    // These options are for testing the RX delay when the baud rate is low,
    // when the baud rate 95 is chose, the delay on the terminal is pretty appereant.

    //For baud rate 115200
    *(volatile uint32_t *)(UART0_ADDRESS + OFFSET_BDR) =   (0xF << 24) | 14;
    //For baud rate 95.4
    //*(volatile uint32_t *)(UART0_ADDRESS + OFFSET_BDR) = (0x1F << 24) | 0x1FFF;

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

void uart0_stop(void) {
    UART0_CTRL = 0;
}

void uart0_set_callback(uart_callback_t callback) {
    uart0_callback = callback;
}

//Printing the value which is taken from the serial input. (Terminal)
void UART0_Handler() {


    char c = (char)(UART0_DATA & 0xFF); //Taking the one byte data.
    char buf[2] = {c, '\0'};
    // printf("UART0_Handler print -> %s - dec values: %d - %d\n",buf,buf[0],buf[1]);
    if (uart0_callback != 0) {
        uart0_callback(buf[0]);
    }

    //Interrupt is being cleared in qemu side when the transmission is done.
}
