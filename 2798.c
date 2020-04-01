#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n, m, sum = 0;
    int max = -1;
    scanf("%d %d", &n, &m);
    
    int *arr = (int*)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                sum = arr[i] + arr[j] +arr[k];
                if(sum > max && sum <= m) max = sum;
            }
        }
    }
    printf("%d\n", max);
    return 0;
}