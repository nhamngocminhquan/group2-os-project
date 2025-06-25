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

## FreeRTOS & program

### FreeRTOS

### Program
