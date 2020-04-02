#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main(void){
    int n, max = -1;
    double sum = 0.0;
    scanf("%d", &n);
    double *score = (double*)malloc(sizeof(double)*n);
    for(int i=0; i<n; i++){
        scanf("%lf", &score[i]);
        if(score[i] > max) max = score[i];
        sum += score[i];
    }
    printf("%.6lf\n", (sum/max*100)/n);
    return 0;
}
