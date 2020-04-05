#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma waring(disable:4996)
int main(void){
    int t;
    int r;
    char word[21];
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d %s", &r, word);
        for(int j=0; j<strlen(word); j++){
            for(int k=0; k<r; k++) printf("%c", word[j]);
        }
        printf("\n");
    }
    return 0;
}