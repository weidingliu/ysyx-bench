#include <NDL.h>
#include <SDL.h>
#include <stdio.h>
#include <string.h>
#include<assert.h>

#define keyname(k) #k,

static uint8_t key_state[128]={0};

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  printf("should not reach here event 0\n");
  assert(0);
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  char buf[128];
  int ret=NDL_PollEvent(buf,sizeof(buf));
  if(!ret) return 0;

  int keycode=0;
  if(!strncmp("ku",buf,2)){
      ev->type = SDL_KEYUP;
      
      sscanf(buf,"ku %*s %d",&keycode);
      ev->key.keysym.sym=keycode;
      key_state[keycode]=0;

  }
  else{
      ev->type = SDL_KEYDOWN;
      sscanf(buf,"kd %*s %d",&keycode);
      ev->key.keysym.sym=keycode;
      key_state[keycode]=1;
  }
  
  return 1;
}

int SDL_WaitEvent(SDL_Event *event) {
  char buf[128];
  while(!NDL_PollEvent(buf,sizeof(buf)));
  //printf("%s\n",buf);
  int keycode=0;
  if(!strncmp("ku",buf,2)){
      event->type = SDL_KEYUP;
      
      sscanf(buf,"ku %*s %d",&keycode);
      key_state[keycode]=0;
      event->key.keysym.sym=keycode;

  }
  else{
      event->type = SDL_KEYDOWN;
      sscanf(buf,"kd %*s %d",&keycode);
      event->key.keysym.sym=keycode;
      key_state[keycode]=1;
      //event->key.keysym.sym=SDLK_DOWN;
      //printf("%d  %d \n",keycode,event->key.keysym.sym);
  }
  
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("should not reach here event 1\n");
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  //printf("should not reach here event 2\n");
  //assert(numkeys!=NULL);
  if(numkeys!=NULL){
      int ret=0;
      for(int i=0;i<sizeof(keyname)/sizeof(keyname[0]);i++){
          if(key_state[i]==1) ret++;
      }
      *numkeys=ret;
  }
  return key_state;
}
