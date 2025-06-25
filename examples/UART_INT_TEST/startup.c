/*
 * Bare Metal ARM Cortex-M Startup Code
 * Adapted from FreeRTOS startup code
 */

#include "uart.h"
#include "timer.h"     
#include "stdint.h"

#define OFFSET  16
 // /* FreeRTOS interrupt handlers. */
 // extern void vPortSVCHandler( void );
 // extern void xPortPendSVHandler( void );
 // extern void xPortSysTickHandler( void );

/* Exception handlers. */
static void HardFault_Handler( void ) __attribute__( ( naked ) );
static void Default_Handler( void ) __attribute__( ( naked ) );
void Reset_Handler( void ) __attribute__( ( naked ) );

/* interrupt handlers */
extern void TIMER0_Handler(void);
extern void TIMER1_Handler(void);
extern void TIMER2_Handler(void);

extern void UART0_Handler(void);


extern int main( void );
extern uint32_t _estack;

/* Vector table - customize based on your microcontroller */
const uint32_t* isr_vector[] __attribute__((section(".isr_vector"), used)) =
{
    [0]  = (uint32_t*)&_estack,          // Initial Stack Pointer
    [1]  = (uint32_t*)&Reset_Handler,    // Reset Handler -15
    [2]  = (uint32_t*)&Default_Handler,  // NMI Handler -14
    [3]  = (uint32_t*)&HardFault_Handler,// HardFault Handler -13
    [4]  = (uint32_t*)&Default_Handler,  // MemManage Handler -12
    [5]  = (uint32_t*)&Default_Handler,  // BusFault Handler -11
    [6]  = (uint32_t*)&Default_Handler,  // UsageFault Handler -10
    [7]  = 0,                            // Reserved -9
    [8]  = 0,                            // Reserved -8
    [9]  = 0,                            // Reserved -7
    [10] = 0,                            // Reserved -6
    [11] = (uint32_t*)&Default_Handler,  // SVCall Handler -5
    [12] = (uint32_t*)&Default_Handler,  // Debug Monitor Handler -4
    [13] = 0,                            // Reserved -3
    [14] = (uint32_t*)&Default_Handler,  // PendSV Handler -2
    [15] = (uint32_t*)&Default_Handler,  // SysTick Handler -1
    
    // External Interrupts - only specify the ones needed
    // Not being used will be automatically zero    
    // Timer interrupts
    [TIMER0_IRQn + OFFSET] = (uint32_t*)TIMER0_Handler,        
    [TIMER1_IRQn + OFFSET] = (uint32_t*)TIMER1_Handler,        
    [TIMER2_IRQn + OFFSET] = (uint32_t*)TIMER2_Handler,   
    [UART0_IRQn + OFFSET] = (uint32_t*)UART0_Handler,     
};


void Reset_Handler( void )
{   
    /* Call main application */
    main();
    
}

 /* Variables used to store the value of registers at the time a hardfault
  * occurs.  These are volatile to try and prevent the compiler/linker optimizing
  * them away as the variables never actually get used. */
volatile uint32_t r0;
volatile uint32_t r1;
volatile uint32_t r2;
volatile uint32_t r3;
volatile uint32_t r12;
volatile uint32_t lr; /* Link register. */
volatile uint32_t pc; /* Program counter. */
volatile uint32_t psr;/* Program status register. */

/* Extract register values from stack during hard fault */
__attribute__( ( used ) ) void prvGetRegistersFromStack( uint32_t *pulFaultStackAddress )
{
    r0 = pulFaultStackAddress[ 0 ];
    r1 = pulFaultStackAddress[ 1 ];
    r2 = pulFaultStackAddress[ 2 ];
    r3 = pulFaultStackAddress[ 3 ];

    r12 = pulFaultStackAddress[ 4 ];
    lr = pulFaultStackAddress[ 5 ];
    pc = pulFaultStackAddress[ 6 ];
    psr = pulFaultStackAddress[ 7 ];

     // UART_printf( "Calling prvGetRegistersFromStack() from fault handler" );
     //fflush( stdout );
 
     /* When the following line is hit, the variables contain the register values. */
     for( ;; );
}

/* Generic interrupt handler */
void Default_Handler( void )
{
    __asm volatile
    (
        ".align 8                                \n"
        " ldr r3, =0xe000ed04                    \n" /* Load interrupt control register address */
        " ldr r2, [r3, #0]                       \n" /* Load interrupt control register value */
        " uxtb r2, r2                            \n" /* Extract interrupt number (lowest byte) */
        "Infinite_Loop:                          \n" /* Infinite loop with interrupt number in r2 */
        " b  Infinite_Loop                       \n"
        " .ltorg                                 \n"
    );
}

/* Advanced hard fault handler with register capture */
void HardFault_Handler( void )
{
    __asm volatile
    (
        ".align 8                                                   \n"
        " tst lr, #4                                                \n" /* Test bit 2 of LR */
        " ite eq                                                    \n" /* If-Then-Else */
        " mrseq r0, msp                                             \n" /* If 0: use Main Stack Pointer */
        " mrsne r0, psp                                             \n" /* If 1: use Process Stack Pointer */
        " ldr r1, [r0, #24]                                         \n" /* Load PC from stack */
        " ldr r2, =prvGetRegistersFromStack                         \n" /* Load function address */
        " bx r2                                                     \n" /* Branch to register extraction */
        " .ltorg                                                    \n"
    );
}