#include<stdio.h>
#pragma warning(disable:4996)
int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a < b) printf("<\n");
    else if(a > b) printf(">\n");
    else if(a == b) printf("==\n");
    return 0;
}
