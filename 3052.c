#include<stdio.h>
#pragma warning(disable:4996)
int main(void){
    int arr[42]={0, };
    int num, count = 0;
    for(int i=0; i<10; i++){
        scanf("%d", &num);
        arr[num%42]++;
    }
    for(int i=0; i<42; i++){
        if(arr[i]>0) count ++;
    }
    printf("%d\n", count);
    return 0;
}
