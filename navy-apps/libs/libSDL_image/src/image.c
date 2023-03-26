#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"
#include <unistd.h>
#include <fcntl.h>

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) {
  int fp=open(filename,O_RDONLY);
  assert(fp!=-1);
  int size=lseek(fp,0,SEEK_END);
  int o=lseek(fp,0,SEEK_SET);
  assert(o!=-1);
  char * buf = (char * )malloc(sizeof(char)*size);
  o=read(fp,buf,size);
  printf("%d %d\n",size,o);
  assert(o==size);
  
  SDL_Surface *ret=STBIMG_LoadFromMemory(buf,size);
  //printf("%d %d\n",ret->w,ret->h);
  free(buf);
  close(fp);
  return ret;
}

int IMG_isPNG(SDL_RWops *src) {
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
