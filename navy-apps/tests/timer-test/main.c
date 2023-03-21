#include <stdio.h>
#include <assert.h>
#include <sys/time.h>

int main(){
    
    struct timeval tv;
    struct timezone tz;
    int times=0;
    printf("sadf\n");
    while(1){
        do{
            gettimeofday(&tv,&tz);
            printf("sadf\n");
        }while(tv.tv_usec % 500000 !=0);
        printf("loop in %d times\n",times++);
    }
    
    return 0;
}
