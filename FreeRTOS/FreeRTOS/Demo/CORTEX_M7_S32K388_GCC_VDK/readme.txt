Copyright 2023 NXP

This sample supports for S32K388

Building the sample application.

1, Before starting the building process ensure that the following path variables
are set correctly:

in Makefile file:
    - CYGWINDIR                 - Cygwin package binary path.
    - NXP_GCC_1020              - GCC Compiler path

2, Commands to build
    - Build demo:
        make all
3, Running demo with Lauterbach on VDK
    To execute the  demo applicationload the executable file to the evaluation board using the Lauterbach debugger and the s32k388_vdk.cmm script.
    Run s32k388_vdk.cmm script using T32 Lauterbach debugger.

