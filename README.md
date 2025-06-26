[![License: CC BY-NC 4.0](https://img.shields.io/badge/License-CC_BY--NC_4.0-lightgrey.svg)](https://creativecommons.org/licenses/by-nc/4.0/)

# Table of Contents

# Overview

This project implements the NXP board [S32K3X8EVB](https://www.nxp.com/design/design-center/development-boards-and-designs/S32K3X8EVB-Q289) in QEMU, running a simple real-time program with FreeRTOS. Aspects of the implementation include:

- QEMU emulation: The default CPU S32K358 is implemented with a maximum of 2 cores. Implemented peripherals are 3 Periodic Interrupt Timers (PIT) and 16 Low-Power UART (LPUART), all with their respective interrupts as described in the reference manual. The CPU cores are based on the ARMv7M already existing in QEMU, with a simplified SBAF boot process and interrupt routing system.
- FreeRTOS: 
- Real-time program: 

# Installation & quickstart

## Installation

```
sudo apt install ABC
git clone XYZ
cd group2/qemu
mkdir build && cd build
../configure
make
```

## Running program

```
cd examples/Program
make build
make run
```

# Implementation details

## QEMU

The QEMU’s GitLab repository is cloned into our repository, so that we can keep track of our changes without making a separate fork.

### Machine & CPU

#### Machine initialization

The CPU uses the ARMv7M core provided by QEMU. The initialization of the board is similar to other ARM boards. We created the files [`s32k3x8.c`](./qemu/hw/arm/s32k3x8.c) and [`s32k3x8.h`](./qemu/include/hw/arm/s32k3x8.h) for the basic initialization. The files `Kconfig` and `meson.build` files in [/arm](./qemu/hw/arm/) are also modified to build the board. For this part, we took as reference the implementations [stm32f405_soc.c](./qemu/hw/arm/stm32f405_soc.c) and [mps2.c](./qemu/hw/arm/mps2.c).

The model for our following parts is the S32K358, which is the default CPU for the evaluation board. However, each part can easily be changed to model a different CPU with multiple cores, different memory layouts, different peripherals. 

#### Multiple CPUs and memory

The initialization receives the `-smp` parameter from the QEMU starting command, and up to 4 cores are supported (for up to S32K388). The S32K358 actually contains 3 cores, but CPU 0 and 1 are in lockstep and are effectively 1 CPU. Therefore, in the following sections we will refer to the two cores as CPU 0 and 2 (similar to the reference manual). By default, we only have 1 CPU (corresponding to `-smp 1`) for almost all the sample programs, so only CPU 0 is used.

![CPUs](./assets/cpu.png)

According to the reference manual and the memory map, the following memory components are added in the machine:

|Memory|Base address|Size|Private/shared|Notes|
|-|-|-|-|-|
|SRAM|`0x20400000`|768 KB|Shared|SRAM 0,1,2 modeled together|
|Program flash|`0x00400000`|8 MB|Shared|4 blocks modeled together|
|Data flash|`0x10000000`|128 KB|Shared||
|ITCM|`0x00000000`|64 KB|Private||
|DTCM|`0x20000000`|128 KB|Private||

Similar to the implementations of [armsse.c](./qemu/hw/arm/armsse.c) and [mps3r.c](./qemu/hw/arm/mps3r.c), memory region aliases are needed for different views of the system memory. Each CPU sees the shared memory regions (Flash, SRAM, peripherals), but its private memory regions (ITCM, DTCM) have higher priorities.

![CPU's view of system](./assets/cpu_memory.png)

#### Interrupt routing

According to the reference manual, in the real board the Miscellaneous System Control Module (MSCM) routes the peripherals' interrupts to one or multiple cores. These are controlled by the IRSPRC registers, one for each external interrupt line, and the 4 LSBs enable the routing to CPUs 0 to 3.

In our implementation, we emulate this using an array of 1x4 IRQ splitters:

```c
SplitIRQ irq_splitter[NUM_EXT_IRQ];
```

and they are connected to the cores according to the array of IRSPRC registers:

```c
static const uint8_t IRSPRC_reg[NUM_EXT_IRQ] = {
    [96] = 0b0101,
    ...
};
```

which identify which core(s) to direct the IRQ lines to. In the above lines, IRQ 96 (Timer 0) is connected to CPU 0 and 2. This is done for all the enabled IRQs.

![IRQ](./assets/irq.png)

#### SBAF boot process

According to the reference manual, a boot process named Secure Boot Assist Flash (SBAF) scans the following addresses:

```c
0x00400000 (PFLASH block 0)
0x00600000 (PFLASH block 1)
0x00800000 (PFLASH block 2)
0x00A00000 (PFLASH block 3)
0x10000000 (DFLASH)
```

and looks for the Image Vector Table (IVT), identified by the starting marker of `0x5AA55AA5`. It contains the boot configuration word that specifies which cores are enabled. It also contains the vector table addresses of each of the enabled cores.

We implemented a simple emulation of the SBAF. Its use is enabled by the flag:

```c
#define USE_SBAF                    0
```

in `s32k3x8.h`. If not enabled, the emulation will use the default vector table location of `0x00000000` for all cores. This means that, by default, all of the cores will run the same program if interrupts are set up the same way.

If enabled, an ELF parser will parse the provided ELF file and look for the IVT at only the address `0x00400000`. If the first 4 bytes matches `0x5AA55AA5`, the configuration word is read and the cores are enabled accordingly. Each of the cores' vector table is set through QEMU with the Vector Table Offset Register (VTOR), which has to be [properly aligned to 7 bits](https://developer.arm.com/documentation/ddi0403/d/System-Level-Architecture/System-Address-Map/System-Control-Space--SCS-/Vector-Table-Offset-Register--VTOR?lang=en). 

![SBAF](./assets/sbaf.png)

With SBAF enabled, the emulation works closer to the real board with each core having a separate vector table. However, the program's startup and linker files will need to be more complex. The linker needs to place the vector tables correctly. `examples/dualcore_program` is an example of this, with the two cores running different programs.

### Timers

### UARTs

The UART functionality implemented for s32k3x8 mcu which belongs to s32k3x8evb board.

First of all, in the s32k3x8.c file, the UART device is being created as a child object of mcu. Then it’s device property being set to “chardev” (character device). This way qemu will know and connect the frontend functionalities with the chardev backend functionalities. At last, realizing the memory of uart, and memory mapping is done with the base address of UART. After this mapping, the guest can access the UART device’s registers.


#### TX and RX
The uart device has its functionalities in hw/char/s32k3x8_uart.c file. These are mainly, reading and writing to the device’s registers, and Transmitting (TX) and Receiving (RX) capability. Transmitting is actually done with writing to the registers, and Receiving has its callback function.

s32k3x8_uart_read() and s32k3x8_uart_write() functions are the handler functions of this character device, qemu knows this functions from the MMIO table (s32k3x8_uart_ops).

In RX callback function uart_rx() checking if the rx_busy or not (This is related to baud-rate) If not busy, it is taking the data into the temporary buffer, and starting the timer. Until this timers finishes and interrupts its timer callback function, no other received messages are allowed. This way the baud-rate time-window is guaranteed. This time window is being set with the provided values in the Baud Rate Divider Register. The Qemu knows this uart_rx is the callback function from qemu_chr_fe_set_handlers().

```c
qemu_chr_fe_set_handlers(&s→chr, uart_can_receive, uart_rx, NULL, NULL, s, NULL, NULL);
```

For this callback to work, qemu expects a uart_can_receive function also, when that function returns 1, then the uart_rx is also being called. The busy flag is being controlled in the uart_can_receive function.


With uart_update_parameters() function, the chardev backend can be configured to match with the external UART device’s baudrate.


#### Interrupts
For interrupt implementation, first uart interrupts vector numbers are being found from the Interrupt table document of the MCU and added as an array. The RX and TX of the same UART are have the same interrupt number. These numbers are being used to connect the irq’s to the cpu, in the s32k3x8_init.

When the uart_rx() callback function is called, qemu_set_irq() is being set. Only if the interrupts enabled in the Status register STAT[TDRE]. The cpu, sets the program counter to handler function’s address when interrupt happens. For this to work, guest side should enable cpu’s interrupts, with setting the respected register addresses for cortex-m7. Also the vector table should be modified, with the UART handler function.

#### Testing

To test all the functionalities, the example program is given in the UART_INT_TEST. The test implemented on top of the timer example program.

In UART.c, there are init, print and handler functions. The respected values written in the UART register memory and interrupts enabled in init. To test the baud-rate function, there is given two different value for BDR (BaudRate-Diviso-Register). When the slower baud-rate is chosen, the test is giving a noticable delay. Print function is just writing the value into the register byte by byte. Handler function is printing the received value from the UART_RX.

To test this UART, while runnning the qemu with the programs executable file (main.elf) "-serial stdio" flag is added. This way the terminal is connected into qemu and acts as a serial input and output. With keyboard strokes, the sent message can be seen in the terminal.


## FreeRTOS & program

### FreeRTOS

### Program
Inside `App/` you can find a simple demo app running FreeRTOS to test the
correct implementation of UART and Timers.<br>
The app is creating a simple task keeping the CPU busy. It computes
numbers from Fibonacci series with an empty loop making sure the process keeps
running without computing it too fast. Since the computation uses 32-bit values,
we get overflow pretty fast. When an overflow is about to happen, the series
computation restarts updating the occurred iteration count. This happens without
any visual feedback.<br>
Here timer interrupts come into play. We set three different timers with
different period triggering three different behaviours:
- **Timer 0**: timer 0 causes an on-screen print of the context registers
- **Timer 1**: timer 1 prints the value of the last computed Fibonacci
number alongside with the iteration the task is currently in
- **Timer 2**: timer 2 causes an on-screen print of the memory content

To run the example make sure to have cloned this repository with
```sh
git clone --recurse-submodules https://baltig.polito.it/eos2024/group2.git
```
so that the full FreeRTOS source code is downloaded to your machine, then execute the following

```sh
cd App/
make all
make qemu_start
```

The app will ask you for an input to start the demo, then you can stop it anytime with `Ctrl+C`.

# License

All contents in this repository are licensed under [CC BY-NC 4.0](https://creativecommons.org/licenses/by-nc/4.0/) license.
The **Creative Commons Attribution-NonCommercial 4.0 International** allows
anyone to:
- **Share**: copy and redistribute the material in any medium or format.
- **Adapt**: remix, transform, and build upon the material.

The following terms are applied:
- **Attribution**: You must give appropriate credit, provide a link to the license, and indicate if changes were made. You may do so in any reasonable manner, but not in any way that suggests the licensor endorses you or your use.
- **NonCommercial**: You may not use the material for commercial purposes.
- **No additional restrictions**: You may not apply legal terms or technological measures that legally restrict others from doing anything the license permits.

For more details, refer to the [LICENSE.md](/LICENSE.md) file.
