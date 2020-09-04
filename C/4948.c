#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
int main(void){
    int n, arr[246913] = {0, 0, };
    for(int i = 2; i<246913; i++){
        if(arr[i] == 1) continue;
        for(int j = 2*i; j < 246913; j+=i) arr[j] = 1; 
    }

    while(1){
        scanf("%d", &n);
        if(n == 0) break;
        int count = 0;

        for(int i = n+1; i <= 2*n; i++){
            if(arr[i] != 1) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}