#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  
  int k=inl(KBD_ADDR);
  printf("%08x\n",k);

  if(k!=AM_KEY_NONE){
      kbd->keycode = k%256;
      kbd->keydown = 1;
  }
  else{
      kbd->keydown = 0;
      kbd->keycode = AM_KEY_NONE;
  }
}
