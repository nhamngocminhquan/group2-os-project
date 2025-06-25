/*
 * uart.h
 * Copyright (C) 2025
 *
 * Licensed under Creative Commons Attribution-NonCommercial 4.0
 * (CC BY-NC 4.0) — https://creativecommons.org/licenses/by-nc/4.0/
 */

#ifndef __PRINTF__
#define __PRINTF__

#include "FreeRTOS.h"

#define UART0_ADDRESS                         ( 0x40328000UL )
#define UART0_BAUDDIV                         ( *( ( ( volatile uint32_t * ) ( UART0_ADDRESS + 0x10UL ) ) ) )
#define UART0_STATE                           ( *( ( ( volatile uint32_t * ) ( UART0_ADDRESS + 0x14UL ) ) ) )
#define UART0_CTRL                            ( *( ( ( volatile uint32_t * ) ( UART0_ADDRESS + 0x18UL ) ) ) )
#define UART0_DATA                            ( *( ( ( volatile uint32_t * ) ( UART0_ADDRESS + 0x1CUL ) ) ) )

void UART_init(void);
void UART_printf(const char *s);

#endif
