/* ENTRY directive defines the entry point of the program */
ENTRY(_start)

/* SECTIONS directive defines the memory regions of the program */
SECTIONS
{
    /* text section (code)*/
    .text : { *(.text*) } 		
    /* data section, initialized variables */
    .data : { *(.data) }
    /* bss section, uninitialized variables */
    .bss : { *(.bss*) }
    /* stack section 
    Define the stack to the last RAM address of the NetduinoPlus2 board */
    /* Following value for mps2-an500 in mps2.c of qemu */
    /* For NetduinoPlus2: 0x2001ffff */
    /* For mps2-an500: 0x201fffff, 0x203fffff */
    stack_top = 0x204BFFFF; /* */ 
}

