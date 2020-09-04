#include<stdio.h>
#include<stdlib.h>

int count_0[100] = {1, 0};
int count_1[100]= {0, 1};

int main(void){
    int t, n;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d", &n);
        if(n<2) printf("%d %d\n", count_0[n], count_1[n]);
        else{
            for(int j=2; j<=n; j++){
                count_0[j] = count_0[j-2]+count_0[j-1];
                count_1[j] = count_1[j-2]+count_1[j-1];
            }
            printf("%d %d\n", count_0[n], count_1[n]);
        }
    }
    return 0;
}

/*
fibo(0)에서는 0만 호출되고 fibo(1)에서는 1만 호출된다.
fibo(0)과 fibo(1)의 호출된 횟수를 각각 count_0, count_1 배열에 저장한다.
fibo(2)에서 호출되는 fibo(0), fibo(1)의 횟수는 fibo(0), fibo(1)에서의 호출된 0과 1의 횟수의 합과 같다
즉 fibo(n)에서 호출된 0과 1외 횟수는 fibo(n-1)에서의 0,1 호출횟수와 fibo(n-2)에서의 0,1 호출횟수의 합과 같다.

위의 코드에서 입력값이 2미만인 경우 저장되어 있던 값을 출력하고
2 이상인 경우 새로운 값을 구해 각 배열에 저장하도록 하였다.
*/