#include <common.h>

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case(EVENT_YIELD): printf("I love PA\n");break;
    default: panic("Unhandled event ID = %d", e.event);break;
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  //printf("%x\n",do_event);
  cte_init(do_event);
}
