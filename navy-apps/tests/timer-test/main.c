#include <stdio.h>
#include <assert.h>
#include <sys/time.h>
#include <SDL.h>

int main(){
    
    SDL_Init(0);
    SDL_Surface src;
    SDL_SetPalette(src,SDL_LOGPAL | SDL_PHYSPAL, rgPalette, 0, 256)
    //SDL_FillRect();
    
    
    /*struct timeval tv;
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
    }*/
    SDL_Quit();
    return 0;
}
