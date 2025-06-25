/* s32k3x8_uart.h
 * * S32K3x8 UART device header file
 * *
*/

#ifndef HW_CHAR_S32_UART_H
#define HW_CHAR_S32_UART_H


#include "qom/object.h"             /* OBJECT_DECLARE_SIMPLE_TYPE */
#include "hw/sysbus.h"              /* SysBusDevice */
#include "chardev/char-fe.h"        /* CharBackend */
#include "qemu/typedefs.h"          /* qemu_irq */
#include "exec/memory.h"            /* MemoryRegion */



// E: LPUART base addresses
#define LPUART0_BASE_ADDRESS        0x40328000 
#define LPUART1_BASE_ADDRESS        0x4032C000
#define LPUART2_BASE_ADDRESS        0x40330000
#define LPUART3_BASE_ADDRESS        0x40334000
#define LPUART4_BASE_ADDRESS        0x40338000
#define LPUART5_BASE_ADDRESS        0x4033C000
#define LPUART6_BASE_ADDRESS        0x40340000
#define LPUART7_BASE_ADDRESS        0x40344000
#define LPUART8_BASE_ADDRESS        0x4048C000
#define LPUART9_BASE_ADDRESS        0x40490000
#define LPUART10_BASE_ADDRESS       0x40494000
#define LPUART11_BASE_ADDRESS       0x40498000
#define LPUART12_BASE_ADDRESS       0x4049C000
#define LPUART13_BASE_ADDRESS       0x404A0000
#define LPUART14_BASE_ADDRESS       0x404A4000
#define LPUART15_BASE_ADDRESS       0x404A8000
#define REGION_SIZE                 0x1000 /* This is specific for only one uart(not whole region I guess)** need to check.*/

#define UART_SR_RDRF    (1u << 21)   /* Receive Data Register Full */
#define UART_SR_TDRE    (1u << 23)   /* Transmit Data Register Empty*/
#define UART_CR_TE      (1u << 19)  // Transmitter Enable
#define UART_CR_RE      (1u << 18)  // Receiver Enable
#define UART_BDR_SBR    (0x1FFFu << 0 ) // 13 bits Baud Rate Modulo Divisor
#define UART_BDR_OSR    (0x1Fu << 24) // 5 bits Oversampling Ratio
#define UART_CR_RIE    (0x1u << 21) //1 bit, Receiver Interrupt Enable

#define CHR_IOCTL_SERIAL_SET_PARAMS   1
 
 #define TYPE_S32K3X8_UART "s32k3x8-uart"
 OBJECT_DECLARE_SIMPLE_TYPE(S32K3X8UARTState, S32K3X8_UART)

 
 struct S32K3X8UARTState {
    SysBusDevice parent_obj;
    MemoryRegion mmio;
    qemu_irq irq;
    uint32_t uartcr;
    uint32_t uartsr;
    uint32_t bdr;
    uint32_t udr;
    CharBackend chr;

    //RX stuff
    uint8_t rx_buf;           // received byte
    bool rx_ready;            // Set to true when rx_buf is valid

    //Baud Rate related
    uint32_t pclk_frq;
    QEMUTimer *timer; 
    uint32_t baud_rate;
    bool rx_busy;
    bool tx_busy;
    uint8_t rx_temp;
};


#endif // HW_CHAR_S32_UART_H