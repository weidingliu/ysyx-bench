/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>
#include <trace.h>
#include <common.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

#ifdef CONFIG_CACHE
void mem_read(uintptr_t block_num, uint8_t *buf);
void mem_write(uintptr_t block_num, const uint8_t *buf);

uint32_t cache_read(uintptr_t addr);
void cache_write(uintptr_t addr, uint32_t data, uint32_t wmask);
void init_cache(int total_size_width, int associativity_width);
#endif

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret =0;
  #if defined (CONFIG_CACHE)
      if(len != 8){
          switch(len){
              case 1:{
                  switch(addr & 0x3ull){
                      case 0:{
                            word_t temp = cache_read(addr);
                            ret = temp;
                            break;
                      }
                      case 1:{
                            word_t temp = cache_read(addr);
                            ret = (temp >> 8);
                            break;
                      }
                      case 2:{
                            word_t temp = cache_read(addr);
                            ret = (temp >> 16);
                            break;
                      }
                      case 3:{
                            word_t temp = cache_read(addr);
                            ret = (temp >> 24);
                            break;
                      }
                  }
                  break;
              }
              case 2:{
                  switch(addr & 0x3ull){
                      case 0:{
                          word_t temp = cache_read(addr);
                          ret = (temp);
                          break;
                      }

                      case 2:{
                          word_t temp = cache_read(addr);
                          ret = (temp >> 16);
                          break;
                      }
                      break;
              }
              break;
          
          }
          case 4:{
                  ret = cache_read(addr);
                  break;
              }
        }
      }
      else {
          word_t temp = cache_read(addr);
          word_t temp1 = cache_read(addr+4);
          ret = (temp1 << 32) + temp;
      }
      
  #else
      ret = host_read(guest_to_host(addr), len);
  #endif
  //printf("%016lx\n",host_read(guest_to_host(addr), len));
  #ifdef CONFIG_MTRACE
    printf("-->READ  Address: 0x%016x  Len: %d  DATA: 0x%016lx\n",addr,len,ret);
  #endif
  
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  #if defined (CONFIG_CACHE)
      if(len != 8){
          switch(len){
              case 1:{
                  switch(addr & 0x3ull){
                      case 0:{
                            cache_write(addr,(uint32_t)data,0x000000ff);
                            break;
                      }
                      case 1:{
                            cache_write(addr,(uint32_t)(data<<8),0x0000ff00);
                            break;
                      }
                      case 2:{
                            cache_write(addr,(uint32_t)(data<<16),0x00ff0000);
                            break;
                      }
                      case 3:{
                            cache_write(addr,(uint32_t)(data<<24),0xff000000);
                            break;
                      }
                  }
                  break;
              }
              case 2:{
                  switch(addr & 0x3ull){
                      case 0:{
                          cache_write(addr,(uint32_t)data,0x0000ffff);
                          break;
                      }

                      case 2:{
                          cache_write(addr,(uint32_t)(data << 16),0xffff0000);
                          break;
                      }
              }
              break;
              
          }
          case 4:{
                  cache_write(addr,(uint32_t)data,-1);
                  break;
              }
          
       }
      }
      else {
          uint32_t temp = (uint32_t) data;
          uint32_t temp1 = (uint32_t) (data >> 32);
          cache_write(addr,temp,-1);
          cache_write(addr+4,temp1,-1);
      }
      
  #else 
      host_write(guest_to_host(addr), len, data);
  #endif
  //printf("%08x    %08x\n",*(uint32_t *)guest_to_host(addr),addr);
  #ifdef CONFIG_MTRACE
    printf("-->WRITE  Address: 0x%016x  Len: %d  DATA: 0x%lx\n", addr, len, data);
  #endif
 
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}
#ifdef CONFIG_CACHE
void mem_read(uintptr_t block_num, uint8_t *buf){
    memcpy(buf, pmem + (block_num << BLOCK_WIDTH) - CONFIG_MBASE, BLOCK_SIZE);
}
void mem_write(uintptr_t block_num, const uint8_t *buf){
    memcpy(pmem + (block_num << BLOCK_WIDTH) - CONFIG_MBASE, buf, BLOCK_SIZE);
}
#endif


void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif
#ifdef CONFIG_CACHE
    init_cache(14, 2);
#endif 
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}
