#include "trp.h"

#define N 32
uint8_t data[N];

void reset() {
  int i;
  for (i = 0; i < N; i ++) {
    data[i] = i + 1;
  }
}
//构建memcpy的src
void reset_1(uint8_t data[],int val){
    int i;
    for(i=0;i<N;i++){
        data[i]=val;
    }
}

// 检查[l,r)区间中的值是否依次为val, val + 1, val + 2...
void check_seq(int l, int r, int val) {
  int i;
  for (i = l; i < r; i ++) {
    assert(data[i] == val + i - l);
  }
}

// 检查[l,r)区间中的值是否均为val
void check_eq(int l, int r, int val) {
  int i;
  for (i = l; i < r; i ++) {
    assert(data[i] == val);
  }
}
//检查[l,r)区间中的值是否依次为  ...,val+2,val+1,val
void check_lo_seq(int l, int r, int val){
    int i;
    for(i = l; i < r; i ++){
        assert(data[i] == val + i - l);
    }
}


void test_memset() {
  int l, r;
  for (l = 0; l < N; l ++) {
    for (r = l + 1; r <= N; r ++) {
      reset();
      uint8_t val = (l + r) / 2;
      memset(data + l, val, r - l);
      check_seq(0, l, 1);
      check_eq(l, r, val);
      check_seq(r, N, r + 1);
    }
  }
}

void test_memcpy(){
    uint8_t src[N];
    int l,r;
    for(l=0;l<N;l++){
        for(r=l+1;r<=N;r++){
           reset();
           uint8_t val = (l + r) / 2;
           reset_1(src,val);
           memcpy(data+l,src,r-l);
           check_seq(0, l, 1);
           check_eq(l, r, val);
           check_seq(r, N, r + 1);
        }
    }
}
/*
int main(){
    test_memset();
    test_memcpy();
    return 0;
}*/


