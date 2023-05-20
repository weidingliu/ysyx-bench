#include <common.h>
#include <inttypes.h>
#include <string.h>

#define exp2(x) (1 << (x))
#define mask_with_len(x) (exp2(x) - 1)

#ifdef CONFIG_CACHE

void mem_read(uintptr_t block_num, uint8_t *buf);
void mem_write(uintptr_t block_num, const uint8_t *buf);

//static uint8_t cache[MEM_SIZE >> BLOCK_WIDTH][1 << BLOCK_WIDTH];
static uint64_t cycle_cnt = 0;
static int associativity = 0;
static uint8_t *Cache_data = NULL;
static int total_size = 0;
static uintptr_t *Tag = NULL;
static bool *valid = NULL;
static bool *dirt = NULL;
static int select_way = 0;
static int way_num = 0;
static uint32_t index_width = 0;

void cycle_increase(int n) { cycle_cnt += n; }

// TODO: implement the following functions

uint32_t cache_read(uintptr_t addr) {
  uintptr_t index = (addr >> BLOCK_WIDTH) & (mask_with_len(index_width));
  uintptr_t offset = (addr & ~0x3ull) & (mask_with_len(BLOCK_WIDTH));
  uintptr_t tag = addr >> (BLOCK_WIDTH + index_width);
  bool hit = false;
  int i=0;
  uint32_t ret = 0;
  //printf("sdfdgg %lx %lx %lx %lx \n",tag,index,offset,addr);
  for(;i<way_num;i++){
  //printf("read :%lx  %d\n",*(Tag+index * way_num + i),*(valid + index * way_num + i));
      if(*(Tag+index * way_num + i) == tag && *(valid + index * way_num + i)){
          hit = true;
          break;
      }
  }
  if(hit){
      ret = *((uint32_t *)(Cache_data + (index*way_num + i) * BLOCK_SIZE ) + (offset >> 2));
  }
  else {
      if(*(dirt + index * way_num + select_way)){
      //write back
          uint8_t *temp=(uint8_t *)malloc(sizeof(uint8_t) * BLOCK_SIZE);
          uintptr_t * temp_tag = (uintptr_t *)malloc(sizeof(uintptr_t));
          memcpy(temp_tag,(Tag+index * way_num + select_way),sizeof(uintptr_t));
          memcpy(temp,Cache_data + (index*way_num + select_way) * BLOCK_SIZE,BLOCK_SIZE);
          uintptr_t write_addr = index + (*temp_tag << index_width);
          
          mem_write(write_addr,temp);
          //read data 
          mem_read((addr >> BLOCK_WIDTH),temp);
          //printf("%lx\n",addr);

          memcpy(Cache_data + (index*way_num + select_way) * BLOCK_SIZE,temp,BLOCK_SIZE);
     /* for(int j=0;j<16;j++){
          printf("%x \n",*((uint32_t *)temp+j));
      }*/
      
          *(valid + index * way_num + select_way) = true;
          memcpy((Tag + index * way_num + select_way),&tag,sizeof(uintptr_t));
          //printf("read : %lx %lx\n",tag,*(Tag + index * way_num + select_way));
         // *(Tag + index * way_num + select_way) = tag;
          ret = *((uint32_t *)(Cache_data + (index*way_num + select_way) * BLOCK_SIZE ) + (offset >> 2));
      }
      else {
          uint8_t *temp=(uint8_t *)malloc(sizeof(uint8_t) * BLOCK_SIZE);
      
          mem_read((addr >> BLOCK_WIDTH),temp);
          memcpy(Cache_data + (index*way_num + select_way) * BLOCK_SIZE,temp,BLOCK_SIZE);
     /* for(int j=0;j<16;j++){
          printf("%x \n",*((uint32_t *)temp+j));
      }*/
      
          *(valid + index * way_num + select_way) = true;
          memcpy((Tag + index * way_num + select_way),&tag,sizeof(uintptr_t));
          //printf("read : %lx %lx\n",tag,*(Tag + index * way_num + select_way));
          //*(Tag + index * way_num + select_way) = tag;
          //printf("%lx  %lx\n",tag,*(Tag + index * way_num + select_way));
          ret = *((uint32_t *)(Cache_data + (index*way_num + select_way) * BLOCK_SIZE ) + (offset >> 2));
      }
     
  }
  select_way = (select_way + 1) % (way_num);
  //printf("read cache -> addr : %lx data %x hit : %d\n",addr,ret,hit);
  /*
  for(i=0;i<way_num;i++){
      printf("read2 :%lx  %d\n",*(Tag+index * way_num + i),*(valid + index * way_num + i));
  }*/
  return ret;
}

