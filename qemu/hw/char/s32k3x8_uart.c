/*
 * s32k3x8_uart.c
 * Basic S32K3x8 UART-only driver (LINFlexD minimal UART mode)
 *
 * This file provides the minimal implementation to support UART
 * transmit (TX only) on the S32K3x8 LINFlexD peripheral in UART mode.
 * Inspired by QEMU's pl011.c but tailored for basic UART functionality.
 *
 * Steps to use:
 *   1. Confirm the actual register offsets from the S32K3x8 reference manual
 *      and update OFFSET_* macros accordingly.
 *   2. Add this file to hw/char/meson.build.
 *   3. In your board file, map the UART MMIO region with sysbus_mmio_map
 *      and connect its IRQ via sysbus_connect_irq.
 *   4. Rebuild QEMU and test with firmware that writes to the DATA register.
 */

 #include "qemu/osdep.h"               /* QEMU OS dependencies — always first */

 #include "hw/char/s32k3x8_uart.h"     /* Header for this device */
 #include "hw/sysbus.h"                /* System bus device framework */
 #include "hw/qdev-properties.h"       /* QEMU device property system */
 #include "hw/qdev-properties-system.h"
 #include "hw/irq.h"                   /* IRQ lines */
 
 #include "chardev/char-fe.h"          /* Character frontend (CharBackend) */
 #include "qemu/log.h"                 /* Logging macros */
 #include "qemu/module.h"              /* Module init macros */
 #include "hw/qdev-clock.h"             /* for DEFINE_PROP_CLK */

 


 
 /*
  * Register offsets for S32K3x8 UART in ref manual
  */
 #define OFFSET_UARTCR   0x18  /* Control Register */
 #define OFFSET_UARTSR   0x14  /* Status Register  */
 #define OFFSET_BDR      0x10  /* Baud Rate Divider */
 #define OFFSET_UDR      0x1C  /* Data Register (TX) */
 

 
 /**
  * Read handler for MMIO reads
  * 
  * This function used to read the UART registers.
  */
 static uint64_t s32k3x8_uart_read(void *opaque, hwaddr offset, unsigned size)
 {
     S32K3X8UARTState *s = opaque;
     switch (offset) {
     case OFFSET_UARTCR:
         return s->uartcr;
     case OFFSET_UARTSR:
         return s->uartsr;
     case OFFSET_BDR:
         return s->bdr;
     case OFFSET_UDR:
         return 0; /* RX not yet supported */
     default:
         qemu_log_mask(LOG_GUEST_ERROR,
             "%s: invalid read offset 0x%02"HWADDR_PRIx"\n", TYPE_S32K3X8_UART, offset);
         return 0;
     }
 }
 
 /**
  * Write handler for MMIO writes
  */
 static void s32k3x8_uart_write(void *opaque, hwaddr offset, uint64_t val, unsigned size)
 {
    
     S32K3X8UARTState *s = opaque;
    //TEST
     if (!qemu_chr_fe_backend_connected(&s->chr)) {
        printf("CHARDEV NOT CONNECTED!\n");
    }
     switch (offset) {
     case OFFSET_UARTCR:
         s->uartcr = (uint32_t)val;
         break;
     case OFFSET_UARTSR:
         s->uartsr = (uint32_t)val;
         break;
     case OFFSET_BDR:
         s->bdr = (uint32_t)val;
         break;
     case OFFSET_UDR: {
         uint8_t ch = val & 0xFF;
         qemu_chr_fe_write_all(&s->chr, &ch, 1);
         //printf("here chr = %c!\n",ch); 
         //fflush(stdout);
         s->udr = (uint32_t)val;
         break;
     }
     default:
         qemu_log_mask(LOG_GUEST_ERROR,
             "%s: invalid write offset 0x%02"HWADDR_PRIx"\n", TYPE_S32K3X8_UART, offset);
     }
 }
 
 /* MMIO operations table 
 *  is used by QEMU to route MMIO accesses to the appropriate handler functions
 */
 static const MemoryRegionOps s32k3x8_uart_ops = {
     .read = s32k3x8_uart_read,
     .write = s32k3x8_uart_write,
     .endianness = DEVICE_NATIVE_ENDIAN,
     .valid = { .min_access_size = 4, .max_access_size = 4 },
 };
 
 /**
  * Initialization callback for the UART device
  */
 static void s32k3x8_uart_init(Object *obj)
 {
    S32K3X8UARTState *s = S32K3X8_UART(obj);
    
    /* Initialize MMIO region */
    memory_region_init_io(&s->mmio, obj, &s32k3x8_uart_ops, s, TYPE_S32K3X8_UART, REGION_SIZE);
    sysbus_init_mmio(SYS_BUS_DEVICE(s), &s->mmio);
    /* Setup IRQ line (NEED TO BE IMPLEMENTED)*/
    //sysbus_init_irq(SYS_BUS_DEVICE(s), &s->irq);
    /* Default to stdio if no chardev property set */
    //qemu_chr_fe_init(&s->chr, obj, NULL);
 }

 static void s32k3x8_uart_realize(DeviceState *dev, Error **errp)
{
    S32K3X8UARTState *s = S32K3X8_UART(dev);
    //TODO: When RX implemented change accordingly
    qemu_chr_fe_set_handlers(&s->chr, NULL, NULL, NULL, NULL, s, NULL, NULL);
    //TODO: RESET neeeded.
    //s32k3x8_uart_reset(dev);
}

 static const Property s32k3x8_uart_props[] = {
    /* name    member      default */
    //DEFINE_PROP_CHR Throws an error about the second argument.
    DEFINE_PROP_CHR("chardev", S32K3X8UARTState, chr),  
};
 
 /**
  * Class initialization
  */
 static void s32k3x8_uart_class_init(ObjectClass *klass, void *data)
 {
    DeviceClass *dc = DEVICE_CLASS(klass);
    /* register the chardev property so qdev_prop_set_chr() works: */
    device_class_set_props(dc, s32k3x8_uart_props);
    dc->realize = s32k3x8_uart_realize;

 }
 
 /* Type registration */
 static const TypeInfo s32k3x8_uart_info = {
     .name = TYPE_S32K3X8_UART,
     .parent = TYPE_SYS_BUS_DEVICE,
     .instance_size = sizeof(S32K3X8UARTState),
     .instance_init = s32k3x8_uart_init,
     .class_init = s32k3x8_uart_class_init,
 };
 
 static void s32k3x8_uart_register_types(void)
 {
     type_register_static(&s32k3x8_uart_info);
 }
 
 type_init(s32k3x8_uart_register_types);
 