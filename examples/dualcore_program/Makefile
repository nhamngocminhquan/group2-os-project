QEMU := ../../qemu/build/qemu-system-arm # qemu-system-arm
MACHINE := S32K3X8
CPU := cortex-m7
LINKER_FILE := linker_rtos.ld

build:
	# arm-none-eabi-as -mcpu=$(CPU) startup.s -o startup.o
	arm-none-eabi-gcc -c -g3 -mcpu=$(CPU) -mthumb startup_rtos.c -o startup.o
	arm-none-eabi-gcc -c -mcpu=$(CPU) -mthumb main.c -o main.o
	arm-none-eabi-ld -T $(LINKER_FILE) startup.o main.o -o main.elf

run:
	$(QEMU) -machine $(MACHINE) -cpu $(CPU) -smp 2 -monitor stdio -kernel main.elf -s -S 
	
gdb:
	gdb-multiarch -ex 'tar extended-rem :1234' main.elf

clean:
	rm -r *.o *.elf