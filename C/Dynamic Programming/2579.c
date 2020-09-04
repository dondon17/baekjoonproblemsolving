#include<stdio.h>
#define MAX(a,b) a>b?a:b
int main(void){
    int n;
    int arr[10001] = {0, };
    int dp[10001] = {0, };

    scanf("%d", &n);
    for(int i=1; i<=n; i++) scanf("%d", &arr[i]);

    for(int i=1; i<=n; i++){
        if(i==1) dp[i] = arr[i];
        else dp[i] = arr[i]+arr[i-1];
    }

    for(int i=3; i<=n; i++){
        int max = -1;
        max = MAX(arr[i]+arr[i-1]+dp[i-3], arr[i]+dp[i-2]);
        dp[i] = max;
    }
    printf("%d\n", dp[n]);
    return 0;
}

/*
포도주 시식과 90% 일치하는 문제이다.
차이점은 포도주의 경우 마지막 포도주를 마시지 않아도 되기에 dp[i-1]과 arr[i]+dp[i-2]도 비교했어야 하지만,
계단 오르기의 경우 마지막 경우가 반드시 포함되므로 dp[i-1]과 비교할 필요가 없다.
즉 계단 오르기에서는 arr[i]+arr[i-1]+dp[i-3]과 arr[i]+dp[i-2]만을 비교해 최대값을 dp[i]로 설정하기만 하면 된다.
*/