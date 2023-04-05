#include <tb.h>
#include <device.h>
//#include <cstdio>
#include <assert.h>





void write_device(long long addr,  long long data,char wmask){
  if(addr>=FB_ADDR && addr<=FB_ADDR+400*300*4){
        //printf(" %x\n",FB_ADDR+400*300);
        unsigned char loop= (unsigned char) wmask;
        int i=0;
        long long *p=&data;
        uint8_t *temp=(uint8_t *)p;
        while(loop!=0){
            if(loop & 1){
                *((uint8_t *)vmem+addr-FB_ADDR+i)=*temp;
                //printf("%x %x\n",*((uint8_t *)vmem+addr-FB_ADDR+i),*temp);
            }
            temp++;
            i++;
            loop=loop>>1;
        }
        
    }
    else if(addr>=VGACTL_ADDR && addr<=VGACTL_ADDR+8){
        //printf(" %llx  %x %llx\n",addr,wmask,data);
        unsigned char loop= (unsigned char) wmask;
        int i=0;
        long long *p=&data;
        uint8_t *temp=(uint8_t *)p;
        while(loop!=0){
            if(loop & 1){
                *((uint8_t *)vgactl_port_base+addr-VGACTL_ADDR+i)=*temp;
                //printf("%x %x\n",*((uint8_t *)vmem+addr-FB_ADDR+i),*temp);
            }
            temp++;
            i++;
            loop=loop>>1;
        }
    }
    else {printf("%llx\n",addr);assert(0);}
   
}

void read_device(long long addr, long long *rdata){
    if(addr>=VGACTL_ADDR && addr<=VGACTL_ADDR+8){
        *rdata = *(long long *)vgactl_port_base;
    }
    else if(addr>=FB_ADDR && addr<=FB_ADDR+400*300){
        *rdata = *(long long *)((char *)vmem+addr-FB_ADDR);
    }
    else assert(0);
}