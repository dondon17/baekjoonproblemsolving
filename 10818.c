#include<stdio.h>
#pragma warning(disable:4996)
int main(void){
    int n, num;
    int max = -1000001, min = 1000001;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        if(num < min) min = num;
        if(num > max) max = num;
    }
    printf("%d %d\n", min, max);
    return 0;
}
