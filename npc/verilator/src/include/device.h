#define CONFIG_VGA_SHOW_SCREEN
#define CONFIG_HAS_KEYBOARD
#define CONFIG_VGA_SIZE_400x300

#define DEVICE_BASE 0xa0000000
#define MMIO_BASE 0xa0000000

#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200)
#define DISK_ADDR       (DEVICE_BASE + 0x0000300)
#define FB_ADDR         (MMIO_BASE   + 0x1000000)
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000)

#define concat_temp(x, y) x ## y
#define concat(x, y) concat_temp(x, y)
#include <cstdint>

extern void *vmem;
extern uint32_t *vgactl_port_base;
extern uint32_t *i8042_data_port_base;

void write_device(long long addr,  long long data,char wmask);
void read_device(long long addr, long long *rdata);
void init_device();
void init_vga();
void vga_update_screen();
uint64_t get_time();
void device_update();
void init_i8042();
void send_key(uint8_t scancode, bool is_keydown);
void i8042_data_io_handler(uint32_t offset, int len, bool is_write);
