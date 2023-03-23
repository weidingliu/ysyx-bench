#include <common.h>
#include "syscall.h"
extern void do_syscall(Context *c);

const char *enum_name[]={
      "SYS_exit","SYS_yield","SYS_open","SYS_read","SYS_write","SYS_kill","SYS_getpid","SYS_close",
  "SYS_lseek","SYS_brk","SYS_fstat","SYS_time","SYS_signal","SYS_execve","SYS_fork","SYS_link",
  "SYS_unlink","SYS_wait","SYS_times","SYS_gettimeofday"
};

const char *get_name(int value){
    if(value<0 || value>SYS_gettimeofday) panic("Fail nemu\n");
    return enum_name[value];
}


static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case(EVENT_YIELD): {do_syscall(c); break;}
    case(EVENT_SYSCALL): {do_syscall(c);  break;}
    default: {panic("Unhandled event ID = %d", e.event);break;}
  }
  
  #ifdef SYSCALL_TRACE
  printf("syscall %s (ID = %d) = %x\n",get_name(c->GPR1),c->GPR1,c->GPRx);  //strace
  #endif
  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  //printf("%x\n",do_event);
  cte_init(do_event);
}
