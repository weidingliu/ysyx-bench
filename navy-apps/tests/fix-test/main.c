#include <stdio.h>
#include <assert.h>
#include <fixedptc.h>
#include <limits.h>


int main(){
    
    fixedpt a = fixedpt_rconst(1.2);
    fixedpt b = fixedpt_fromint(10);
    int c=0;
    int d =2;
    assert(fixedpt_toint(fixedpt_ceil(a)) ==2);
    assert(fixedpt_toint(fixedpt_ceil(b)) ==10);
    assert(fixedpt_toint(fixedpt_ceil(fixedpt_fromint(c))) ==0);
    assert(fixedpt_toint(fixedpt_ceil(fixedpt_fromint(d))) ==2);
    
    printf("PASS!\n");
    return 0;
}
