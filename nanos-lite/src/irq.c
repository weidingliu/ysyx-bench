#include <common.h>
#include "syscall.h"
static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case(EVENT_YIELD): do_syscall(c); break;
    case(EVENT_SYSCALL): do_syscall(c);  break;
    default: panic("Unhandled event ID = %d", e.event);break;
  }
  //printf("syscall %d  = %x\n",e.event,c->GPRx);  //strace
  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  //printf("%x\n",do_event);
  cte_init(do_event);
}
