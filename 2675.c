#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main(void){
    int num;

    scanf("%d", &num);

    int *n = (int*)malloc(sizeof(int)*num);
    char **word = (char*)malloc(sizeof(char)*num); 

    for(int i=0;i<num;i++){
        scanf("%s", word[i]);
    }
    for (int i = 0; i < num; i++){
        printf("%s\n", word[i]);
    }
    return 0;   
}