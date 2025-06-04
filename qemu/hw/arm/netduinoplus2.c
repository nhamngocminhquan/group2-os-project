/*
 * Netduino Plus 2 Machine Model
 *
 * Copyright (c) 2014 Alistair Francis <alistair@alistair23.me>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "qemu/osdep.h"
#include "qapi/error.h"
#include "hw/boards.h"
#include "hw/qdev-properties.h"
#include "hw/qdev-clock.h"
#include "qemu/error-report.h"
#include "hw/arm/stm32f405_soc.h"
#include "hw/arm/boot.h"

/* Main SYSCLK frequency in Hz (168MHz) */
#define SYSCLK_FRQ 168000000ULL
// Q:   Florian: avr32example_board_init
//      Airbus: cpiom_init
static void netduinoplus2_init(MachineState *machine)
{
    DeviceState *dev;
    Clock *sysclk;

    /* This clock doesn't need migration because it is fixed-frequency */
    sysclk = clock_new(OBJECT(machine), "SYSCLK");
    clock_set_hz(sysclk, SYSCLK_FRQ);

    // Q:   Make the ARM SOC a child of this machine
    dev = qdev_new(TYPE_STM32F405_SOC);
    object_property_add_child(OBJECT(machine), "soc", OBJECT(dev));
    qdev_connect_clock_in(dev, "sysclk", sysclk);
    sysbus_realize_and_unref(SYS_BUS_DEVICE(dev), &error_fatal);

    armv7m_load_kernel(STM32F405_SOC(dev)->armv7m.cpu,
                       machine->kernel_filename,
                       0, FLASH_SIZE);
}
// Q:   Florian: 2nd half of avr32example_board_class_init
//      Airbus: cpiom_machine_init
//      
//      No default_ram_size like Airbus
//      No default_cpus, min_cpus, max_cpus, no_floppy, no_parallel
//      etc. like Florian
//
static void netduinoplus2_machine_init(MachineClass *mc)
{
    // Q:   List of valid CPUs for the machine is given here, and
    //      is passed to mc with valid_cpu_types.
    //      Airbus use mc->default_cpu_type instead
    static const char * const valid_cpu_types[] = {
        ARM_CPU_TYPE_NAME("cortex-m4"),
        NULL
    };

    mc->desc = "Netduino Plus 2 Machine (Cortex-M4)";
    mc->init = netduinoplus2_init;
    mc->valid_cpu_types = valid_cpu_types;
}
// Q:   Predefined macro according to Airbus, takes care
//      of the following functions/objects by Florian:
//
//          1st half of avr32example_board_class_init
//          avr32example_board_machine_types
//          DEFINE_TYPES (another macro)
//          ...
//
//      Florian defined TYPE_AVR32EXAMPLE_BOARD_MACHINE, but
//      the DEFINE_MACHINE macro creates automatically a type
//      from the provided string (MACHINE_TYPE_NAME("netduinoplus2"))
//
//      Morexamples of DEFINE_MACHINE can be found here:
//      https://mail.gnu.org/archive/html/qemu-devel/2015-09/msg05133.html
//
DEFINE_MACHINE("netduinoplus2", netduinoplus2_machine_init)
