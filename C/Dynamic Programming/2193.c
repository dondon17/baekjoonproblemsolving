#include<stdio.h>


int main(int argc, char **argv){

    int n;
    long long int dp[90];
    scanf("%d", &n);

    dp[0]=0, dp[1]=1;
    if(n > 1){
        for(int i=2; i<=n; i++){
            dp[i] = dp[i-2]+dp[i-1];    
        }
    }
    printf("%lld\n", dp[n]);
    return 0;
}

/*
문제에서 이친수의 규칙이 피보나치를 이룬다는 것은 쉽게 알 수 있다.
다만 피보나치의 90번째 항까지 포함할 수 있어야 하므로
int형으로는 불가능하다(47번째 항의 피보나치 수는 int형을 넘어서기 때문)
따라서 피보나치 수를 담는 배열을 long long int로 선언해야한다.
*/

