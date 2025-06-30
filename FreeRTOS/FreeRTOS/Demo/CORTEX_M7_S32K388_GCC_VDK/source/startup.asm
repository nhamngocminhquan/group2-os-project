/*
 * Copyright 2023 NXP.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */
.extern SVC_Handler
.extern PendSV_Handler
.extern SysTick_Handler
.extern __vector_table__

    .syntax unified
    .thumb


.equiv VTOR_REG, 0xE000ED08

    .section    .core_exception, "ax"
    .align 2
    .thumb
    .globl core_exception
core_exception:
    .long       __stack_top__
    .long       Reset_Handler
    .long       Core_Default_Handler
    .long       Core_Default_Handler
    .long       Core_Default_Handler
    .long       Core_Default_Handler
    .long       Core_Default_Handler
    .long       Core_Default_Handler
    .long       Core_Default_Handler
    .long       Core_Default_Handler
    .long       Core_Default_Handler
    .long       vPortSVCHandler
    .long       Core_Default_Handler
    .long       Core_Default_Handler
    .long       PendSV_Handler
    .long       SysTick_Handler
    .size core_exception, . - core_exception

    .section     .irq_handler, "ax"
    .align 2
    .thumb
    .global     __vector_table__


    .text
    .thumb
    .align 2
    .global Reset_Handler
    .type Reset_Handler, %function
Reset_Handler:
    mov r0,#0
    mov r1,#0
    mov r2,#0
    mov r3,#0
    mov r4,#0
    mov r5,#0
    mov r6,#0
    mov r7,#0
    mov r8,#0
    mov r9,#0
    mov r10,#0
    mov r11,#0
    mov r12,#0

    /* relocate vector table to RAM */
    ldr  r0, =VTOR_REG
    ldr  r1, =core_exception
    ldr  r2, =0xFFFFFF80
    and  r1, r2  /* r1 = r1 | r2 */
    str  r1,[r0]

    ldr r13, =__stack_top__

    ldr r2, = __bss_start__
    ldr r4, = __bss_end__
    mov r3,#0
    b FillZerobss

FillZerobss:
    str r3,[r2]
    add r2,r2,#4
    cmp r2, r4
    bcc FillZerobss

    bl SystemInit
    bl main

    b .
    .pool
    .size Reset_Handler, . - Reset_Handler

.globl SVC_Handler
SVC_Handler:
    b SVC_Handler

.globl Core_Default_Handler
Core_Default_Handler:
    b Core_Default_Handler