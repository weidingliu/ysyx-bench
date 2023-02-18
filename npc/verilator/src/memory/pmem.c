
#include <cstdint>
#include <cstring>
#define MAX_MEM 1024



uint8_t pmem[MAX_MEM];

extern "C" void pmem_read(long long addr, __attribute__((unused)) long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  long long temp;
  memcpy(&temp,(pmem+(addr & ~0x7)),sizeof(temp));
  rdata=&temp;
}
extern "C" void pmem_write(long long addr, long long wdata, char wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  long long *p=&wdata;
  uint8_t *temp=(uint8_t *)p;
  int i=0;
  while(wmask!=0){
      if(wmask & ~1){
          memcpy(pmem+(addr & ~0x7)+i,temp,sizeof(uint8_t));
      }
      temp++;
      i++;
      wmask>>1;
  }
  
  
}

