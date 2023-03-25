#include <sdl-file.h>
#include <stdio.h>

SDL_RWops* SDL_RWFromFile(const char *filename, const char *mode) {
  printf("should not reach here file\n");
  return NULL;
}

SDL_RWops* SDL_RWFromMem(void *mem, int size) {
  printf("should not reach here file\n");
  return NULL;
}
