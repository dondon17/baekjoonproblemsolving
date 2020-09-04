#include<stdio.h>
#include<string.h>
#include<ctype.h>
#pragma warning(disable:4996)


int main(void){

    int count[26]={0, };
    char arr[1000001];
    scanf("%s", arr);

    for(int i = 0; arr[i]!='\0'; i++) count[toupper(arr[i])-'A']++;
    
    int max = 0;
    char result = '?';

    for(int i = 0; i <= 'Z'-'A'; i++){
        if(count[i] > max) {
            max = count[i];
            result = i;
        }
        else if(count[i] == max) result = '?';
    }

    printf("%c\n", (result=='?')? '?' : result+65);
    return 0;
}