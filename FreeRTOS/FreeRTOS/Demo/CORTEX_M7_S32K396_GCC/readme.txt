Copyright 2022 NXP

This sample supports for S32K312 S32K344 S32K314 S32K341 S32K342 S32K322 S32K324 S32K328 S32K338 S32K348 S32K396 and S32K358

Building the sample application.

1, Before starting the building process ensure that the following path variables
are set correctly:

in Makefile file:
    - CYGWINDIR                 - Cygwin package binary path.
    - NXP_GCC_1020              - GCC Compiler path

2, Commands to build
    - Build demo:
        make all
3, Running demo with Lauterbach
    To execute the demo application load the executable file to the evaluation board using the Lauterbach debugger and the s32k3xx_core7.cmm script.
    Run s32k396_core7.cmm script using T32 Lauterbach debugger.

    Config s32k396_core7.cmm to select platforms (S32K344 S32K358 ...) and cores(core0 core1 core2)
        &platform="S32K396"     |   Select platform (EX: S32K344, S32K358)
        &core="0x0"             |   Select core(0x0/0x1/0x2)
