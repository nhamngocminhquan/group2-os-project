QEMU := ../../qemu/build/qemu-system-arm 
MACHINE := S32K3X8
CPU := cortex-m7
LINKER_FILE := linker.ld

SOURCE_FILES += main.c
SOURCE_FILES += timer.c
SOURCE_FILES += uart.c
OBJ := $(SOURCE_FILES:.c=.o)

CFLAGS := -mcpu=$(CPU) -mthumb -g3 -O2

build: main.elf

main.elf: 
	arm-none-eabi-as -mcpu=$(CPU) startup.s -o startup.o
	arm-none-eabi-gcc -c -mcpu=$(CPU) -mthumb uart.c -o uart.o
	arm-none-eabi-gcc -c -mcpu=$(CPU) -mthumb timer.c -o timer.o
	arm-none-eabi-gcc -c -mcpu=$(CPU) -mthumb main.c -o main.o
	arm-none-eabi-ld -T $(LINKER_FILE) startup.o $(OBJ) -o main.elf

run: main.elf
	$(QEMU) -machine $(MACHINE) -cpu $(CPU) -monitor none -nographic -serial stdio -kernel main.elf -s -S

gdb: main.elf
	gdb-multiarch -ex 'tar rem :1234' main.elf

clean:
	rm -f *.o *.elf