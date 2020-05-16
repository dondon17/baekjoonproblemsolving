#include<stdio.h>
#define MAX(a,b) a>b?a:b

int main(void){
    int n;
    int wine[10001] = {0, };
    int dp[10001] = {0, };

    scanf("%d", &n);
    for(int i=1; i<=n; i++) scanf("%d", &wine[i]);

    for(int i=1; i<=n; i++){
        if(i==1) dp[i] = wine[i];
        else dp[i] = wine[i]+wine[i-1];
    }

    for(int i=3; i<=n; i++){
        int max = -1000;
        max = MAX(wine[i]+dp[i-2], dp[i-1]);
        max = MAX(max, wine[i]+wine[i-1]+dp[i-3]);
        dp[i] = max;
    }

    printf("%d\n", dp[n]);
    return 0;
}
/*
포도주가 한잔 있을 때와 두잔 있을때는 최대한 많이 마실수 있는 경우는 모든 포도주를 마실 때이다.
포도주가 3잔이 되는 경우 3번+dp1, 3번+2번+dp0의 값중 최대값이 가장 많이 마실 수 있는 경우이다.
여기서 배열의 값들을 1번 index부터 채워나가는 이유가 여기에 있다. dp0을 0으로 사용하기 위해서이다.
포도주가 4잔이 되는 경우 4번+dp2, 4번+3번+dp1의 값중 최대값 선택
포도주가 5잔이 되는 경우 5번+dp3, 5번+4번+dp2의 값중 최대값 선택
이처럼 dp에는 주어진 잔의 개수에 따른 최대 마실수 있는 양이 저장된다.
*/
