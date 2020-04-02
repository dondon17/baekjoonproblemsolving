#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)

void printarray(char arr[], int n){
    for (int i = 0; i < strlen(arr); i++){
        for (int j = 0; j < n; j++){
            printf("%c", arr[i]);
        }
    }
    printf("\n");
}

int main(void){
    int n, cnt;
    char str[21];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d %s", &cnt, str);
        printarray(str, cnt);
    }
    return 0;
}