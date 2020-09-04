#include<string.h>
#include<stdio.h>
#pragma warning(disable:4996)
int main(void){
    int a, b;
    int newa, newb;

    scanf("%d %d", &a, &b);
    newa = 100*(a%10)+(a%100/10)*10+a/100;
    newb = 100*(b%10)+(b%100/10)*10+b/100;

    printf("%d\n", (newa>newb)? newa : newb);
    return 0;
}