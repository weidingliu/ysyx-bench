#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  int i;
  uint32_t v1=inl(VGACTL_ADDR);
  //printf("%08x\n",v1);
  int w = (v1 >> 16);  // TODO: get the correct width
  int h = (v1 & 0xffff);  // TODO: get the correct height
  //printf("%d  %d\n",w,h);
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t v1=inl(VGACTL_ADDR);
  //uint32_t v2=inl(VGACTL_ADDR+4);
  /*uint64_t v=(v2<<32) +v1;
  printf("%016x\n",v);*/
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = v1 >> 16, .height = v1 & 0xffff,
    .vmemsz = (v1 >> 16)*(v1 & 0xffff)
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
    if(ctl->w==0 || ctl->h==0) return;
    
    uint32_t v1=inl(VGACTL_ADDR);
    int w = (v1 >> 16); 
    //int h = (v1 & 0xffff);
    
    int i=ctl->y,j=ctl->x;
    outl(SYNC_ADDR,1);
   printf("%d  %d   %d   %d \n",i,j,ctl->w,ctl->h);
   for(;i<ctl->y+ctl->h;i++){
        for(;j<ctl->x+ctl->w;j++){
            outl(FB_ADDR+(i*w+j)*4, *(uint32_t *)(ctl->pixels + ((i-ctl->y)*ctl->x+(j-ctl->x))*4));
        }
    }
    
  
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
