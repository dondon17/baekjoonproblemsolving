#include<string.h>
#include<stdio.h>
#pragma warning(disable:4996)
int main(void){
    int count = 1;
    char str[1000001];
    scanf("%[^\n]s", str);

    if(str[0] == ' ') count = 0;

    for(int i = 0; str[i]!='\0'; i++){
        if(str[i] == ' ') count++;
    }
    if(str[strlen(str)-1]==' ') count--;
    printf("%d\n", count);
    return 0;
}