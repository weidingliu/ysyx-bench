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

#include "sdb.h"

#define NR_WP 32
/*
typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  
  int value;
  char exp[100];

} WP;*/

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].value = 0;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
void new_wp(word_t value,char *argv){
    WP *temp;
    if(free_==NULL){
        printf("Don't have free watchpoint!!");
        assert(0);
    }
    else{
        temp=free_;
        free_=free_->next;
        
        temp->next=head;
        head=temp;
        
        head->value=value;
        strncpy(head->exp,argv,strlen(argv));
    }
    return;
}

void free_wp(WP *wp){
    WP *p=NULL;
    WP *q=head;
    while(q!=NULL){
        if(q->NO==wp->NO){
            p->next=q->next;
            wp->next=free_;
            wp->value=0;
            memset(wp->exp,0x00,strlen(wp->exp));
            free_=wp;
            return;
        }
        p=q;
        q=q->next;
    }
    
}

bool check_watchpoint(){
    bool success=true;
    WP *q=head;
    bool *s;
    bool x=true;
    s=&x;
    while(q!=NULL){
        word_t out=expr(q->exp,s);
        if(out!= q->value){
            success=false;
            printf("watchpoint change from %d to %ld\n",q->value,out);
        }
    }
    return success;
}



