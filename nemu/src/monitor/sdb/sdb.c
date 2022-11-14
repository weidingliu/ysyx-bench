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

#include <memory/paddr.h>//////
#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

uint32_t atoi32_t(char *arg){
    uint32_t temp=0x0;
    for (int i=2;i<strlen(arg);i++){
        if(arg[i]>= '0' && arg[i] <= '9'){
            temp=temp*16+ arg[i]-'0';
        }
        else if(arg[i]>= 'a' && arg[i] <= 'f'){
            temp=temp*16+ arg[i]-'a'+10;
        }
        else if(arg[i]>= 'A' && arg[i] <= 'F'){
            temp=temp*16+ arg[i]-'A'+10;
        }
        //printf("%d\n",temp);
        
    }
    return temp;
}

uint64_t atoi64_t(char *arrTmp)
{
int len =0;
int i=0;
int j =0;
uint64_t nTmpRes =0;
uint64_t ntmp10=1;
if (arrTmp == NULL)
{
	return 0;
}
len=strlen(arrTmp);
 
for (i =len-1 ; i >=0;i--)
{
	ntmp10 =1;
	for (j=1;j<(len -i); j++)
	{
		ntmp10 = ntmp10*10;
	}
	nTmpRes = nTmpRes+(arrTmp[i]-48)*ntmp10;
}
return nTmpRes;
}
static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args);

static int cmd_info(char *args);

static int cmd_x(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "si [N] N step execute", cmd_si },
  { "info", "info SUBCMD display reg state or watchdog info",  cmd_info},
  { "x", "x [N] EXPR ,Hexadecimal output N byte in memory, EXPR is address", cmd_x },
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static int cmd_si(char *args){
    //cpu_exec(n);
    char *arg = strtok(NULL, " ");
    if (arg == NULL){
        cpu_exec(1);
        //printf("1\n");
    }
    else {
    	uint64_t si_step=atoi64_t(arg);
    	cpu_exec(si_step);
    	//printf("%lu\n",si_step);
        //printf("%s\n",arg);
    }
    
    return 0;
}

static int cmd_info(char *args){
	char *arg = strtok(NULL, " ");
	if(arg == NULL){
	    printf("need parameter!\n");
	    return 0;
	}
	else if(strcmp(arg, "r")==0){
	    isa_reg_display();
	    return 0;
	}
	else if(strcmp(arg, "w")==0){
	     printf("Not accomplish!\n");
	     return 0;
	}
	else{
	    printf("Illegal parameter!\n");
	    return 0;
	}
	return 0;
}

static int cmd_x(char *args){
    char *arg = strtok(NULL, " ");
    if(arg == NULL ){
        printf("Illegal parameter!\n");
        return 0;
    }
    else{
        uint64_t mem_len=atoi64_t(arg);
        if(mem_len==0){
            printf("Illegal parameter[%ld]!\n",mem_len);
            return 0;
        }
        else{
            char *addr = strtok(NULL, " ");
            if(addr == NULL){
                printf("Illegal parameter address!\n");
                return 0;
                
            }
            //printf("%s\n",addr);
            uint32_t temp_addr=atoi32_t(addr);
            
            //printf("0x%08x",temp);
            //char *tem = strtok(NULL,"x");
            //char* tem=addr[2];
            //printf("%s\n",tem);
            
            //printf("%ld\n",atoi64_t(addr[0]));
            /*uint64_t o=80000000;
            word_t out=paddr_read(o,4);
            printf("0x%08lx",out);*/
            for (int i =0; i<mem_len;i++){
                word_t out=paddr_read(temp_addr,4);
                printf("address %08x : ",temp_addr);
                printf("0x%08lx\n",out);
                temp_addr=temp_addr+0x4;
            }
        }
    }
    /*word_t out=paddr_read(0x80000000,4);
    printf("0x%08lx",out);*/
    return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
