#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main(void){
    char word[101];
    scanf("%s", word);
    int count = 0;


    for (int i = 0; ; i++){
        char letter = word[i];
        if(word[i] == '\0') break;

        if(letter == 'c'){
            if(word[i+1] == '=' || word[i+1] == '-') continue;
        }
        if(letter == 'd'){
            if(word[i+1] == 'z' && word[i+2] == '=') continue;
            else if(word[i+1] == '-') continue;
        }
        if(letter == 'l' && word[i+1] == 'j') continue;
        if(letter == 'n' && word[i+1] == 'j') continue;
        if(letter == 's' && word[i+1] == '=') continue;
        if(letter == 'z' && word[i+1] == '=') continue;
                
        count++;
    }
    printf("%d\n", count);
    return 0;
    
}