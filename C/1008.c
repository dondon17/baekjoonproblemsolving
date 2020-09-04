#include<stdio.h>
#pragma warning(disable:4996)
int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%.9lf\n", (double)a/b);
    return 0;
}
