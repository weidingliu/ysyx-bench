#include <NDL.h>
#include <stdio.h>

int SDL_Init(uint32_t flags) {

  return NDL_Init(flags);
}

void SDL_Quit() {
  NDL_Quit();
}

char *SDL_GetError() {
  return "Navy does not support SDL_GetError()";
}

int SDL_SetError(const char* fmt, ...) {
  return -1;
}

int SDL_ShowCursor(int toggle) {
  //printf("should not reach here general 0\n");
  return 0;
}

void SDL_WM_SetCaption(const char *title, const char *icon) {
  //printf("should not reach here general 1\n");
}
