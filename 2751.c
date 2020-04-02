#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int compare(const void *a, const void *b){
    if(*(int*)a > *(int*)b) return 1;
    else if(*(int*)a < *(int*)b) return -1;
    else return 0;
}
int main(void){
    int n, temp;
    scanf("%d", &n);

    int* arr = (int*)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), compare);


    for(int i=0; i<n; i++) printf("%d\n", arr[i]);
    return 0;
}

// 참고: 공대생의 컴공생활(evga7.tistory.com/50)