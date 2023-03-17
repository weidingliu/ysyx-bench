#include <common.h>
#include "syscall.h"
int sys_yield(){
    yield();
    return 0;
}

int sys_exit(void *state){
    halt(0);
    return 0;
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  //printf("%d\n",a[0]);
  int ret;
  switch (a[0]) {
    case(SYS_yield): {ret=sys_yield();break;}
    case(-1): break;//??
    case(SYS_exit): ret=sys_exit(NULL);break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
  c->GPRx=ret;
}


