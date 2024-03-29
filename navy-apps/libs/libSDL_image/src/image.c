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
  FILE *fp=fopen(filename,"r");
  assert(fp);
  int o=fseek(fp,0,SEEK_END);
  assert(o==0);
  long size=ftell(fp);
  rewind(fp);
  char * buf = (char * )malloc(sizeof(char)*size);
  o=fread(buf,sizeof(char),size,fp);
  //printf("%d %d\n",size,o);
  assert(o==size);
  
  SDL_Surface *ret=STBIMG_LoadFromMemory(buf,size);
  //printf("%d %d\n",ret->w,ret->h);
  free(buf);
  fclose(fp);
  return ret;
}

int IMG_isPNG(SDL_RWops *src) {
  printf("image\n");
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
