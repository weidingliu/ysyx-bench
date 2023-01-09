#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  //size_t num=0;//how many veriable argument
  size_t ret=0;
  for (int i=0;i<strlen(fmt);i++)
  {
      if(*fmt == '%'){
          switch(*(fmt+1)){
          case 'd':{
              
              fmt+=2;
              break;
          }
          case 's':{
              
              fmt+=2;
              break;
          }
          }
      }
      else{
          *out++=*fmt++;
          ret++;
      }
      
  
  }
  
  return ret;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
