#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)

#define FALSE 0
#define TRUE 1
int checkVPS(char *str){
    int cnt = 0;
    if(strlen(str) % 2 == 1) return FALSE;
    else{
        if(str[0] == ')') return FALSE;

        for(int i = 0; i < strlen(str); i++){
            if(str[i] == '(') cnt++;
            else if(str[i] == ')') cnt--;  
            if(cnt < 0) return FALSE; 
            // 닫는 괄호가 많아지면 cnt가 음수가 되고 이는 짝이 안맞기 시작함을 의미!!
        }
        if(cnt != 0) return FALSE;
        else return TRUE;
    }
}
int main(void){

    int n;
    char str[50];
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%s", str);
        if(checkVPS(str)==TRUE) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}