#include<stdio.h>

#define MAX(a,b) a>b?a:b

int dp[501][501]={0,};

int main(void){
    int n;
    int max = -10000;

    scanf("%d", &n);
    for(int i=1; i<=n ;i++){
        for(int j=1; j<=i; j++){
            scanf("%d", &dp[i][j]);
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(j==1) dp[i][j] += dp[i-1][j];
            else if(i == j) dp[i][j] += dp[i-1][j-1];
            else dp[i][j] += MAX(dp[i-1][j-1], dp[i-1][j]);
            if(max < dp[i][j]) max = dp[i][j];
        }
    }
    printf("%d\n", max);
    return 0;
}

// 먼저 삼각형을 이루도록 n을 입력받고
// 0행과 0열이 0으로 채워진 dp배열에 삼각형을 구성하도록 숫자들을 채워넣는다.
// 이후 이전 행, 열에서의 값을 현재 행, 열에 더하여 최대값을 구해나간다.