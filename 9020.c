#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
#define SIZE 10001
int num[SIZE]={1, 1, };

int main(void){
    int n, t;

    // 소수인 index만 0으로 남기고 소수가 아니면 1로 초기화
    for(int i=2; i<(int)sqrt(SIZE); i++){
        for(int j=2*i; j <= SIZE; j+=i){
            if(num[j]%i == 0) num[j]=1;
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