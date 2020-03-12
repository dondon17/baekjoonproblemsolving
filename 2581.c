#include<stdio.h>
#pragma warning(disable:4996)
int main(void){
    int start, last;
    int min = 10001, sum = 0;

    scanf("%d %d", &start, &last);
    if(start == 1) start++;

    for(int i = start; i <= last ;i++){
        int flag = 1;
        for(int j = 2; j <= i/2; j++){
            if(i % j == 0) {
                flag = 0;
                break;                
            }
        }   
        
        if(flag == 1) {
            if(min > i) min = i;
            sum+=i;
        }
    }
    if(sum == 0) printf("-1\n");
    else printf("%d\n%d\n", sum, min);

    return 0;
}