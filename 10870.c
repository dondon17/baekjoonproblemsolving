#include<stdio.h>
#pragma warning(disable:4996)

int fibo[21] = {0, 1, };

int fibonacci(int index){
    if(index <= 1) return fibo[index];
    else{
        return fibonacci(index-2)+fibonacci(index-1);
    }
}

int main(void){
    int n;
    scanf("%d", &n);
    int result = fibonacci(n);
    printf("%d\n", result);
}