/*
 * uart.h
 * Copyright (C) 2025
 *
 * Licensed under Creative Commons Attribution-NonCommercial 4.0
 * (CC BY-NC 4.0) — https://creativecommons.org/licenses/by-nc/4.0/
 */

#ifndef __PRINTF__
#define __PRINTF__

#define UART0_ADDRESS                         ( 0x40328000UL )
#define OFFSET_UDR                              0x1Cu //DATA offset
#define UART0_DATA                            ( *( ( ( volatile unsigned int * ) ( UART0_ADDRESS + 0x1CUL ) ) ) )
#define UART0_STATE                           ( *( ( ( volatile unsigned int * ) ( UART0_ADDRESS + 0x14UL ) ) ) )
#define UART0_CTRL                            ( *( ( ( volatile unsigned int * ) ( UART0_ADDRESS + 0x18UL ) ) ) )
#define UART0_BAUDDIV                         ( *( ( ( volatile unsigned int * ) ( UART0_ADDRESS + 0x10UL ) ) ) )

void UART_init(void);
void UART_printf(const char *s);

#endif
