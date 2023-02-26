#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  size_t ret=0;
  while(*fmt !='\0'){
      if(*fmt=='%'){
          switch(*(fmt+1)){
              case 'd':{
                  char strnum[32];
                  int j=31;
                  int tempd = va_arg(ap,int);
                  do{
                      strnum[j--] =((tempd%10) + '0');
                      ret++;
                      tempd/=10;
                  }while(tempd!=0);
                  fmt+=2;
                  putstr(strnum);
                  break;
              }
              case 's':{
                  char *temps = va_arg(ap,char*);
                  putstr(temps);
                  fmt+=2;
                  break;
              }
          }
      }
      else{
          putch(*fmt);
          fmt++;
          ret++;
      }
  }
  va_end(ap);
  return ret;
  
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
              char strnum[32];
              int j=31;
              int tempd= va_arg(ap,int);
              if(tempd<0) 
              {
                  *out='-';
                  ret++;
                  out++;
                  tempd=-tempd;
              }
              do{
                  strnum[j--] =((tempd%10) + '0');
                  ret++;
                  tempd/=10;
              }while(tempd!=0);
              j++;
              while(j<=31){
                  *out=strnum[j++];
                  out++;
              }
              fmt+=2;
              break;
          }
          case 's':{
              char *temps = va_arg(ap,char*);
              while(*temps!='\0'){
                  *out=*temps;
                  ret++;
                  out++;
                  temps++;
              }
              fmt+=2;
              break;
          }
          default:{
              *out=*fmt;
              out++;
              fmt++;
              ret++;
              break;
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
  *out='\0';
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
