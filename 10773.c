#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main(void){
    int inputarr[10001], resultarr[10001];
    int testcase, num, sum = 0;
    int top = 0;

    scanf("%d", &testcase);
    int* list = (int*)malloc(sizeof(int)*testcase);

    for(int i = 0; i < testcase; i++){
        scanf("%d", &num);
        if(num != 0) list[top++] = num;
        else top--;
    }
    
    for(int i = 0; i < top; i++) sum+=list[i];

    printf("%d\n", sum);
    return 0;
}