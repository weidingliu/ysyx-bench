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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,NUMB,HEXNUB,REGF,NOEQUAL, AND, DEREF,//'+','-','/','(',')',//DEREF single op

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"\\-", '-'},
  {"\\/", '/'},
  {"\\(", '('},
  {"\\)", ')'},
  {"\\*", '*'},
  {"0x[0-9]+",HEXNUB},
  {"[0-9]+", NUMB},
  {"\\$[a-z0-9]+", REGF},
  {"\\!\\=", NOEQUAL},

  {"\\&\\&", AND},
  
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[1000] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;
  
  
  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        if(substr_len>32){
                  printf("expression is too long!!");
                  return false;
         }
        //printf("%d %d\n",rules[i].token_type,EQUAL);
        switch (rules[i].token_type) {
          case TK_NOTYPE:{  
              break;
          }
          case '+':{
              memset(tokens[nr_token].str,0x00,32);//initialize
              strcpy(tokens[nr_token].str,"+");
              tokens[nr_token++].type=rules[i].token_type;
              
              break;
              }
          case '-':{
              memset(tokens[nr_token].str,0x00,32);//initialize
              strcpy(tokens[nr_token].str,"-");
              tokens[nr_token++].type=rules[i].token_type;
              
              break;
              }
          case '/':{
              memset(tokens[nr_token].str,0x00,32);//initialize
              strcpy(tokens[nr_token].str,"/");
              tokens[nr_token++].type=rules[i].token_type;
              
              break;
              }
          case '(':{
              memset(tokens[nr_token].str,0x00,32);//initialize
              strcpy(tokens[nr_token].str,"(");
              tokens[nr_token++].type=rules[i].token_type;
              
              break;
              }
              
          case ')':{
              memset(tokens[nr_token].str,0x00,32);//initialize
              strcpy(tokens[nr_token].str,")");
              tokens[nr_token++].type=rules[i].token_type;
              
              break;
              }
          case '*':{
              memset(tokens[nr_token].str,0x00,32);//initialize
              strcpy(tokens[nr_token].str,"*");
              tokens[nr_token++].type=rules[i].token_type;
              
              break;
              }
          case NUMB:{
              memset(tokens[nr_token].str,0x00,32);//initialize
              strncpy(tokens[nr_token].str,substr_start,substr_len);
              tokens[nr_token++].type=rules[i].token_type;
              break;
              
              }
          case REGF:{
              memset(tokens[nr_token].str,0x00,32);//initialize
              strncpy(tokens[nr_token].str,substr_start,substr_len);
              tokens[nr_token++].type=rules[i].token_type;
              break;
          }
          case HEXNUB:{
              memset(tokens[nr_token].str,0x00,32);//initialize
              strncpy(tokens[nr_token].str,substr_start,substr_len);
              tokens[nr_token++].type=rules[i].token_type;
              break;
          }
          case NOEQUAL:{
              memset(tokens[nr_token].str,0x00,32);//initialize
              strncpy(tokens[nr_token].str,substr_start,substr_len);
              tokens[nr_token++].type=rules[i].token_type;
              break;
          }
          case TK_EQ:{
              memset(tokens[nr_token].str,0x00,32);//initialize
              strncpy(tokens[nr_token].str,substr_start,substr_len);
              tokens[nr_token++].type=rules[i].token_type;
              //printf("sdaaa\n");
              break;
          }
          case AND:{
              memset(tokens[nr_token].str,0x00,32);//initialize
              strncpy(tokens[nr_token].str,substr_start,substr_len);
              tokens[nr_token++].type=rules[i].token_type;
              break;
          }
          default: TODO();
        }
        //printf("%d\n",nr_token);
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}
bool check_parentheses(int p,int q){
    char stack[1000] __attribute__((unused));
    memset(stack,0x00,1000);//initialize
    int pointer __attribute__((unused)) =0;
    bool flag=true;//
    if((!strcmp(tokens[p].str,"(") && strcmp(tokens[q].str,")"))||(strcmp(tokens[p].str,"(") && !strcmp(tokens[q].str,")"))){
            flag=false;
        }
    if(strcmp(tokens[p].str,"(") && strcmp(tokens[q].str,")")){
            flag=false;
    }
    
    /*int tp=p;
    tp=tp;
    while(tp<=q){
        printf("%s",tokens[tp++].str);
    }
    printf("\n");*/
    
    while(q>=p&&strcmp(tokens[q].str,")")){
        
        /*if(q<=0)
        {
            printf("Bad expression!\n");
            assert(0);
            return false;
        }*/
        if(!strcmp(tokens[q].str,"(")){
            printf("Bad expression1!\n");
            assert(0);
            return false;
        }
        q--;
    }
    if(p>q){
        //printf("false\n");
        return false;
    }
    stack[pointer++]=tokens[q].str[0];
    q--;
    
    while (q>=p){
        if(!strcmp(tokens[q].str,")")){
           stack[pointer++]=tokens[q].str[0];
        }
        if(!strcmp(tokens[q].str,"(")){
            //stack[pointer]=0x00;
            pointer--;
        }
        if(pointer==0 && q!=p){
            flag=false;
        }
        //printf("%s %d\n",stack,pointer);
        if(pointer<0){
            
            printf("Bad expression2!\n");
            assert(0);
            return false;
        }
        q--;
        
    }
    
    if(pointer==0){
        if(flag){
            //printf("true\n");
            return true;
        }
        else{
            //printf("false\n");
            return false;
        }
        
    }
    else {
        printf("Bad expression3!\n");
        assert(0);
        return false;
    }
return true;
}
int find_op(int p,int q){
    int pos=-1;
    int op_type=0;
    int flag=0;
    bool pre_isop=false;
    
    while(q>=p){
        if(!strcmp(tokens[q].str,")")){
            flag++;
            q--;
            continue;
        }
        if(!strcmp(tokens[q].str,"(")){
            flag--;
            q--;
            continue;
        }
        if(tokens[q].type==NUMB || tokens[q].type==HEXNUB || tokens[q].type==REGF){
            q--;
            if(pre_isop){
                pre_isop=false;
            }
            continue;
        }
        if(flag>0){
            q--;
            continue;
        }
        /*if(){
        
        }*/
        switch(tokens[q].type){
            case '+':{
                
                if(pos==-1){
                    pos=q;
                    op_type='+';
                }
                if(op_type=='*'||op_type=='/'){
                    pos=q;
                    op_type='+';
                }
                if(pre_isop){
                    pos=q;
                    op_type='+';
                    pre_isop=false;
                }
                break;
                
            }
            case '-':{
                if(pos==-1){
                    pos=q;
                    op_type='-';
                }
                if(op_type=='*' || op_type=='/'){
                    pos=q;
                    op_type='-';
                }
                pre_isop=true;
                break;
            }
            case '*':{
                if(pos==-1){
                    pos=q;
                    op_type='*';
                }
                if(pre_isop){
                    pos=q;
                    op_type='*';
                    pre_isop=false;
                }
                break;
            }
            case '/':{
                if(pos==-1){
                    pos=q;
                    op_type='/';
                }
                if(pre_isop){
                    pos=q;
                    op_type='/';
                    pre_isop=false;
                }
                break;
            }
            case NOEQUAL:{
                if(pos==-1){
                    pos=q;
                    op_type=NOEQUAL;
                }
                if(pre_isop){
                    pos=q;
                    op_type=NOEQUAL;
                    pre_isop=false;
                }
                break;
            }
            case TK_EQ:{
                if(pos==-1){
                    pos=q;
                    op_type=TK_EQ;
                }
                if(pre_isop){
                    pos=q;
                    op_type=TK_EQ;
                    pre_isop=false;
                }
                break;
            }
            case AND:{
                if(pos==-1){
                    pos=q;
                    op_type=AND;
                }
                if(pre_isop){
                    pos=q;
                    op_type=AND;
                    pre_isop=false;
                }
                break;
            }
            default:assert(0);
        
        }
        q--;
    }
    if(pos==-1){
        assert(0);
        return 0;
    }
    return pos;
}

