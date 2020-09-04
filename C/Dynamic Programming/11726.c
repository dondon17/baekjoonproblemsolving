#include<stdio.h>


int main(int argc, char **argv){
    int n;
    int dp[1001] = {1, 1, };
    
    scanf("%d", &n);

    for(int i=2; i<=n; i++){
        dp[i] =(dp[i-1]+dp[i-2])%10007;
    }
    printf("%d\n", dp[n]%10007);
    
    return 0;
}

/*
n을 증가시키다 보면 1,2,3,5,8,13.... 이런식으로 피보나치 수열 형태를 하는 것을 알 수 있다.
다만 mod 10007을 해주는 이유가 뭔지는 궁금... mod 연산 안하면 계속 틀렸다고 나온다.
*/
