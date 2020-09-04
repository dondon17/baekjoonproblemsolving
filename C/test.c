#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(void){
    int n;
    scanf("%d", &n);
    long long answer = 0;
    long long arr[30];
    for(int i=0; i<30; i++){
        arr[i] = i*i;
    }
    for(int i=0; i<30; i++) printf("%lld ", arr[i]);
    for(int i=0; i<30; i++){
        if(n==arr[i]){
            answer = (i+1)*(i+1);
            break;
        }
        else answer = -1;
    }
    printf("\n%lld", answer);
    return 0;
}