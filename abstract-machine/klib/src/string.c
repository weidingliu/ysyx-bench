#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  if(s == NULL) assert(0);
  size_t num=0;
  const char *p=s;
  while( *p != '\0'){
      num++;
      p++;
  }
  return num;
  //panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
  if(dst==NULL || src == NULL) assert(0);
  char* ret = dst;
  while(*src!='\0'){
      *dst++ =*src++;
  }
  *dst = *src;
  
  return ret;
}

char *strncpy(char *dst, const char *src, size_t n) {
  size_t i;
  for(i=0;i<n && src[i] != '\0';i++){
      dst[i]=src[i];
  }
  for(; i<n;i++){
      dst[i]='\0';
  }
  return dst;
}

char *strcat(char *dst, const char *src) {
  size_t dst_len=strlen(dst);
  int i;
  for(i=0;src[i]!='\0';i++){
      dst[i+dst_len]=src[i];
  }
  dst[i+dst_len]='\0';
  
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  while(*s1 ==*s2){
      if(*s1=='\0' && *s2=='\0'){return 0;}
      s1++;
      s2++;
  }
  return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

int strncmp(const char *s1, const char *s2, size_t n) {
  if(n==0){
      return 0;
  }
  char* src1;
  char* src2;
  while(n!=0 &&(*s1==*s2)){
      n--;
      *src1++ = *s1++;
      *src2++ = *s2++;
  }
  return (*(unsigned char*)src1 - *(unsigned char*)src2);
}

void *memset(void *s, int c, size_t n) {
 
  if(n<=0)  return 0;
  while(n!=0){                                          
      *(char *)s = c; 
      s= (char *)s +1;
      n--;
  }
  
 return 0;
}

void *memmove(void *dst, const void *src, size_t n) {
  
  if(dst<=src || (char *)dst >= ((char *)src + n)){
      while(n--){
          *(char *)dst = *(char *)src;
          dst = (char *)dst +1;
          src = (char *)src+ +1;
      }
  }
  else {
      dst =(char *)dst +n-1;
      src =  (char *)src +n-1;
      while (n--){
          *(char *)dst = *(char *)src;
          dst = (char *)dst -1;
          src = (char *)src-1;
      }
  }
   return 0;
}

void *memcpy(void *out, const void *in, size_t n) {
  
  while(n--){
          *(char *)out = *(char *)in;
          out= (char *)out+1;
          in = (char *)in+1;
      }
  return 0;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  if(n==0) return 0;
  while(*(char *) s1== *(char *) s2 && n!=0){
      s1=(char *) s1+1;
      s2=(char *) s2+1;
      n--;
  }
  return (*(unsigned char*)s1 - *(unsigned char*)s2);
  
}

#endif
