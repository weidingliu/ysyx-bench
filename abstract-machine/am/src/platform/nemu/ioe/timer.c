#include <am.h>
#include <nemu.h>
#include <stdio.h>


void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  //uptime->us = 2;
  //uint32_t now=inl(RTC_ADDR );
  //long seconds = now.tv_sec - boot_time.tv_sec;
  //long useconds = now.tv_usec - boot_time.tv_usec;
  //uptime->us = seconds * 1000000 + (useconds + 500);
  
  //int t=5;
  uptime->us++;
  printf("hello!%d\n",uptime->us);
  
  
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
