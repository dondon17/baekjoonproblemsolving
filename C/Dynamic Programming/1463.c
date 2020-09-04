#include<stdio.h>
#include<stdlib.h>

int dp[1000001]={0, 0, };

int main(int argc, char** argv){

    int n;
    scanf("%d", &n);
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1]+1;
        if(i % 2 == 0) dp[i] = dp[i] > dp[i/2]+1 ? dp[i/2]+1 : dp[i]; 
        if(i % 3 == 0) dp[i] = dp[i] > dp[i/3]+1 ? dp[i/3]+1 : dp[i];
    }
    printf("%d\n", dp[n]);

    return 0;
}

/*
먼저 입력 받은 n을 1로 만다는 최소 횟수를 n-1을 1로 만드는 최소 횟수+1로 초기화한다.
이는 n-1에 1만 더하면 n이 되고, n의 최소 횟수가 n-1의 최소 횟수보다 1회 더 많다고 가정한 것이다.
이후 만약 2또는 3으로 나누어 진다면 초기화한 dp[n] 값을 dp[n/3]+1 또는 dp[n/2]+1 값과 비교한다.
즉, dp[n-1]+1 / dp[n/3]+1 / dp[n/2]+1 값중에서 최소값을 고르는 것과 동일하다.
*/