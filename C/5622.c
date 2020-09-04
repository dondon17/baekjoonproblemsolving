#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main(void){
    char str[16];
    scanf("%[^\n]s", str);
    int dial = 0, sum = 0;
    for(int i = 0; str[i]!='\0'; i++){
        switch (str[i]){
            case 'A':
            case 'B':
            case 'C':
                dial = 2;
                break;
            case 'D':
            case 'E':
            case 'F':
                dial=3;
                break;
            case 'G':
            case 'H':
            case 'I':
                dial=4;
                break;
            case 'J':
            case 'K':
            case 'L':
                dial=5;
                break;
            case 'M':
            case 'N':
            case 'O':
                dial=6;
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                dial=7;
                break;
            case 'T':
            case 'U':
            case 'V':
                dial=8;
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                dial = 9;
                break;
            case '1':
                dial = 1;
                break;
            case '0':
                dial = 10;
                break;
        }
        sum += dial+1;
    }
    printf("%d\n", sum);
    return 0;
}