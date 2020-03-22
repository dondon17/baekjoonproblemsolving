#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
long long sum(int* arr, int n){
    long long result;
    for(int i=0; i<n; i++) result+=arr[i];
    return result;
}
int main(void){
    int n;
    scanf("%d", &n);
    int *arr = (int*)malloc(sizeof(int)*n);

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%lld\n", sum(arr, n));
    free(arr);
    return 0;
}