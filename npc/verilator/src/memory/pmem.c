#define MAX_MEM 1024

uint8_t pmem[MAX_MEM];

extern "C" void pmem_read(long long addr, long long *rdata) {
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
  switch(wmask){
      case(0x0){
       break;
      }
      case(0x1){
        memcpy(pmem+(addr & ~0x7),*(uint8_t *)p,sizeof(uint8_t));
        break;
      }
      case(0x2){
        memcpy(pmem+(addr & ~0x7),*((uint8_t *)p+1),sizeof(uint8_t));
        break;
      }
      case(0x3){
        memcpy(pmem+(addr & ~0x7),*((uint16_t *)p),sizeof(uint16_t));
        break;
      }
      case(0x4){
        memcpy(pmem+(addr & ~0x7),*((uint8_t *)p+2),sizeof(uint8_t));
        break;
      }
      /*case(0x5){
        
        break;
      }*/
      case(0x6){
        memcpy(pmem+(addr & ~0x7),*((uint16_t *)p+1),sizeof(uint16_t));
        break;
      }
      case(0x7){
        memcpy(pmem+(addr & ~0x7),*(uint32_t *)p,sizeof(uint32_t));
        break;
      }
      case(0x8){
          memcpy(pmem+(addr & ~0x7),*((uint8_t *)p+3),sizeof(uint8_t));
          break;
      }
  
  }
}

