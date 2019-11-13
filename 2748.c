#include<stdio.h>
#pragma warning(disable:4996)
int f[90];

int fibo(int num){
    if(num<=1) {
        f[num]=num;
        return f[num];
    }
    if(f[num]!=0) return f[num];
    else {
        f[num] = fibo(num-1)+fibo(num-2);
        return f[num];
    }
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d\n", fibo(n));
    return 0;
}