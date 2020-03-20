#include<stdio.h>
int main(void){
    int a, b, c, result, tmp;
    int num[10] = {0, };
    scanf("%d %d %d", &a, &b, &c);
    result = a*b*c;
    for(int i=0; result>0; i++){
        tmp = result%10;
        num[tmp] += 1;
        result /= 10;
    }
    for(int i=0; i<10; i++) printf("%d\n", num[i]);
    return 0;
}