#include<stdio.h>
#pragma warning(disable:4996)
int main(void){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1; i<n; i++){
        for(int j = i; j<n; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}