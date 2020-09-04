#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n, count;
    scanf("%d", &n);

    int *wei = (int*)malloc(sizeof(int)*n);
    int *hei = (int*)malloc(sizeof(int)*n);

    for(int i=0; i<n; i++) scanf("%d %d", &wei[i], &hei[i]);

    for(int i=0; i<n; i++){
        count = 0;
        for(int j=0; j<n; j++){
            if(wei[i] < wei[j] && hei[i] < hei[j]) count++;
        }
        printf("%d ", count+1);
    }
    return 0;
}