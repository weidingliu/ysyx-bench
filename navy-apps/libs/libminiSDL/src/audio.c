#include <NDL.h>
#include <SDL.h>

int SDL_OpenAudio(SDL_AudioSpec *desired, SDL_AudioSpec *obtained) {
  panic("should not reach here");
  return 0;
}

void SDL_CloseAudio() {
panic("should not reach here");
}

void SDL_PauseAudio(int pause_on) {
panic("should not reach here");
}

void SDL_MixAudio(uint8_t *dst, uint8_t *src, uint32_t len, int volume) {
panic("should not reach here");
}

SDL_AudioSpec *SDL_LoadWAV(const char *file, SDL_AudioSpec *spec, uint8_t **audio_buf, uint32_t *audio_len) {
panic("should not reach here");
  return NULL;
}

void SDL_FreeWAV(uint8_t *audio_buf) {
panic("should not reach here");
}

void SDL_LockAudio() {
panic("should not reach here");
}

void SDL_UnlockAudio() {
panic("should not reach here");
}
