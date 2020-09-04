#include<stdio.h>
#include<stdlib.h>
int arr[100000];

int main(void){
    int n, sum, subn;
    scanf("%d", &n);
    for(int i=1; i<n; i++){
        sum = i;
        subn = i;
        while(subn > 0){
            sum += subn%10;
            subn /= 10;
        }

        if(sum == n) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("0\n");
    return 0;
}