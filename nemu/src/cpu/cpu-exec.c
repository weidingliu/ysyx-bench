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

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include <trace.h>

#include </home/liuweiding/ysyx-workbench/nemu/src/monitor/sdb/sdb.h>
/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10
#define IRTRACE 32 

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

void device_update();
#ifdef CONFIG_TRACE
static f_link *ftr;
static f_link *tail;
#endif
#ifdef CONFIG_ITRACE
char ibuf[IRTRACE][128];
static uint32_t irbuf_point=0;

static void display_iringbuf(){
    int i=0;
    for(;i<IRTRACE;i++){
        if(i==(irbuf_point+31)%32) printf("-->");
        else printf("   ");

        puts(ibuf[i]);
    }
}
#endif

#ifdef CONFIG_TRACE
static void func_trace(paddr_t pc,Decode *s){//head insert
    uint32_t t __attribute__((unused)) =s->isa.inst.val;
    //printf("%d   %08x  %08x\n",(t & 0b1101111),pc,t);
    
    if((t & 0b1101111) !=0b1101111 && (t & 0b111000001100111)!=0b1100111) return;
    for(int i=0;i<ftrace_point;i++){
        
        //printf("%s\n",funcINFO[i].fun_name);
        if(pc>=funcINFO[i].start && pc<funcINFO[i].start+funcINFO[i].size){
            f_link *temp=(f_link*)malloc(sizeof(f_link));
            
            temp->inst_addr=s->pc;
            temp->dst=&funcINFO[i];
            temp->next=NULL;
            if(ftr==NULL){
                ftr=temp;
                tail=ftr;
            }
            else{
                tail->next=temp;
                tail=tail->next;
            }
            
            //printf("%d\n",tail==ftr);
            //printf("---%08x   %s\n",pc,funcINFO[i].fun_name);
            if((t & 0b1101111) ==0b1101111 ) {temp->type=0;return;}
            if((t & 0b111000000000000)==0) {temp->type=1;return;}
            Assert(0,"bad ftrace!");    
        }
    }
    printf("%s  %x\n",ftr->dst->fun_name,ftr->inst_addr);
}
static void display_ftrace(){

    if(ftr==NULL){ printf("Don't have ftrace!\n");return;}
    int blank_space=0;
    
    while(ftr != NULL){
        printf("0x%x: ",ftr->inst_addr);
        
        if(ftr->type==0){
            int i=blank_space;
            while(i>0){
                 printf(" ");
                 i--;
            }
            
            printf("call ");
            blank_space+=2;
            printf("[%s@0x%x]\n",ftr->dst->fun_name,ftr->dst->start);
        }
        else{
            blank_space-=2;
            if(blank_space<0) blank_space=0;
            int i=blank_space;
            while(i>0){
                 printf(" ");
                 i--;
            }
            printf("ret ");
            
            printf("[%s]\n",ftr->dst->fun_name);
        }
        
        f_link *temp=ftr;
        ftr=ftr->next;
        free(temp);
    }    
    return;
}

#endif
static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  //printf("is here\n");
  //puts(_this->logbuf);
  printf("%d\n",(int) cpu.gpr[15]);
  IFDEF(CONFIG_ITRACE,strcpy(ibuf[irbuf_point],_this->logbuf));
  //puts(ibuf[irbuf_point]);
  IFDEF(CONFIG_ITRACE,irbuf_point=(irbuf_point+1)%IRTRACE);
  //printf("-------------%08x\n",_this->isa.inst.val);
  //printf("----------------%016lx\n",dnpc);
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
 #ifdef CONFIG_WATCHPOINT
      bool flag=true;
      flag=check_watchpoint();
      //printf("is here\n");
      if(!flag){
          nemu_state.state=NEMU_STOP;
      }
  #endif
}


static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;
  
#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  
  //printf("%08x\n", s->isa.inst.val);
  
  
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }

  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  //printf("-----------%d  %ld  %d\n",space_len,s->logbuf + sizeof(s->logbuf) - p,ilen);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
  //printf("cpu------------%lx\n",cpu.csr[5]);
  //if(cpu.csr[5] !=0 ) nemu_state.state = NEMU_ABORT;
  //ibuf[irbuf_point].ch_inst=p;
  //strcpy(ibuf[irbuf_point].ch_inst,q);
  
#endif
}

static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    //printf("----------------%016lx\n",cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    
    IFDEF(CONFIG_TRACE,func_trace(cpu.pc,&s));
    //if(funcINFO[2].start == cpu.pc) printf("%s\n",funcINFO[2].fun_name);
    if (nemu_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;
    
    case NEMU_STOP: break;
    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED):
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
          #ifdef CONFIG_ITRACE
          if(nemu_state.state == NEMU_ABORT || nemu_state.halt_ret != 0) {
              
              display_iringbuf();
              
              }
          #endif
          #ifdef CONFIG_TRACE
          display_ftrace();
          #endif
          
      // fall through
      
    case NEMU_QUIT: statistic();
  }
}
