#include <common.h>
#include "syscall.h"
#include <fs.h>

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
    //printf("%x\n",(int *)buf);
    if(fd==1 || fd==2) {//1 stdout 2 stderr
        for(int i=0;i<count;i++){
            putch(*(uint8_t *)buf);
            buf++;
            o++;
        }
    }
    else{
        o=fs_write(fd,buf,count);
    }
    return o;
}

size_t sys_sbrk(void *addr){
    
    return 0;//error return -1
}

int sys_open(const char *pathname, int flags, int mode){
    return fs_open(pathname,flags,mode);
}

size_t sys_lseek(int fd, size_t offset, int whence){
    return fs_lseek(fd, offset, whence);
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  //printf("%x  %d\n",a[1],a[0]);
  int ret=-1;
  switch (a[0]) {
    case(SYS_yield): {ret=sys_yield();break;}
    case(-1): break;//??
    case(SYS_exit): ret=sys_exit(NULL);break;
    case(SYS_write): ret=sys_write(a[1],(void *)a[2],a[3]);break;
    case(SYS_brk): ret=sys_sbrk((void *)a[1]); break;
    case(SYS_open): ret=sys_open((const char *)a[1],(int) a[2],(int) a[3]);break;
    case(SYS_lseek): ret=sys_lseek(a[1],a[2],a[3]); break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
  //printf("%d\n",ret);
  c->GPRx=ret;
}


