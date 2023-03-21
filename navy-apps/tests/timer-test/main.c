#include <stdio.h>
#include <assert.h>
#include <sys/time.h>

int main(){
    
    struct timeval tv;
    struct timezone tz;
    int times=1;
    //printf("sadf\n");
    while(1){
        do{
            //printf("sadf\n");
            gettimeofday(&tv,&tz);
            //printf("sadf %ld\n",tv.tv_usec);
        }while((tv.tv_usec) / 500000 < times);
        printf("loop in %d times\n",times++);
    }
    
    return 0;
}
