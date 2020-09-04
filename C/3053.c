#include<stdio.h>
#pragma warning(disable:4996)
#define PI 3.14159265358979
int main(void){
    int r;
    scanf("%d", &r);

    printf("%.6lf\n", r*r*PI);
    printf("%.6lf\n", r*r*2.0);
    return 0;
}