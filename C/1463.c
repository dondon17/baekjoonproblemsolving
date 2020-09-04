#include<stdio.h>
#pragma warning(disable:4996)
int main(){
    int n, count;
    count=0;
    printf("input: "); scanf("%d", &n);
    while(n!=1){
        if(n%3==0) {
            n = n/3;
            count++;
        }
        else if(n%2==0) {
            n =n/2;
            count++;
        }
        else {
            n= n-1;
            count++;
        }
        if(n==1) break;
    }
    printf("%d\n", count);
    return 0;
}