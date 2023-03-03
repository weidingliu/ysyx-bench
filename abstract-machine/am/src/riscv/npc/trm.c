#include <am.h>
#include <klib-macros.h>
#include "../riscv.h"

#define MMIO_BASE 0xa0000000
#define DEVICE_BASE 0xa0000000
#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)


extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch) {
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  
  asm volatile("mv a0, %0; ebreak" : :"r"(code));
  //asm volatile("0000000 00001 00000 000 00000 11100 11");
  
  while (1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
