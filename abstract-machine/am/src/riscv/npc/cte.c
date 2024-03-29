#include <am.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    //printf("%d\n",c->mcause);
    switch (c->mcause) {
      case(11): ev.event = EVENT_YIELD;c->mepc+=4;break;
      case(7): ev.event =EVENT_IRQ_TIMER;break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));
  asm volatile("csrw mstatus, %0" : : "r"(0xa00001800));
  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
   if(enable){
       asm volatile("csrrs zero,mstatus, %0" : : "r"(0xa00001808));
       asm volatile("csrrs zero,mie, %0" : : "r"(0x000000080));
       
   }
}
