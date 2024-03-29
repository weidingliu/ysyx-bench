#include <am.h>
#include <nemu.h>
#include <stdio.h>

//static uint64_t boot_time=0;

void __am_timer_init() {
/*
    uint64_t t=inl(RTC_ADDR);
    uint64_t t2=inl(RTC_ADDR+4);
    uint64_t p=(t2 << 32) + t;
    boot_time=p;*/
    
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  //uptime->us = 2;
  
  uint64_t t=inl(RTC_ADDR);
  uint64_t t2=inl(RTC_ADDR+4);
  uint64_t p=(t2 << 32) | t;
  uptime->us = p;//-boot_time;
  //t[1]=inl(RTC_ADDR+4);
  //int t=5;
  //uptime->us= *t;
  //uint32_t t2=inl(RTC_ADDR+4);
  //uptime->us=ioe_read(AM_TIMER_UPTIME).us;
  //printf("%d\n",uptime->us);
  //printf("hello!%d  %d\n",t,t2);
  
  
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
