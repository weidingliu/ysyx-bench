#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

extern void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd);

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  size_t o=0;
  for(int i=0;i<len;i++){
        putch(*(uint8_t *)buf);
        buf++;
        o++;
    }
  return o;
}

size_t events_read(void *buf, size_t offset, size_t len) {
  //printf("%d\n",len);
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  if (ev.keycode == AM_KEY_NONE) return 0;
  else {
      if(ev.keydown){
          return sprintf((char *)buf, "kd %c\n",keyname[ev.keycode]);
      }
      else{
          return sprintf((char *)buf, "ku %c\n",keyname[ev.keycode]);
      }
  
  }
  
  
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
