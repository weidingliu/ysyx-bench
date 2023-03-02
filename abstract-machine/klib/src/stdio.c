#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  size_t ret=0;
  putstr(fmt);
  putch('\n');
  while(*fmt !='\0'){
      if(*fmt=='%'){
          fmt++;
          int width=0;
          if(*(fmt) == '0'){
              fmt++;
              while(*fmt>'0' &&  *fmt<='9'){
                  width=width*10+ (int)*fmt-'0';
                  fmt++;
              }
          
          }
          switch(*(fmt)){
              case 'd':{
                  char strnum[32];
                  int j=31;
                  int tempd = va_arg(ap,int);
                  if(tempd<0) 
                  {
                      putch('-');
                      
                      ret++;
                      tempd = -(tempd+1);
                      
                      strnum[j--] =((tempd%10) + '1');
                    
                      ret++;
                      tempd/=10;
                      
                      while(tempd!=0){
                          strnum[j--] =((tempd%10) + '0');
                          ret++;
                          tempd/=10;
                      }
                  }
                  
                  else{
                      
                      do{
                          strnum[j--] =((tempd%10) + '0');
                          ret++;
                          tempd/=10;
                      }while(tempd!=0);
                   
                  }
                  
                  
                  j++;
                  if(width>0 && (32-j < width)){
                      for(int i=0;i<(width-32+j);i++){
                          putch('0');
                      }
                  }
                  
                  while(j!=32){
                      putch(strnum[j]);
                      j++;
                  }
                  fmt++;
                  //char *p __attribute__((__unused__)) =strnum;
                  //putstr(p);
                  break;
              }
              case 'x':{
                  char strnum[32];
                  int j=31;
                  uint32_t tempd = va_arg(ap,uint32_t);
                  
                  
                 
                      
                      do{
                          if((tempd%16)<10) strnum[j--] =((tempd%16) + '0');
                          else strnum[j--] =((tempd%16)-10 + 'a');
                          ret++;
                          tempd/=16;
                      }while(tempd!=0);
                   
                  
                  
                  
                  j++;
                  if(width>0 && (32-j < width)){
                      for(int i=0;i<(width-32+j);i++){
                          putch('0');
                      }
                  }
                  
                  while(j!=32){
                      putch(strnum[j]);
                      j++;
                  }
                  fmt++;
                  //char *p __attribute__((__unused__)) =strnum;
                  //putstr(p);
                  break;
              }
              case 's':{
                  char *temps = va_arg(ap,char*);
                  putstr(temps);
                  fmt++;
                  break;
              }
              
              default:{
                  putch(*(fmt));
                  putch('\n');
                  panic("Not implemented");
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
              panic("Not implemented");
              
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
