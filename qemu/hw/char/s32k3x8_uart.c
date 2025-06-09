/*
 * s32k3x8_uart.c
 * Basic S32K3x8 UART-only driver (LINFlexD minimal UART mode)
 *
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

 
 #include "chardev/char-serial.h"
 #include "trace.h"                     // For trace_cmsdk_apb_uart_set_params()
 #include "qemu/timer.h"                

 
// Structure inspired from cmsdk-apb-uart.c
// Update Backedn Chardev Parameters.
static void uart_update_parameters(S32K3X8UARTState *s ){
    QEMUSerialSetParams ssp;
    /*
    If SBR is 1–8191, baud rate = baud clock ÷ ((OSR + 1) × SBR). You must update the 13-bit baud
    rate setting [SBR12:SBR0] only when both the transmitter and receiver are disabled (both CTRL[RE]
    and CTRL[TE] are 0).
    */

    if((s->uartcr & UART_CR_RE) || (s->uartcr & UART_CR_TE) ==0 ){
        ssp.data_bits = 8;
        ssp.parity = 'N';
        ssp.stop_bits = 1;
        ssp.speed = s->pclk_frq / ((((s->bdr & UART_BDR_OSR) >> 24) + 1) * (s->bdr & UART_BDR_SBR));
        s->baud_rate = ssp.speed; //Will be used in the UART RX/TX timing.
        qemu_chr_fe_ioctl(&s->chr, CHR_IOCTL_SERIAL_SET_PARAMS, &ssp);
        trace_cmsdk_apb_uart_set_params(ssp.speed);
    }
}

 
 /*
  * Register offsets for S32K3x8 UART in ref manual
  */
 #define OFFSET_UARTCR   0x18  /* Control Register */
 #define OFFSET_UARTSR   0x14  /* Status Register  */
 #define OFFSET_BDR      0x10  /* Baud Rate Divider */
 #define OFFSET_UDR      0x1C  /* Data Register (TX) */
 
    //UART RESET
 static void s32k3x8_uart_reset(DeviceState *dev)
{
    S32K3X8UARTState *s = S32K3X8_UART(dev);

    s->rx_ready = false;
    s->uartsr   = 0;      //clear the status
    
    // Set TDRE = 1 (Transmit empty)
    s->uartsr  |= UART_SR_TDRE;

    // Set default baud rate if not already set
    if ((s->bdr & UART_BDR_SBR) == 0) {
        // OSR = 15 (0xF), SBR = 14 for ~115200 (actually 111607) baud if pclk_frq = 25MHz
        s->bdr = (0xF << 24) | 14;
            uart_update_parameters(s);
    }
    timer_del(s->timer);
}

//uart can receive. When this returns 1, the rx callback is being called.
static int uart_can_receive(void *opaque)
{
    S32K3X8UARTState *s = opaque;

    if(!(s->rx_busy)){
        return 1;        
    }
    return 0;
}


    //RX callback
 static void uart_rx(void *opaque, const uint8_t *buf, int size)
 {
     S32K3X8UARTState *s = opaque;
     if (size > 0 && !(s->rx_busy)) {
        s->rx_temp = buf[0];   // Only 1 byte at a time
        s->rx_busy = 1;
        uint32_t byte_time_ns = (10 * 1e9) / s->baud_rate; // 10 bits per message(1byte payload) (start + 8 data + stop)
        timer_mod(s->timer, qemu_clock_get_ns(QEMU_CLOCK_VIRTUAL) + byte_time_ns);

     }
 }

 //Timer callback
 void s32k3x8_uart_rx_timer_cb(void *opaque) {
    S32K3X8UARTState *s = opaque;
    s->rx_buf = s->rx_temp;
    s->rx_ready = true;
    s->uartsr |= UART_SR_RDRF;
    s->rx_busy = false;
    //trigger IRQ here
    // Checks, Control Register 21.bit, Receiver Interrupt Enable. 
    // From ref. 
    if((s->uartcr & UART_CR_RIE) != 0 ){ 
    qemu_set_irq(s->irq, 1);       
    }
}
 
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
        if (s->rx_ready) {
            s->rx_ready = false;
            s->uartsr &= ~UART_SR_RDRF; //clear rx data reg full flag
            qemu_set_irq(s->irq, 0);
            return s->rx_buf;
        } 
        else {
            return 0; // no data
        }
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
         if((s->bdr & UART_BDR_SBR) != 0){
            uart_update_parameters(s);
         } //If SBR(12-0) (Baud Rate Modulo Divisor) is zero, disabled.
        
         break;
     case OFFSET_UDR: {
         uint8_t ch = val & 0xFF;
         qemu_chr_fe_write_all(&s->chr, &ch, 1);
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

    /* Setup IRQ line */
    sysbus_init_irq(SYS_BUS_DEVICE(s), &s->irq);

 }

 static void s32k3x8_uart_realize(DeviceState *dev, Error **errp)
{
    S32K3X8UARTState *s = S32K3X8_UART(dev);

    s->timer = timer_new_ns(QEMU_CLOCK_VIRTUAL, s32k3x8_uart_rx_timer_cb, s);
    /*
    *   the rx_uart function is gonna be called when there is these two happens,
    *   
    *   the host terminal sends input (e.g., typing A), 
    *   (QEMU’s -serial stdio setup pushes that byte into the chardev. This way terminal can be used as a input) 
    * 
    *   or a socket/pty receives a byte. 
    */
    qemu_chr_fe_set_handlers(&s->chr,uart_can_receive ,uart_rx, NULL, NULL, s, NULL, NULL);
    s32k3x8_uart_reset(dev);
}

 static const Property s32k3x8_uart_props[] = {
    DEFINE_PROP_CHR("chardev", S32K3X8UARTState, chr),  
    DEFINE_PROP_UINT32("pclk-frq", S32K3X8UARTState, pclk_frq, 0),
};
 
 /**
  * Class initialization
  */
 static void s32k3x8_uart_class_init(ObjectClass *klass, void *data)
 {
    DeviceClass *dc = DEVICE_CLASS(klass);
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
 