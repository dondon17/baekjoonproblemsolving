#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main(void){
    int N, M;
    int sum=0, max=-1;
    scanf("%d %d", &N, &M);

    int *arr = (int*)malloc(sizeof(int)*N);
    for(int i=0; i<N; i++) scanf("%d", &arr[i]);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            for(int k=0; k<N; k++){
                sum = arr[i]+arr[j]+arr[k];
                if(sum > max && sum <= M) max = sum;
            }
        }
    }
    printf("%d\n", max);
    return 0;
}
