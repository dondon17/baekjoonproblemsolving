#include<stdio.h>
#pragma warning(disable:4996)
#define MAX_SIZE 10001

int arr[MAX_SIZE]={0,  }; // 셀프넘버인지의 여부를 저장하기 위한 배열

int d(int n){
    int tmp = n;
    // 전달 받은 수의 각 자릿수를 모두 더하기 위한 반복문
    while (1){
        if(n == 0) break;
        // 예) n = 35 
        tmp += n%10; 
        // 1. tmp = 35 + 5
        // 2. tmp = 35 + 5 + 3
        n /= 10; 
        // 1. n = 3
        // 2. n = 0
    }
    return tmp;
}
int main(void){
    for(int i=1; i<MAX_SIZE; i++){
        int index = d(i);
        if(index < MAX_SIZE) arr[index] = 1;
    }
    for(int i=1; i<MAX_SIZE; i++){
        if(arr[i] == 0) printf("%d\n", i);
    }
    return 0;
}