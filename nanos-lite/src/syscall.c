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

size_t sys_write(int fd,const void *buf,size_t count){
    size_t o=0;
    printf("%x\n",(int *)buf);
    if(fd!=1 && fd!=2) {panic("Unhandled FD =%d",fd); return -1;}//1 stdout 2 stderr
    for(int i=0;i<count;i++){
        putch(*(uint8_t *)buf);
        buf++;
        o++;
    }
    return o;
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  printf("%x  %d\n",a[1],a[2]);
  int ret=-1;
  switch (a[0]) {
    case(SYS_yield): {ret=sys_yield();break;}
    case(-1): break;//??
    case(SYS_exit): ret=sys_exit(NULL);break;
    case(SYS_write): ret=sys_write(1,(void *)a[1],a[2]);break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
  c->GPRx=ret;
}


