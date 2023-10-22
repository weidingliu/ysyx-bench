#include <amtest.h>

Context *simple_trap(Event ev, Context *ctx) {
  switch(ev.event) {
    case EVENT_IRQ_TIMER:
      putch('t'); break;
    case EVENT_IRQ_IODEV:
      putch('d'); break;
    case EVENT_YIELD:
      putch('y'); break;
    default:
      break;
  }
  return ctx;
}

void hello_intr() {
  printf("Hello, AM World @ " __ISA__ "\n");
  printf("  t = timer, d = device, y = yield\n");
  io_read(AM_INPUT_CONFIG);
  iset(1);
  while (1) {
    for (volatile int i = 0; i < 100000; i++) ;
    yield();
  }
}

void hello_yield(){
    printf("I love Difftest\n");
    printf("start yield test\n");
    yield();
    iset(1);
    while(1){
        for(volatile int i =0;i<100;i++);
	yield();
    
    }

}

