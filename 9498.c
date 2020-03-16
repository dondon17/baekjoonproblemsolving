#include<stdio.h>
#pragma warning(disable:4996)
char getgrade(int score){
    if(score >= 90 && score <= 100) return 'A';
    if(score >= 80 && score <= 89) return 'B';
    if(score >= 70 && score <= 79) return 'C';
    if(score >= 60 && score <= 69) return 'D';
    else return 'F';
           
}
int main(void){
    int score;
    scanf("%d", &score);
    printf("%c\n", getgrade(score));
    return 0;
}