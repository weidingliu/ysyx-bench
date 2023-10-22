#include "trp.h"


int ans1[]={
0,126322567,2147483647,-2147483648,-2147483647,252645135,126322567,-1
};

int ans2[]={
0x0,0x7878787,0x7fffffff,0x80000000,0x80000001,0xf0f0f0f,0x7878787,0xffffffff
};

int main(){

    for(int i=0;i<8;i++){
        //printf("%d\n",i);
        printf("%3d\n",ans1[i]);
        //printf("\"%s\",",buffer);
        //assert(strcmp(buffer,real_buff[i])==0);
    }
}
