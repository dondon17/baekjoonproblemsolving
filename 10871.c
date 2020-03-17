#include<stdio.h>
#pragma warning(disable:4996)
int main(void){
    int n, x, num;
    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; i++){
        scanf("%d", &num);
        if(num < x) printf("%d\n", num);
    }
    return 0;
}