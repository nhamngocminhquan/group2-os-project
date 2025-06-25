# Table of Contents

# Overview

This project implements the NXP board [S32K3X8EVB](https://www.nxp.com/design/design-center/development-boards-and-designs/S32K3X8EVB-Q289) in QEMU, running a simple real-time program with FreeRTOS. Aspects of the implementation include:



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

### Timers

### UARTs

The UART functionality implemented for s32k3x8 mcu which belongs to s32k3x8evb board.

First of all, in the s32k3x8.c file, the UART device is being created as a child object of mcu. Then it’s device property being set to “chardev” (character device). This way qemu will know and connect the frontend functionalities with the chardev backend functionalities. At last, realizing the memory of uart, and memory mapping is done with the base address of UART. After this mapping, the guest can access the UART device’s registers.


#### TX and RX
The uart device has its functionalities in hw/char/s32k3x8_uart.c file. These are mainly, reading and writing to the device’s registers, and Transmitting (TX) and Receiving (RX) capability. Transmitting is actually done with writing to the registers, and Receiving has its callback function.

s32k3x8_uart_read() and s32k3x8_uart_write() functions are the handler functions of this character device, qemu knows this functions from the MMIO table (s32k3x8_uart_ops). 

In RX callback function uart_rx() checking if the rx_busy or not (This is related to baud-rate) If not busy, it is taking the data into the temporary buffer, and starting the timer. Until this timers finishes and interrupts its timer callback function, no other received messages are allowed. This way the baud-rate time-window is guaranteed. This time window is being set with the provided values in the Baud Rate Divider Register. The Qemu knows this uart_rx is the callback function from qemu_chr_fe_set_handlers().

    qemu_chr_fe_set_handlers(&s→chr, uart_can_receive, uart_rx, NULL, NULL, s, NULL, NULL);

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
