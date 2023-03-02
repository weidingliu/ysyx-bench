#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t v1=inl(VGACTL_ADDR);
  //uint32_t v2=inl(VGACTL_ADDR+4);
  /*uint64_t v=(v2<<32) +v1;
  printf("%016x\n",v);*/
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = v1 >> 16, .height = v1 % 256,
    .vmemsz = (v1 >> 16)*(v1 % 256)
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
