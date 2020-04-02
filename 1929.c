#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
int num[1000000]={0, };

void getPrime(int start, int last){
    for(int i = 1; i <= last; i++){
        if(i == 1) num[i] = 0;
        else num[i] = i;
    }

    int sqrLast = (int)sqrt(last);
    for(int i = 0; i <= sqrLast; i++){
        if(num[i] == 0) continue;
        for(int j = i*2; j <= last; j+=i) num[j] = 0;
    }

    for(int i = start; i <= last; i++){
        if(num[i] != 0) printf("%d\n", num[i]);
    }
}    
int main(void){
    
    int start, last;
    scanf("%d %d", &start, &last);
    getPrime(start, last);
    return 0;
}