#include <cstdio>
#include <cstdint>
#include <cstring>
#include <cassert>
#include <tb.h>
/*#define MAX_MEM 0x2000000



uint8_t pmem[MAX_MEM];
*/
extern "C" void pmem_read(long long addr, __attribute__((unused)) long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  //printf("------%llx\n",addr);
  long long temp;
  memcpy(&temp,(mem+(addr & ~0x7)),sizeof(temp));
  rdata=&temp;
  
}
extern "C" void pmem_write(long long addr, long long wdata, char wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  printf("------%llx,%llx,%x\n",(addr & ~0x7)-0x80000000,wdata,wmask);
  
  long long *p=&wdata;
  uint8_t *temp=(uint8_t *)p;
  int i=0;
  unsigned int loop= (unsigned int) wmask;
  //printf("%llx\n",*(long long *)(mem+(addr & ~0x7)-0x80000000));
  while(loop!=0){
      if(wmask & 1){
      //printf("here%x\n",loop);
          if((((addr & ~0x7)-0x80000000+i)>MAX_MEM) ||(((addr & ~0x7)-0x80000000+i)<0) ) assert(0);
          memcpy(mem+(addr & ~0x7)-0x80000000+i,temp,sizeof(uint8_t));
      }
      temp++;
      i++;
      loop=loop>>1;
  }
  //printf("%llx\n",*(long long *)(mem+(addr & ~0x7)-0x80000000));
  
}

