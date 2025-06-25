# Makefile for UART_INT_TEST
# Copyright (C) 2025  
#
# Licensed under Creative Commons Attribution-NonCommercial 4.0
# (CC BY-NC 4.0) — https://creativecommons.org/licenses/by-nc/4.0/
#
# See top-level LICENSE for the full text.

QEMU := ../../qemu/build/qemu-system-arm
MACHINE := S32K3X8
CPU := cortex-m7
LINKER_FILE := mps2_m7.ld
#LINKER_FILE := linker.ld

SOURCE_FILES += startup.c
SOURCE_FILES += main.c
SOURCE_FILES += timer.c
SOURCE_FILES += uart.c

OBJ := $(SOURCE_FILES:.c=.o)
CFLAGS := -mcpu=$(CPU) -mthumb -g3 -O2

build: main.elf

main.elf: $(OBJ)
	arm-none-eabi-ld -T $(LINKER_FILE) $(OBJ) -o main.elf

# Use pattern rule to compile all C files with consistent flags
%.o: %.c
	arm-none-eabi-gcc -c $(CFLAGS) $< -o $@

run: main.elf
	$(QEMU) -machine $(MACHINE) -cpu $(CPU) -monitor none -nographic -serial stdio -kernel main.elf -s -S

gdb: main.elf
	gdb-multiarch -ex 'tar rem :1234' main.elf

clean:
	rm -f *.o *.elf