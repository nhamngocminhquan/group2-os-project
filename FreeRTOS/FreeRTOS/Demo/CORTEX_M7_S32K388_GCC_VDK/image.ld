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

ENTRY(Reset_Handler)

STACK_SIZE = DEFINED(__stack_size__) ? __stack_size__ : 0x200;
HEAP_SIZE  = DEFINED(__heap_size__)  ? __heap_size__  : 0x00003000;

MEMORY
{
    RAM (xrw)       : ORIGIN = 0x20400000, LENGTH = 0x50000
}

SECTIONS
{
    .core_exception :
    {
        . = ALIGN(4);
        KEEP(*(.core_exception))
        . = ALIGN(4);
    } > RAM
    .irq_handler :
    {
        . = ALIGN(4);
        KEEP(*(.irq_handler))
        . = ALIGN(4);
    } > RAM

    .text :
    {
        . = ALIGN(4);
        *(.text)
        *(.text*)
        *(.rodata)
        *(.rodata*)
        *(.glue_7)
        *(.glue_7t)
        *(.eh_frame)

        KEEP (*(.init))
        KEEP (*(.fini))
        . = ALIGN(4);
    } > RAM

    .data :
    {
        . = ALIGN(4);
        *(.data)
        *(.data*)
        . = ALIGN(4);
    } > RAM

    .bss :
    {
        . = ALIGN(4);
        __bss_start__ = .;
        *(.bss)
        *(.bss*)
        *(COMMON)
        . = ALIGN(4);
        __bss_end__ = .;
    } > RAM

    . += ALIGN(4);
    _end = .;
    end = .;
  
      /* heap section */
    .heap (NOLOAD):
    {
        _heap_start = .;
        . += HEAP_SIZE;
        _heap_end = .;
    } > RAM

    .stack :
    {
        . = ALIGN(8);
        . += STACK_SIZE;
    }

    __stack_top__ = ORIGIN(RAM) + LENGTH(RAM);
    __stack_limit__ = __stack_top__ - STACK_SIZE;

    PROVIDE(__stack = __stack_top__);

}