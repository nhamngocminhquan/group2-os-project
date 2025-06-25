// timer.h
#ifndef TIMER_H
#define TIMER_H

#include <stdint.h>

// Timer register structure (based on ARM CMSDK timer)
typedef struct {
    volatile uint32_t CTRL;      // Control register
    volatile uint32_t VALUE;     // Current value register
    volatile uint32_t RELOAD;    // Reload value register
    volatile uint32_t INTCLEAR;  // Interrupt clear register
} TIMER_TypeDef;

/* Timer base addresses
PIT_0 base address: 0x400B0000 - 0x400B3FFF
PIT_1 base address: 0x400B4000 - 0x400B7FFF
PIT_2 base address: 0x402FC000 - 0x402FFFFF
PIT_3 base address: 0x40300000 - 0x40303FFF --not used in S32K348
 */
#define TIMER0_BASE    0x400B0000UL
#define TIMER1_BASE    0x400B4000UL
#define TIMER2_BASE    0x402FC000UL

#define TIMER0    ((TIMER_TypeDef*)TIMER0_BASE)
#define TIMER1    ((TIMER_TypeDef*)TIMER1_BASE)
#define TIMER2    ((TIMER_TypeDef*)TIMER2_BASE)

// Control register bits
#define TIMER_CTRL_EN       (1UL << 0)  // Timer enable
#define TIMER_CTRL_IRQEN    (1UL << 3)  // Interrupt enable

// IRQ numbers (need to match the defined in the s32k38.c file)
// #define TIMER0_IRQn         8
// #define TIMER1_IRQn         9
// #define TIMER2_IRQn         10
#define TIMER0_IRQn         96
#define TIMER1_IRQn         97
#define TIMER2_IRQn         98

// Function prototypes
void NVIC_SetPriority(uint32_t irq_num, uint32_t priority);
void NVIC_EnableIRQ(uint32_t irq_num);

void timer0_start(uint32_t frequency_hz);
void timer1_start(uint32_t frequency_hz);
void timer2_start(uint32_t frequency_hz);

void timer0_stop(void);
void timer1_stop(void);
void timer2_stop(void);

uint32_t timer0_get_count(void);
uint32_t timer1_get_count(void);
uint32_t timer2_get_count(void);

// Callback function types
typedef void (*timer_callback_t)(void);
void timer0_set_callback(timer_callback_t callback);
void timer1_set_callback(timer_callback_t callback);
void timer2_set_callback(timer_callback_t callback);

void TIMER0_Handler(void);
void TIMER1_Handler(void);
void TIMER2_Handler(void);


#endif // TIMER_H