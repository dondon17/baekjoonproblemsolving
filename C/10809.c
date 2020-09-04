#include<stdio.h>
#pragma warning(disable:4996)

int main(void){
    int location[26];
    char word[100]={0};

    scanf("%s", word);

    for(int i=0;i<26;i++) location[i] = -1;

    for(int i='a';i<='z';i++){
        for (int j=0;j<100;j++){
            if(word[j] == i){
                location[i-97] = j;
                break;
            }
        }
    }
    for(int i=0;i<26;i++) printf("%d ", location[i]);
    printf("\n");
    return 0;
}