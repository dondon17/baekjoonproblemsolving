#include<stdio.h>
#pragma warning(disable:4996)
int main(void){
    int score, sum = 0;
    
    for(int i=0; i<5; i++){
        scanf("%d", &score);
        if(score >= 40) sum+=score;
        else if(score < 40) sum+=40;
    }
    printf("%d\n", sum/5);
    return 0;
}