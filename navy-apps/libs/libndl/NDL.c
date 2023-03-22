#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <assert.h>
#include <fcntl.h>


static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int mid_x=0,mid_y=0;


uint32_t NDL_GetTicks() {
  struct timeval tv;
  struct timezone tz;
  gettimeofday(&tv,&tz);
  
  return tv.tv_usec / 1000;
}

int NDL_PollEvent(char *buf, int len) {
  //printf("here\n");
  //assert(len==64);
  int fd = open("/dev/events", O_RDONLY);
  //printf("----%d\n",*(int *)fp);
  assert(fd!=-1);
  
  ssize_t o=read(fd,(char *)buf,len);
  //printf("%d\n",o);
  if(o<=0) { close(fd); return 0;}
  close(fd);
  return 1;
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }

    
    FILE *fp = fopen("/proc/dispinfo","r");
    assert(fp);
    int sys_w,sys_h;
    fscanf(fp,"WIDTH:%dHEIGHT:%d",&sys_w,&sys_h);
    //fscanf(fp,"%s:%d",info[1].name,&info[1].value);
    if(*w==0 && *h==0){
        *w=sys_w;
        *h=sys_h;
    }
    mid_x=sys_w/2-*w/2;
    mid_y=sys_h/2-*h/2;
    
    if(mid_x<0){
        mid_x=0;
    }
    if(mid_y<0){
        mid_y=0;
    }
    screen_w = sys_w; 
    screen_h = sys_h;
    assert(*w<=sys_w && *h<=sys_h);
    //printf("%d  %d   %d  %d\n",sys_w,sys_h,*w,*h);
    fclose(fp);
    return;
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
    
    //printf("%d  %d\n",screen_w,screen_h);
    int fdm = open("/dev/fb",O_RDWR);
    assert(fdm!=-1);
    for(int i=0;i<h;i++){
        lseek(fdm,((y+mid_y+i)*screen_w+x+mid_x)*4,SEEK_SET);
        int o=write(fdm,pixels+i*w,w*4);
        //assert(o<w);
        
    }
    close(fdm);
}

void NDL_OpenAudio(int freq, int channels, int samples) {
    
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  return 0;
}

void NDL_Quit() {
}