word_t eval(int p,int q){
    //printf("%d %d %d\n",nr_token,p,q);
    if(p>q){
        printf("Bad expression!\n");
        return 0;
    }
    else if(p==q){
        word_t out=0;
        //const char reg[10];
        bool *success;
        bool x=true;
        success=&x;
        //printf("%ld\n",strlen(tokens[p].str));
        
        switch(tokens[p].type){
            case(NUMB):{
                for(int i=0;i<strlen(tokens[p].str);i++){
                    out=out*10+tokens[p].str[i]-'0';
                }
                break;
            }
            case(HEXNUB):{
                for(int i=2;i<strlen(tokens[p].str);i++){
                    out=out*16+tokens[p].str[i]-'0';
                }
                break;
            }
            case(REGF):{
                char regname[10] __attribute__((unused));
                
                strncpy(regname,tokens[p].str+1,strlen(tokens[p].str)-1);
                
                out=isa_reg_str2val(regname,success);
                //printf("%d\n",*success);
                if(! *success){
                    printf("bad reg name!!\n");
                    assert(0);
                }
                break;
            }
            default: assert(0);
        
        }
        
        //printf("%ld\n",out);
        return out;
    }
    else if(p+1==q){
        word_t out=0;
        if(tokens[p].type==DEREF){
            word_t addr=0;
            for(int i=0;i<strlen(tokens[q].str);i++){
                addr=addr*10+tokens[q].str[i]-'0';
            }
            out=paddr_read(addr,4);
            return out;
        }
        else {
            
            for(int i=0;i<strlen(tokens[q].str);i++){
                out=out*10+tokens[q].str[i]-'0';
            }
            return -out;
        }
        
    }
    else if(check_parentheses(p, q) == true){
        /* The expression is surrounded by a matched pair of parentheses.
         * If that is the case, just throw away the parentheses.
         */
        return eval(p + 1, q - 1);
    }
    else {
    word_t op=find_op(p,q);
    
    
    word_t val1 = eval(p, op - 1);
    word_t val2 = eval(op + 1, q);
    val1=val1;
    val2=val2;
    //printf("%ld %ld\n",val1,val2);
    //printf("%ld\n",op);
    switch (tokens[op].type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': {
          //printf("%ld %ld",val1,val2);
          if(val2==0){
              printf("div 0!!");
              assert(0);
          }
          return val1 / val2;
      
      }
      case NOEQUAL: return (val1!=val2)? 1:0;
      case TK_EQ: return (val1==val2)? 1:0;
      case AND: return val1 && val2;
      default: assert(0);
    }
   }

}

uint64_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  for (int i = 0; i < nr_token; i ++) {
  if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == '+' || tokens[i - 1].type == '-' || tokens[i - 1].type == '*' || tokens[i - 1].type == '/' || 
      tokens[i - 1].type == NOEQUAL || tokens[i - 1].type == TK_EQ || tokens[i - 1].type == AND 
      ) ) {
    tokens[i].type = DEREF;
  }
  }
  /* TODO: Insert codes to evaluate the expression. */
  //TODO();
  
  //printf("%d\n",check_parentheses(0,nr_token-1));
  uint64_t out=eval(0,nr_token-1);
  
  //check_parentheses(0,nr_token-1);
  /*for (int i=0;i<nr_token;i++){
      printf("%s ",tokens[i].str);
  }
  printf("\n");*/
  //printf("%ld\n",out);
  
  
  return out;
}
