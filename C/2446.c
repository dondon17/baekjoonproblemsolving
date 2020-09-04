#include<stdio.h>
#pragma warning(disable:4996)
int main(void){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
       
        for(int j=0; j<i; j++){
            printf(" ");
        }
        for(int j = i; j < 2*n-i-1; j++){
            printf("*");
        }
        printf("\n");   
    }
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-2; j++) printf(" ");
        for(int j = 0; j< 2*i+3; j++) printf("*");
        printf("\n");
    }
    return 0;
}