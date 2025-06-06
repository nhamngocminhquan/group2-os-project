
## Related files in qemu
- qemu/hw/timer/s32k3x8-timer.c
- qemu/include/hw/timer/s32k3x8-timer.h

The created timer was associated to the machine defined at: 
- qemu/hw/arm/s32k3x8.c

## Recompile qemu
When creating a new timer it was needed to edit the following files:
 - qemu/hw/timer/meson.build 
 - qemu/configs/targets/arm-softmmu.mak
 - qemu/hw/arm/Kconfig **in this file was added to use the ptimer
 - qemu/hw/timer/Kconfig **in this file was added to use the ptimer

To take into account the changes made and ensure that the new timer is built and associated to PTIMER, these where the following commands that helped me to make it work without an error of not finding the ptimer defintions.

 ```
 rm -rf build
 ../configure --target-list=arm-softmmu 
 make -j$(nproc)
 ```

 The idea of using the `arm-softmmu` is:
To get the full ARM Cortex-M system emulation including: Memory-mapped peripherals, Interrupt controllers,Timers, UART, GPIO, etc.


## Timer address 
- PIT_0 base address: 0x400B0000 - 0x400B3FFF
- PIT_1 base address: 0x400B4000 - 0x400B7FFF
- PIT_2 base address: 0x402FC000 - 0x402FFFFF
- PIT_3 base address: 0x40300000 - 0x40303FFF --not used in S32K548

 To check adress in memory when runninig qemu:
  ```
info mtree
 ```
## Timer files needed for the example
`examples/timer/timer.h` : Define the macros and functions needed

`examples/timer/timer.c`: Emulate CMSIS library:

`examples/timer/startup.c`: Define the vector table to associate the needed IRQs for the timer: 

`examples/timer/main.c`: Defines mock up program to work with the 3 timer.

## Interrupts
The interrupts defined at this file `examples/timer/timer.h`  need to be the same ones used at `qemu/hw/arm/s32k3x8.c`