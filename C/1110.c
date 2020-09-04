#include<stdio.h>
#pragma warning(disable:4996)
int getnum(int n){
    return (n%10)*10+(((n/10)+(n%10))%10);
}
int main(void){
    int n, count = 0;
    scanf("%d", &n);
    int new = getnum(n);
    
    while (1){
        if(n == new){
            printf("%d\n", ++count);
            break;
        }
        else{
            new = getnum(new);
            count++;
        }
    }
    return 0;
}
