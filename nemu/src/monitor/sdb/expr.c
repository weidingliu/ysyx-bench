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

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,NUMB,//'+','-','/','(',')',

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
  {"[0-9]+", NUMB},
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

static Token tokens[32] __attribute__((used)) = {};
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
    char stack[32];
    int pointer=0;
    bool flag=true;//
    if((!strcmp(tokens[p].str,"(") && strcmp(tokens[q].str,")"))||(strcmp(tokens[p].str,"(") && !strcmp(tokens[q].str,")"))){//have problem
            flag=false;
        }
    if(strcmp(tokens[p].str,"(") && strcmp(tokens[q].str,")")){
            flag=false;
    }
    
    while(strcmp(tokens[q].str,")")){
        
        /*if(q<=0)
        {
            printf("Bad expression!\n");
            assert(0);
            return false;
        }*/
        if(strcmp(tokens[q].str,"(")){
            printf("Bad expression!\n");
            assert(0);
            return false;
        }
        q--;
    }
    stack[pointer++]=tokens[q].str[0];
    q--;
    
    while (q>=p){
        if(!strcmp(tokens[q].str,")")){
           stack[pointer++]=tokens[q].str[0];
        }
        if(!strcmp(tokens[q].str,"(")){
            pointer--;
        }
        if(pointer==0 && q!=p){
            flag=false;
        }
        q--;
    }
    printf("%s %d\n",stack,pointer);
    if(pointer==0){
        if(flag){
            printf("true\n");
            return true;
        }
        else{
            printf("false\n");
            return false;
        }
        
    }
    else {
        printf("Bad expression!\n");
        assert(0);
        return false;
    }
return true;
}

word_t evaluate(int p,int q){
    if(p>q){
        printf("Bad expression!\n");
        return 0;
    }
    else if(p==q){
        
        return 0;
    }
    else if(check_parentheses(p, q) == true){
        /* The expression is surrounded by a matched pair of parentheses.
         * If that is the case, just throw away the parentheses.
         */
        return evaluate(p + 1, q - 1);
    }
    else {
  /*  //op = the position of 主运算符 in the token expression;
    op=1;
    word_t val1 = evaluate(p, op - 1);
    word_t val2 = evaluate(op + 1, q);

    switch (op_type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': return val1 / val2;
      default: assert(0);*/
    }

return 0;
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  //TODO();
  //evaluate(1,0);
  check_parentheses(0,nr_token-1);
  for (int i=0;i<nr_token;i++){
      printf("%s ",tokens[i].str);
  }
  printf("\n");
  return 0;
}
