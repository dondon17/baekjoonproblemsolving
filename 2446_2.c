#include<stdio.h>
#pragma warning(disable:4996)
int main(void){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for(int j=0; j<i; j++) printf(" ");
        for(int j=0; j<2*(n-i)-1; j++) printf("*");
        printf("\n");
    }
    for(int i = 0; i < n-1; i++){
        for(int j = n-2; j > i; j--) printf(" ");
        for(int j = 0; j < 3 + 2*i; j++) printf("*");
        printf("\n");
    }
    return 0;
}