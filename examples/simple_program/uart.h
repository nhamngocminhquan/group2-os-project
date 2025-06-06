#ifndef __PRINTF__
#define __PRINTF__

#define UART0_ADDRESS                         ( 0x40004000UL )
#define UART0_DATA                            ( *( ( ( volatile unsigned int * ) ( UART0_ADDRESS + 0UL ) ) ) )
#define UART0_STATE                           ( *( ( ( volatile unsigned int * ) ( UART0_ADDRESS + 4UL ) ) ) )
#define UART0_CTRL                            ( *( ( ( volatile unsigned int * ) ( UART0_ADDRESS + 8UL ) ) ) )
#define UART0_BAUDDIV                         ( *( ( ( volatile unsigned int * ) ( UART0_ADDRESS + 16UL ) ) ) )

void UART_init(void);
void UART_printf(const char *s);

#endif
