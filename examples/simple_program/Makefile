QEMU := ../../qemu/build/qemu-system-arm # qemu-system-arm
#QEMU := ../../build/qemu-system-arm # qemu-system-arm
MACHINE := S32K3X8
CPU := cortex-m7
# LINKER_FILE := linker.ld
LINKER_FILE := linker_rtos.ld

#MACHINE := mps2-an500 # netduinoplus2 # mps2-an385 
# CPU := cortex-m7 # cortex-m4 # cortex-m3
# LINKER_FILE := linker_s32.ld
# Options for GCC: -g3 -Os

SOURCE_FILES += main.c
SOURCE_FILES += uart.c

build:
	# arm-none-eabi-as -mcpu=$(CPU) startup.s -o startup.o
	arm-none-eabi-gcc -c -g3 -mcpu=$(CPU) -mthumb startup_rtos.c -o startup.o
	arm-none-eabi-gcc -c -mcpu=$(CPU) -mthumb uart.c -o uart.o
	arm-none-eabi-gcc -c -mcpu=$(CPU) -mthumb main.c -o main.o
	arm-none-eabi-ld -T $(LINKER_FILE) startup.o main.o uart.o -o main.elf

run:
# $(QEMU) -machine $(MACHINE) -cpu $(CPU) -monitor stdio -kernel main.elf -s -S
# -nographic -monitor none -serial stdio -s -S
	$(QEMU) -machine $(MACHINE) -cpu $(CPU) \
	-monitor stdio -s -S \
	-d cpu,int,guest_errors,unimp,in_asm \
	-device loader,file=main.elf,cpu-num=0
	
gdb:
	gdb-multiarch -ex 'tar extended-rem :1234' main.elf

clean:
	rm -r *.o *.elf