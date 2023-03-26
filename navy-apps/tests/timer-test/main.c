#include <stdio.h>
#include <assert.h>
#include <sys/time.h>
#include <SDL.h>

int main(){
    
    SDL_Init(0);
    uint32_t next=SDL_GetTicks();
    uint32_t current=SDL_GetTicks();
    
    while(1){
        printf("sdafasdfg3333 %u %u\n",current,next);
        do
	{
	  current = SDL_GetTicks();
	  //UpdateEvents();
	  SDL_Delay(1);
	  //printf("sdafasdfg3333 %d %d\n",uiCurrentTime,uiNextFrameTime);
	} while (current < next);
      //printf("sdafasdfg3333 %u %u\n",uiCurrentTime,uiNextFrameTime);
      if ((int)(current - next) > 1000)
	{
	  next = current + 1000 / 60;
	}
      else
	{
	  next += 1000 / 60;
	}
    }
    
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
    
    return 0;
}
