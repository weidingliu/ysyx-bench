#include <am.h>
#include <stdio.h>
#include "./include/npc.h"
#include "../riscv.h"
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  int k=inl(KBD_ADDR);

  if(k!=AM_KEY_NONE){
      kbd->keycode = k%256;
      if(k >>8 !=0) kbd->keydown = 1;
      else kbd->keydown = 0;
      
  }
  else{
      kbd->keydown = 0;
      kbd->keycode = AM_KEY_NONE;
  }
}

