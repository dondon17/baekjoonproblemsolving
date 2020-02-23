#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)
int main(void){
    int num;
    int len;
    char tmp[50];

    scanf("%d", &num);

    char *word[num];

    for(int i=0;i<num;i++){
        scanf("%s", tmp);
        len = strlen(tmp)+1;

        word[i] = (char*)malloc(sizeof(char)*len);
    }
    for (int i = 0; i < num; i++){
        printf("%s\n", word[i]);
    }
    return 0;   
}