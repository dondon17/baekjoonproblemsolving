#include<stdio.h>
#pragma warning(disable:4996)
long long fibo[91];

long long fibonacci(int num, long long f[]){
    f[0] = 0;
    f[1] = 1;
    if(num > 1){
        for(int i = 2; i <= num; i++){
            f[i] = f[i-2]+f[i-1];
        }
    }
    return f[num];
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%lld\n", fibonacci(n, fibo));
    return 0;
}