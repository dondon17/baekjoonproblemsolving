#include<stdio.h>
#pragma warning(disable:4996)
int main(void){
    int n, a, b;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d %d", &a, &b);   
        printf("Case #%d: %d + %d = %d\n", i+1, a, b, a+b);
    }
    return 0;
}
