#include<stdio.h>
#pragma warning(disable:4996)
int num[1000000];
int main(void){
    
    int start, last;
    scanf("%d %d", &start, &last);

    for(int i = 2; i <= last; i++){
        if(!num[i]){
            for(int j = i+1; j*2 < last; j+=i){
                num[j] = 1;
            }
        }
        if(i >= start && num[i] == 0) printf("%d\n", i);
    }
    return 0;
}