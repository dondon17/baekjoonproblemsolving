#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main(void){
    int n, tmp;
    scanf("%d", &n);

    int *arr = (int*)malloc(sizeof(int)*n);

    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for(int i=0; i<n; i++) printf("%d\n", arr[i]);
    return 0;
}