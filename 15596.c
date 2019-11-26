#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
long long sum(int *a, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
int main(void){
    int n;
    scanf("%d",&n);
    int *a = (int*)malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%lld\n",sum(a, n));
    return 0;
    
}