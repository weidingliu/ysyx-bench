#include <NDL.h>

int SDL_Init(uint32_t flags) {
panic("should not reach here");
  return NDL_Init(flags);
}

void SDL_Quit() {
  NDL_Quit();
}

char *SDL_GetError() {
panic("should not reach here");
  return "Navy does not support SDL_GetError()";
}

int SDL_SetError(const char* fmt, ...) {
panic("should not reach here");
  return -1;
}

int SDL_ShowCursor(int toggle) {
panic("should not reach here");
  return 0;
}

void SDL_WM_SetCaption(const char *title, const char *icon) {
panic("should not reach here");
}
