#include <tb.h>
#include <SDL2/SDL.h>
#include <device.h>

void init_vga();
void vga_update_screen();

void device_update() {
  static uint64_t last = 0;
  uint64_t now = get_time();
  if (now - last < 1000000 / 100) {
    return;
  }
  last = now;
//printf("sdfggyuiii\n");
  vga_update_screen();

  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_QUIT:
        SDL_Quit(); 
        state = END;
        break;
      // If a key was pressed
      case SDL_KEYDOWN:
      case SDL_KEYUP: {
        uint8_t k = event.key.keysym.scancode;
        bool is_keydown = (event.key.type == SDL_KEYDOWN);
        send_key(k, is_keydown);
        break;
      }
      default: break;
    }
  }
}

void init_device(){
    init_vga();
    init_i8042();
}

