## Introduction

An extension of the examples for multiple CPUs. This program uses the SBAF emulation to provide different vector tables to the individual CPUs. To use this, you need to modify the `USE_SBAF` definition in [s32k3x8.h](../../qemu/include/hw/arm/s32k3x8.h) to 1:

```c
#define USE_SBAF                    1
```

Additionally, since TIMER0 is routed only to CPU 0 and TIMER1 is routed only to CPU 2, the `IRSPRC_reg[NUM_EXT_IRQ]` in [s32k3x8.c](../../qemu/hw/arm/s32k3x8.c) needs to be changed accordingly:

```c
static const uint8_t IRSPRC_reg[NUM_EXT_IRQ] = {
    [96] = 0b0001,
    [97] = 0b0100,
    [98] = 0b0101,
    ...
```

and then `make` QEMU for the change to take effect. By default, `USE_SBAF` is not enabled to work with single CPU programs, and interrupts are routed to both cores. Then, after running:

```
make build
make run
```

and on another terminal:

```
make gdb
```

the program can then be started. The cores can be checked in GDB with:

```
info threads (or inf th for short)
```

Each CPU will have their own timer interrupt handler, but the mutex is rudimentary so they have the same frequency:

```
Hello 0
Hello 1
T0_CPU_0
T1_CPU_1
T0_CPU_0
T1_CPU_1
T0_CPU_0
T1_CPU_1
...
```

CPU 0 will run the Fibonacci sequence, then store 144 and 89 at addresses 0x0 and 0x4. CPU 1 will run nothing, so there will be 1 and 1 at addresses 0x0 and 0x4. This can be checked with:

```
thread 1 (or 2, for CPU 1)
x/2 0x0
```

## Explanation

SBAF is the boot program of the S32K3x8 CPUs and will scan flash memories for the image vector table (IVT) on startup. The addresses scanned are:

```
0x00400000      // Program flash block 1
0x00600000      // Program flash block 2
0x00800000      // Program flash block 3
0x00A00000      // Program flash block 4
0x10000000      // Data flash
```

Here our emulation only scans `0x00400000`. The IVT is marked with `0x5AA55AA5` at the beginning, then it provides the boot information of other CPUs (enabled or not, locations of vector tables). To simulate this, in QEMU an ELF parser reads the provided executable file at `0x00400000` and pass the vector table locations to each core when they are created.

These vector tables can be found in [startup_rtos.c](startup_rtos.c) with names `isr_vector_0` and `isr_vector_1`. They lead to separate reset handlers and separate `main` programs.

Note: this only works with `-kernel` option and not the `-loader` option when running QEMU, as the latter does not pass the kernel file name to the parser correctly.