void cache_write(uintptr_t addr, uint32_t data, uint32_t wmask) {
  uintptr_t index = (addr >> BLOCK_WIDTH) & (mask_with_len(index_width));
  uintptr_t offset = (addr & ~0x3ull) & (mask_with_len(BLOCK_WIDTH));
  uintptr_t tag = (addr >> (BLOCK_WIDTH + index_width));
  bool hit = false;
  int i=0;
  
 // printf("sdfdgg %lx %lx %lx %lx \n",tag,index,offset,addr);
  //printf("%x\n",wmask);
  for(;i<way_num;i++){
      //printf("write way:%lx  %d\n",*(Tag+index * way_num + i),*(valid + index * way_num + i));
      if(*(Tag+index * way_num + i) == tag && *(valid + index * way_num + i)){
          hit = true;
          break;
      }
  }
  if(hit){
      uint32_t old_data = *((uint32_t *)(Cache_data + (index*way_num + i) * BLOCK_SIZE ) + (offset >> 2));
      uint32_t write_data = (old_data & ~wmask) | (data & wmask);
      memcpy((uint32_t *)(Cache_data + (index*way_num + i) * BLOCK_SIZE ) + (offset >> 2),&write_data,sizeof(uint32_t));
      *(dirt + index * way_num + i) = true;
      
  }
  else{
  
      if(*(dirt + index * way_num + select_way)){
          //write back
          uint8_t *temp=(uint8_t *)malloc(sizeof(uint8_t) * BLOCK_SIZE);
          uintptr_t * temp_tag = (uintptr_t *)malloc(sizeof(uintptr_t));
          memcpy(temp_tag,(Tag+index * way_num + select_way),sizeof(uintptr_t));
          memcpy(temp,Cache_data + (index*way_num + select_way) * BLOCK_SIZE,BLOCK_SIZE);
          uintptr_t write_addr = index + (*temp_tag << index_width);
          mem_write(write_addr,temp);
          //read data 
          mem_read((addr >> BLOCK_WIDTH),temp);
          memcpy(Cache_data + (index*way_num + select_way) * BLOCK_SIZE,temp,BLOCK_SIZE);
          //write data 
          uint32_t old_data = *((uint32_t *)(Cache_data + (index*way_num + select_way) * BLOCK_SIZE ) + (offset >> 2));
          uint32_t write_data = (old_data & ~wmask) | (data & wmask);
          //printf("%lx  %d\n",*(Tag + 1 * way_num),select_way);
          //printf("%x %x %x %x\n",old_data,write_data,data,wmask);
          memcpy((uint32_t *)(Cache_data + (index*way_num + select_way) * BLOCK_SIZE ) + (offset >> 2),&write_data,sizeof(uint32_t));
          
          //printf("%lx  %d %lx\n",*(Tag + 1 * way_num),select_way,*(Tag + index * way_num));
          *(valid + index * way_num + select_way) = true;
          memcpy((Tag + index * way_num + select_way),&tag,sizeof(uintptr_t));
          
          //printf("write1 : %lx %lx\n",tag,*(Tag + index * way_num + select_way));
          //printf("%lx  %d %lx\n",*(Tag + 1 * way_num),select_way,*(Tag + index * way_num));
          //if(tag == 0x4c6) printf("write1 : %lx %lx\n",tag,*(Tag + index * way_num + select_way));
          //*(Tag + index * way_num + select_way) = tag;
          
      }
      else{
          // 
          //printf("dfdfg2\n");
          uint8_t *temp=(uint8_t *)malloc(sizeof(uint8_t) * BLOCK_SIZE);
          mem_read((addr >> BLOCK_WIDTH),temp);
          memcpy(Cache_data + (index*way_num + select_way) * BLOCK_SIZE,temp,BLOCK_SIZE);
          
          uint32_t old_data = *((uint32_t *)(Cache_data + (index*way_num + select_way) * BLOCK_SIZE ) + (offset >> 2));
          uint32_t write_data = (old_data & ~wmask) | (data & wmask);
          memcpy((uint32_t *)(Cache_data + (index*way_num + select_way) * BLOCK_SIZE ) + (offset >> 2),&write_data,sizeof(uint32_t));
          
          *(valid + index * way_num + select_way) = true;
          memcpy((Tag + index * way_num + select_way),&tag,sizeof(uintptr_t));
          //if(tag == 0x4c6) printf("write2 : %lx %lx\n",tag,*(Tag + index * way_num + select_way));
          //*(Tag + index * way_num + select_way) = tag;
          *(dirt + index * way_num + select_way) = true;
      
      }
      //printf("write2 : %lx %lx\n",tag,*(Tag + 1 * way_num));
  }
  select_way = (select_way + 1) % (way_num);
 // printf("write -> addr : %lx data %x wmask: %x hit : %d\n",addr,data,wmask,hit);

}

void init_cache(int total_size_width, int associativity_width) {
    
    uint8_t *cmem = (uint8_t *)malloc(sizeof(uint8_t)*(1 << total_size_width)); 
    uintptr_t *tag_m =  (uintptr_t *)malloc(sizeof(uintptr_t) * (1 << (total_size_width - BLOCK_WIDTH)));
    bool *valid_m = (bool *)malloc(sizeof(bool) * (1 << (total_size_width - BLOCK_WIDTH)));
    bool *dirt_m = (bool *)malloc(sizeof(bool) * (1 << (total_size_width - BLOCK_WIDTH)));
    memset(valid_m,0,sizeof(bool) * (1 << (total_size_width - BLOCK_WIDTH)));
    memset(dirt_m,0,sizeof(bool) * (1 << (total_size_width - BLOCK_WIDTH)));
    memset(tag_m,0,sizeof(uintptr_t) * (1 << (total_size_width - BLOCK_WIDTH)));
    
    
    Cache_data = cmem;
    valid = valid_m;
    Tag = tag_m;
    associativity = associativity_width;
    total_size = total_size_width;
    way_num = 1 << associativity_width;
    index_width = total_size_width - BLOCK_WIDTH - associativity_width;
    dirt = dirt_m;
    //printf("%lx\n",((uintptr_t)(-5)>>2));
   // printf("%d %d %d\n",total_size_width,associativity_width,index_width);
}

void display_statistic(void) {
}
#endif
