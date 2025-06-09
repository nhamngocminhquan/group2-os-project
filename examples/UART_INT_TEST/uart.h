#ifndef __UARTH__
#define __UARTH__

#define UART0_ADDRESS                         ( 0x40328000UL )
#define OFFSET_UDR                              0x1Cu //DATA offset
#define UART0_DATA                            ( *( ( ( volatile unsigned int * ) ( UART0_ADDRESS + 0x1CUL ) ) ) )
#define UART0_STATE                           ( *( ( ( volatile unsigned int * ) ( UART0_ADDRESS + 0x14UL ) ) ) )
#define UART0_CTRL                            ( *( ( ( volatile unsigned int * ) ( UART0_ADDRESS + 0x18UL ) ) ) )
#define UART0_BAUDDIV                         ( *( ( ( volatile unsigned int * ) ( UART0_ADDRESS + 0x10UL ) ) ) )

void UART_init(void);
void UART_printf(const char *s);
void UART0_Handler();


#define UART0_IRQn         141
#define UART1_IRQn         142
#define UART2_IRQn         143
#define UART3_IRQn         144
#define UART4_IRQn         145
#define UART5_IRQn         146
#define UART6_IRQn         147
#define UART7_IRQn         148
#define UART8_IRQn         149
#define UART9_IRQn         150
#define UART10_IRQn        151
#define UART11_IRQn        152
#define UART12_IRQn        153
#define UART13_IRQn        154
#define UART14_IRQn        155
#define UART15_IRQn        156


#endif
