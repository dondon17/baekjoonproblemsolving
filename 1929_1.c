#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
int num[1000000];
int main(void){
    
    int start, last;
    scanf("%d %d", &start, &last);
    int sqrtlast = (int)sqrt((double)last);
    if(start == 1) start++;
    num[0] = 0;
    num[1] = 0;
    for(int i = 2; i < last; i++) num[i] = 1;
    for(int i = 2; i <= last; i++){
        for(int j = 2; j <= sqrtlast;j++){
            num[i*j] = 0;
        }
    }
    for(int i = start; i < last; i++){
        if(num[i] != 0) printf("%d\n", i);
    }
    return 0;
}