#include <cstdio>
#include <cstdint>
#include <cstring>
#include <cassert>
#include <tb.h>
#include <sys/time.h>

uint64_t boot_time = 0;
bool is_skip_ref=0;

static uint64_t get_time_internal(){
    struct timeval now;
    gettimeofday(&now, NULL);
    uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
    return us;
    
}

static uint64_t get_time(){
    if (boot_time == 0) boot_time = get_time_internal();
    uint64_t now = get_time_internal();
    return now - boot_time;

}

extern "C" void pmem_read(long long addr, long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  //printf("%016llx  %016llx\n",(addr & ~0x7ull)-RESET_VECTOR,addr);
  if ((addr & ~0x7ull)==0xa0000048){
      uint64_t us=get_time();
      //printf("%ld\n",us);
      *rdata=us;
      is_skip_ref=1;
      //printf("%lld\n",*rdata);
      //printf("here\n");
      return;
  }
  long long temp;
  printf("%llx\n",((addr & ~0x7ull)-RESET_VECTOR));
  if((((addr & ~0x7ull)-RESET_VECTOR)>MAX_MEM) ) {display_iringbuf();assert(0);}
  memcpy(&temp,(mem+(addr& ~0x7ull)-RESET_VECTOR),sizeof(long long));
  *rdata=temp;
  if(mtrace) printf("READ--- ADDR:  %016llx  DATA:  %016llx \n",(addr),*rdata);
  
}
extern "C" void pmem_write(long long addr, long long wdata, char wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  //printf("------%llx,%llx,%x\n",(addr & ~0x7)-0x80000000,wdata,wmask);
  if((addr& ~0x7ull) == 0xa00003f8){
      //printf("uart\n");
      printf("%c",(char)wdata);
      is_skip_ref=1;
      //is_skip_ref=1;
      return;
  }
  
  long long *p=&wdata;
  uint8_t *temp=(uint8_t *)p;
  int i=0;
  unsigned char loop= (unsigned char) wmask;
  //printf("%llx\n",*(long long *)(mem+(addr & ~0x7)-0x80000000));
  while(loop!=0){
      if(loop & 1){
      //printf("here%x\n",loop);
          if((((addr & ~0x7ull)-RESET_VECTOR+i)>MAX_MEM) ) assert(0);
          memcpy(mem+(addr& ~0x7ull)-RESET_VECTOR+i,temp,sizeof(uint8_t));
          //printf("%x\n",*temp);
      }
      //printf("%d  %x  \n",i,loop);
      temp++;
      i++;
      loop=loop>>1;
  }
  if(mtrace) printf("WRITE--- ADDR:  %016llx  DATA:  %016llx  MASK:  %x\n",addr,wdata,(uint8_t)wmask);
  
}

