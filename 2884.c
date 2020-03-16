#include<stdio.h>
#pragma warning(disable:4996)
int main(void){
    int hour, minute;
    scanf("%d %d", &hour, &minute);
    
    if(minute < 45){
        hour--;
        if(hour < 0) hour = 23;
        printf("%d %d\n", hour, minute + 15);
    }
    else if(minute >= 45) printf("%d %d\n", hour, minute - 45);
    return 0;
}