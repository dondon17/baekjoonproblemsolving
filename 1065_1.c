#include<stdio.h>
#pragma warning(disable:4996)
int checknum(int n){
    int count = 0;
    int a, b, c;
    for(int i=1; i<=n; i++){
        a= i%10;
        b= i%100/10;
        c= i/100;
        if(i < 100) count++;
        else {
            if((c-b)==(b-a)) count++;
        }
    }
    return count;
}

int main(void){
    int n;
    scanf("%d", &n);

    printf("%d\n", checknum(n));
    return 0;
}