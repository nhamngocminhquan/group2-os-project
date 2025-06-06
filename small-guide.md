You can follow these steps to run the example on QEMU:

## Build QEMU
This is taken from [QEMU's GitLab repository README](https://gitlab.com/qemu-project/qemu). From repository:
```
cd qemu
mkdir build
cd build
../configure
make
```
After this is done, the executable `qemu-system-arm` is created in the `build` folder. To check if the machine was successfully created, do:
```
./qemu-system-arm -machine help | grep S32
```
and see if the S32K3X8 board is present.

## Run the example
Now go back to the repository and change directory to the simple_program:
```
cd simple_program
```
The Makefile has a few options to build and test the program. Do:
```
make build
make run
```
to run the program on QEMU, paused and waiting for GDB. In a separate terminal, do:
```
make gdb
```
to connect GDB and debug the program.

You can also do:
```
make clean
```
to remove the extra files.