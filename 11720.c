#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main(void){
    char str[100];
    int n;
    int sum=0;
    scanf("%d", &n);
    scanf("%s", str);
    for(int i=0; i<n ;i++) {
        sum+=str[i]-'0';
    }
    printf("%d\n", sum);
    return 0;
}