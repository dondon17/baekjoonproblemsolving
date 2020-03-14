#include<stdio.h>
#pragma warning(disable:4996)
#define SIZE 10001
int num[SIZE]={1, 1, };

int main(void){
    int n, t;

    for(int i=2; i<SIZE; i++){
        for(int j=2; j <= i/2; j++){
            if(i%j == 0) num[j]=1;
        }
    }

    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d", &n);
        for(int j = n/2; j>0; j--){
            if(num[j] != 1 && num[n-j] != 1){
                printf("%d %d\n", j, n-j);
                break;
            }
        }
    }
    return 0;
    
}