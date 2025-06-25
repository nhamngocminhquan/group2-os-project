/*
 * timer.c
 * Copyright (C) 2025
 *
 * Licensed under Creative Commons Attribution-NonCommercial 4.0
 * (CC BY-NC 4.0) — https://creativecommons.org/licenses/by-nc/4.0/
 */

#include "timer.h"

// Timer configuration
#define CPU_CLOCK_HZ        25000000UL   

// Global variables for user callbacks
static timer_callback_t timer0_callback = 0;
static timer_callback_t timer1_callback = 0;
static timer_callback_t timer2_callback = 0;

// Counter variables that can be accessed from main
volatile uint32_t timer0_tick_count = 0;
volatile uint32_t timer1_tick_count = 0;
volatile uint32_t timer2_tick_count = 0;

/****************************************************** */
// Define this functions bcs I am not usign CMSIS library
/****************************************************** */
/* NVIC_EnableIRQ is a function in the ARM CMSIS used to enable interrupts for a specific interrupt 
* source. It configures the Nested Vectored Interrupt Controller (NVIC) to allow the processor 
* to respond to a particular interrupt. 
*/
void NVIC_EnableIRQ(uint32_t irq_num) {
    // Enable interrupt in NVIC
    // This is a simplified version - actual implementation depends on your MCU
    volatile uint32_t *nvic_iser = (volatile uint32_t*)(0xE000E100UL);
    nvic_iser[irq_num >> 5] = (1UL << (irq_num % 32));
}

/* NVIC_SetPriority: is an ARM CMSIS function that configures the priority of a specific interrupt 
* in the Nested Vectored Interrupt Controller (NVIC).  	 
* It takes two parameters: the interrupt number and the priority level to assign.*/
void NVIC_SetPriority(uint32_t irq_num, uint32_t priority) {
    // Set interrupt priority
    // This is a simplified version - actual implementation depends on your MCU
    volatile uint8_t *nvic_ipr = (volatile uint8_t*)(0xE000E400UL);
    nvic_ipr[irq_num] = (uint8_t) (priority << 4);
}
/****************************************************** */
//       Start Timers with a specific frequency
/****************************************************** */
void timer0_start(uint32_t frequency_hz) {
    //Cleat interrupts
    TIMER0->INTCLEAR = ( 1ul <<  0 );;
    
    // Calculate reload value
    uint32_t reload_value = (CPU_CLOCK_HZ / frequency_hz) + 1;
    
    // Set reload value
    TIMER0->RELOAD = reload_value;
    
    /*This register configures and controls various 
	 * aspects of the timer’s operation, including enabling the timer, setting the timer mode, 
	 * and configuring the timer’s interrupt.*/
    TIMER0->CTRL = ( TIMER_CTRL_IRQEN | /* Enable Timer interrupt. */
					 TIMER_CTRL_EN );  /* Enable Timer. */

    // Set interrupt priorities (Timer0 higher priority than Timer1)
    NVIC_SetPriority(TIMER0_IRQn, 2);  // Higher priority (lower number)
    // Enable interrupts in NVIC
    NVIC_EnableIRQ(TIMER0_IRQn);
}

void timer1_start(uint32_t frequency_hz) {
    //Cleat interrupts
    TIMER1->INTCLEAR = ( 1ul <<  0 );
    
    // Calculate reload value
    uint32_t reload_value = (CPU_CLOCK_HZ / frequency_hz) + 1;
    
    // Set reload value
    TIMER1->RELOAD = reload_value;
    
    /*This register configures and controls various 
	 * aspects of the timer’s operation, including enabling the timer, setting the timer mode, 
	 * and configuring the timer’s interrupt.*/
    TIMER1->CTRL = ( TIMER_CTRL_IRQEN | /* Enable Timer interrupt. */
					 TIMER_CTRL_EN );  /* Enable Timer. */

    // Set interrupt priorities (Timer0 higher priority than Timer1)
    NVIC_SetPriority(TIMER1_IRQn, 2+1);  // Higher priority (lower number)
    // Enable interrupts in NVIC
    NVIC_EnableIRQ(TIMER1_IRQn);
}

void timer2_start(uint32_t frequency_hz) {
    //Cleat interrupts
    TIMER2->INTCLEAR = ( 1ul <<  0 );
    
    // Calculate reload value
    uint32_t reload_value = (CPU_CLOCK_HZ / frequency_hz) + 1;
    
    // Set reload value
    TIMER2->RELOAD = reload_value;
    
    /*This register configures and controls various 
	 * aspects of the timer’s operation, including enabling the timer, setting the timer mode, 
	 * and configuring the timer’s interrupt.*/
    TIMER2->CTRL = ( TIMER_CTRL_IRQEN | /* Enable Timer interrupt. */
					 TIMER_CTRL_EN );  /* Enable Timer. */

    // Set interrupt priorities (Timer0 higher priority than Timer1)
    NVIC_SetPriority(TIMER2_IRQn, 2+2);  // Higher priority (lower number)
    // Enable interrupts in NVIC
    NVIC_EnableIRQ(TIMER2_IRQn);
}

void timer0_stop(void) {
    TIMER0->CTRL = 0;
}

void timer1_stop(void) {
    TIMER1->CTRL = 0;
}

void timer2_stop(void) {
    TIMER2->CTRL = 0;
}

uint32_t timer0_get_count(void) {
    return TIMER0->VALUE;
}

uint32_t timer1_get_count(void) {
    return TIMER1->VALUE;
}

uint32_t timer2_get_count(void) {
    return TIMER2->VALUE;
}

void timer0_set_callback(timer_callback_t callback) {
    timer0_callback = callback;
}

void timer1_set_callback(timer_callback_t callback) {
    timer1_callback = callback;
}

void timer2_set_callback(timer_callback_t callback) {
    timer2_callback = callback;
}

// Interrupt Service Routines
void TIMER0_Handler(void) {
    // Clear interrupt flag
    TIMER0->INTCLEAR = ( 1ul <<  0 );

    /* Increment the nest count while inside this ISR as a crude way of the
	higher priority timer interrupt knowing if it interrupted the execution of
	this ISR. */
    timer0_tick_count++;
        
    // Call user callback if registered
    if (timer0_callback != 0) {
        timer0_callback();
    }
}

void TIMER1_Handler(void) {
    // Clear interrupt flag
    TIMER1->INTCLEAR = 1;
    
    // Increment tick counter
    timer1_tick_count++;
    
    // Call user callback if registered
    if (timer1_callback != 0) {
        timer1_callback();
    }
}

void TIMER2_Handler(void) {
    // Clear interrupt flag
    TIMER2->INTCLEAR = 1;
    
    // Increment tick counter
    timer2_tick_count++;
    
    // Call user callback if registered
    if (timer2_callback != 0) {
        timer2_callback();
    }
}