#
#  Copyright 2023 NXP
#

#Compiler flags for specific board
BOARDFLAG :=
board := vdk
ifeq ($(board),vdk)
BOARDFLAG += -DOS_FOR_VDK
endif
ifeq ($(board),fpga)
BOARDFLAG += -DOS_FOR_FPGA
endif
#Check CYGWIN_PATH environment variable
ifeq ($(CYGWINDIR),)
  $(error Please set CYGWINDIR - Follow README for detail)
endif

#Check NXP_GCC_102 environment variable
ifeq ($(NXP_GCC_1020),)
  $(error Please set NXP_GCC_102 - Follow README for detail)
endif

CYGPATH := $(CYGWINDIR)/cygpath.exe
#Path to Tool Directory
CrossToolDir := $(NXP_GCC_1020)
#Path to FreeRtos Directory
OsPath := ../..
OutDir := Output

AS := $(CrossToolDir)/bin/arm-none-eabi-gcc.exe
CC := $(CrossToolDir)/bin/arm-none-eabi-gcc.exe
LD := $(CrossToolDir)/bin/arm-none-eabi-ld.exe

OSCFLAGS := -g \
            -O3 \
            -mcpu=cortex-m7 \
            -mthumb \
            -std=c99 \
            -Os \
            -mfpu=fpv5-sp-d16 \
            -mfloat-abi=hard \
            -c \
            -ggdb3 \
            -mlittle-endian \
            -Wall \
            -Wextra \
            -Wstrict-prototypes \
            -Wunused \
            -Werror=implicit-function-declaration \
            -Wsign-compare \
            -Wundef \
            -Wdouble-promotion \
            -funsigned-char \
            -funsigned-bitfields \
            -fstack-usage \
            -fdump-ipa-all \
            -fno-common \
            -pedantic \
            -I"$(OsPath)/Source/include" \
            -I"$(OsPath)/Source/portable/GCC/ARM_CM7/r0p1" \
            -I"include" $(BOARDFLAG)\
            -specs=nano.specs \
            -specs=nosys.specs \
            --sysroot="$(CrossToolDir)/arm-none-eabi/newlib" \

OSASFLAGS := -g \
             -c \
             -x assembler-with-cpp \
             -mcpu=cortex-m7 \
             -mthumb \
             -mfpu=fpv5-sp-d16 \
             -mfloat-abi=hard \

LDFLAGS := -mcpu=cortex-m7 \
           -nostartfiles  \
           -T image.ld -Wl,-Map=$(OutDir)/image.map \
           -lm \
           -lgcc \
           -lc \
           -nostartfiles \
           -mthumb \
           -ggdb3 \
           -mlittle-endian \
           -specs=nano.specs \
           -specs=nosys.specs \
           --sysroot="$(CrossToolDir)/arm-none-eabi/newlib" \
           -mfpu=fpv5-sp-d16 -mfloat-abi=hard

OBJFILES_OS := $(OutDir)/tasks.o \
               $(OutDir)/timers.o \
               $(OutDir)/event_groups.o \
               $(OutDir)/queue.o \
               $(OutDir)/list.o \
               $(OutDir)/croutine.o \
               $(OutDir)/port.o \
               $(OutDir)/heap_4.o

$(OutDir)/%.o: $(OsPath)/Source/%.c
	$(CC) $(OSCFLAGS) -c -o $(shell $(CYGPATH) -m -i $@) $(shell $(CYGPATH) -m -i $<)

$(OutDir)/%.o: $(OsPath)/Source/portable/GCC/ARM_CM7/r0p1/%.c
	$(CC) $(OSCFLAGS) -c -o $(shell $(CYGPATH) -m -i $@) $(shell $(CYGPATH) -m -i $<)

$(OutDir)/%.o: $(OsPath)/Source/portable/MemMang/%.c
	$(CC) $(OSCFLAGS) -c -o $(shell $(CYGPATH) -m -i $@) $(shell $(CYGPATH) -m -i $<)

OBJFILES_APP := $(OutDir)/hw_system.o \
                $(OutDir)/vector.o \
				$(OutDir)/startup.o \
				$(OutDir)/main.o

$(OutDir)/%.o: source/%.c
	$(CC) $(OSCFLAGS) -c -o $(shell $(CYGPATH) -m -i $@) $(shell $(CYGPATH) -m -i $<)

$(OutDir)/%.o: source/%.asm
	$(AS) $(OSASFLAGS) -c -o $(shell $(CYGPATH) -m -i $@) $(shell $(CYGPATH) -m -i $<)

OBJFILES := $(OBJFILES_OS) $(OBJFILES_APP)


# default goal
all: clean make_dir $(OutDir)/image.elf

clean:
	rm -f $(OutDir)/*
	rm -fr $(OutDir)

make_dir:
	mkdir $(OutDir)

# Linking
$(OutDir)/image.elf: $(OBJFILES)
	$(CC) $(LDFLAGS) -o $(shell $(CYGPATH) -m -i $@) $(shell $(CYGPATH) -m -i $(OBJFILES))
