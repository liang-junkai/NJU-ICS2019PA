#include "klib.h"

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  return 0;
}

char *strcpy(char* dst,const char* src) {
  return NULL;
}

char* strncpy(char* dst, const char* src, size_t n) {
  return NULL;
}

char* strcat(char* dst, const char* src) {
  return NULL;
}

int strcmp(const char* s1, const char* s2) {
  while(*s1==*s2){
    if(*s1=='\0'||*s2=='\0')break;
    s1++;
    s2++;

  }
  return *(uint32_t *)s1-*(uint32_t *)s2; 
  return 0;
}

int strncmp(const char* s1, const char* s2, size_t n) {
  return 0;
}

void* memset(void* v,int c,size_t n) {
  return NULL;
}

void* memcpy(void* out, const void* in, size_t n) {
  return NULL;
}

int memcmp(const void* s1, const void* s2, size_t n){
  for(int i=0;i<n;i++){
    if(*(char*)s1=='\0'||*(char*)s2=='\0')break;
    if(*(char*)s1!=*(char*)s2)break;
    s1++;
    s2++;
  }
  return *(char *)s1-*(char *)s2;
}

#endif
