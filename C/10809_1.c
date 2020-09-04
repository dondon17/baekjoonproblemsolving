#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)
int arr[26];

int main(void){
    char str[100];
    scanf("%s", str);

    for(int i=0; i<26; i++) arr[i] = -1;

    for(int i='a'; i<='z' ; i++){
        for(int j=0; j<strlen(str); j++){
            if(str[j] == i) {
                arr[i-97] = j;
                break;
            }
        }
        
    }

    for(int i=0; i<26; i++) printf("%d ", arr[i]);
    return 0;
}