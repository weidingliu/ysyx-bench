#include "trp.h"


int ans[]={
0,126322567,2147483647,-2147483648,-2147483647,252645135,126322567,-1
};
char buffer[128];

char *real_buff[]={
    "0","126322567","2147483647","-2147483648","-2147483647","252645135","126322567","-1"
};/*
int main(){
    for(int i=0;i<8;i++){
        sprintf(buffer,"%d",ans[i]);
        //printf("\"%s\",",buffer);
        assert(strcmp(buffer,real_buff[i])==0);
    }
    
}*/
