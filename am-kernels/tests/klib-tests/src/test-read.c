#include "trp.h"

/*
int ans[]={
0,126322567,2147483647,-2147483648,-2147483647,252645135,126322567,-1
};
*/
void test_second(){
    char *ans[]={
        "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
	"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab",
	"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
	", World!\n",
	"Hello, World!\n",
	"#####",
	"sdf rgfhhdfs dfsg s    fdsg"
};
int real[]={38,38,38,9,14,5,27
};

int temp[]={0,-1,0,53,25,62,-18,1,0,1,53,25,62,
-18,0,-1,0,53,25,62,-18,-53,-53,-53,0,-28,9,-71,-25,
-25,-25,28,0,37,-43,-62,-62,-62,-9,-37,0,-80,18,18,18,71,43,80,0
    
};

for(int i=0;i<7;i++){
        assert(strlen(ans[i])==real[i]);
    }
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            assert(strcmp(ans[i],ans[j])==temp[i*7+j]);
        }
    
        //assert(strlen(ans[i])==real[i]);
    }
    assert(strcmp(ans[0],ans[2])==0);
    assert(strcmp(ans[0],ans[1])<0);
    return;
}

/*
int main(){
    
    
    return 0;
}*/




