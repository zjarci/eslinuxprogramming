#include <stdio.h>
static int count = 5;

void func_count(){

    while(count < 10){
        printf("%s: count = %d \n", __FUNCTION__, count) ;
        count++;
    }
}
