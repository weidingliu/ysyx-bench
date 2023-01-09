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
  while (*fmt != '\0')
  {
      if(*fmt == '%'){
          switch(*(fmt+1)){
          case 'd':{
              int temp= va_arg(ap,int);
              do{
                  *out = (char)(temp%10 + '0');
                  ret++;
                  out++;
                  temp/=10;
              }while(temp!=0);
              fmt+=2;
              break;
          }
          case 's':{
              char *temp = va_arg(ap,char*);
              while(*temp!='\0'){
                  *out=*temp;
                  ret++;
                  out++;
                  temp++;
              }
              fmt+=2;
              break;
          }
          default:{
              *out=*fmt;
              out++;
              fmt++;
              ret++;
          }
          }
      }
      else{
          *out=*fmt;
          out++;
          fmt++;
          ret++;
      }
      
  
  }
  va_end(ap);
  return ret;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
