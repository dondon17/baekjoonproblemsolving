#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main(void){
    char word[101];
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        int flag[26] = {0, };
        int cnt = 0;
        scanf("%s", word);
        for(int j = 0; j < strlen(word); j++){
            if(word[j] != word[j+1]) flag[(int)word[j]-97]++;
        }
        for(int k = 0; k < 26; k++){
            if(flag[k] > 1) cnt++;
        }
        if(cnt == 0) count++;
    }
    printf("%d\n", count);
    return 0;
}