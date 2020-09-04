#include<stdio.h>
#pragma warning(disable:4996)
int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int mid;
    if(a >= b){
        if(a <= c) mid = a;
        else if(a >= c) {
            if (b >= c) mid = b;
            else mid = c;
        }
    }
    else if(a <= b){
        if(b <= c) mid = b;
        else if(b >= c){
            if(a >= c) mid = a;
            else mid = c;
        }
    }
    printf("%d\n", mid);
    return 0;
}   
