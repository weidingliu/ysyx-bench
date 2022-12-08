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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <signal.h>


// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";
//static int point=0;

static uint32_t choose(uint32_t n){
return rand()%n;
}

static void gen_num(){
    uint32_t num=rand()%100;
    
    char temp[10]={};
    int i=0;
    //printf("%d\n",num);
    while(num==0 && buf[strlen(buf)]=='/'){
        num=rand()%100000;
    }
    temp[i++]=(char) (num%10) + '0';
    num /= 10;
    while(num!=0){
        temp[i++]=(char) (num % 10) +'0';
        num /= 10;
    }
    for (int j=i-1;j>=0;j--){
        buf[strlen(buf)]=temp[j];
    }
    
}
static void gen(char p){
    buf[strlen(buf)]=p;
    
}

static void gen_rand_op(){
    switch(choose(4)){
        case 0:{
            gen('+');
            break;
        }
        case 1:{
            gen('-');
            break;
        }
        case 2:{
            gen('*');
            break;
        }
        case 3:{
            gen('/');
            break;
            
        }
    }  
}

static void gen_rand_expr() {
  switch(choose(3)){
      case 0: gen_num(); break;
      case 1: gen('('); gen_rand_expr(); gen(')'); break;
      default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
  }
  //printf("%s\n",buf);
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    memset(buf,'\0',65536);
    //point=0;
    //printf("artraedt\n");
    gen_rand_expr();
    
    //printf("%s\n",buf);
    
    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    int o=fscanf(fp, "%d", &result);
    
    pclose(fp);
    o=o;
    signal(SIGFPE,SIG_IGN);
    printf("%u %s\n", result, buf);
  }
  
  return 0;
}
