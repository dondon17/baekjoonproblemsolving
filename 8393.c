#include<stdio.h>
#pragma warning(disable:4996)
int main(void){
    int n, sum = 0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++) sum+=i;
    printf("%d\n", sum);
    return 0;
}