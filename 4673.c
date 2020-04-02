#include<stdio.h>
#include<stdbool.h>
#define N 10001
bool arr[N];
int gen(int n){
    int new = n;
    while(1){
        if(n==0) break;
        new += n%10;
        n = n/10;
    }
    return new;
}
int main(void){
    
    for(int i=1;i<10001;i++){
        int sol = gen(i);
        if(sol <= 10001){
            arr[sol] = true;
        }
    }
    for(int i=1; i<10001;i++){
        if(!arr[i]) printf("%d\n", i);
    }
    return 0;
}