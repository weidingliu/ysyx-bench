#include <NDL.h>
#include <SDL.h>
#include <stdio.h>
int SDL_OpenAudio(SDL_AudioSpec *desired, SDL_AudioSpec *obtained) {
  printf("should not reach here\n");
  return 0;
}

void SDL_CloseAudio() {
  printf("should not reach here\n");
}

void SDL_PauseAudio(int pause_on) {
  printf("should not reach here\n");
}

void SDL_MixAudio(uint8_t *dst, uint8_t *src, uint32_t len, int volume) {
  printf("should not reach here\n");
}

SDL_AudioSpec *SDL_LoadWAV(const char *file, SDL_AudioSpec *spec, uint8_t **audio_buf, uint32_t *audio_len) {
  printf("should not reach here\n");
  return NULL;
}

void SDL_FreeWAV(uint8_t *audio_buf) {
  printf("should not reach here\n");
}

void SDL_LockAudio() {
  printf("should not reach here\n");
}

void SDL_UnlockAudio() {
  printf("should not reach here\n");
}
