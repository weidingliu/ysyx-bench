#include <NDL.h>
#include <SDL.h>
#include <stdio.h>
#include <string.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  printf("should not reach here\n");
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  printf("should not reach here\n");
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  char buf[128];
  while(!NDL_PollEvent(buf,sizeof(buf)));
  printf("%s\n",buf);
  
  if(!strncmp("ku",buf,2)){
      event->type = SDL_KEYUP;
      
      sscanf(buf,"ku *c %d",&event->key.keysym.sym);
      printf("%d  %d  %d %d\n",SDLK_1,event->key.keysym.sym,SDLK_DOWN,SDLK_UP);

  }
  else{
      event->type = SDL_KEYDOWN;
      sscanf(buf,"kd *c %d",&event->key.keysym.sym);
  }
  
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("should not reach here\n");
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  printf("should not reach here\n");
  return NULL;
}
