/*
 * startup.s
 * Copyright (C) 2025
 *
 * Licensed under Creative Commons Attribution-NonCommercial 4.0
 * (CC BY-NC 4.0) — https://creativecommons.org/licenses/by-nc/4.0/
 */

.word stack_top     // Address of the stack_top
.word _start // Address of the _start label

// The thumb_func is used to make sure the function is in thumb mode,
// which is required for the Cortex-M0+.
.thumb_func 
.global _start

_start:
    BL main
    B .

