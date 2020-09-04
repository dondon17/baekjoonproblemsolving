#include<stdio.h>
#pragma warning(disable:4996)
#define MAX(a,b) a>b?a:b

int main(int argc, char** argv){
    printf("hello");
    int dp[101][100001];
    int w[101];
    int v[101];
    int n, k;
    scanf("%d %d", &n, &k);

    for(int i=1; i<=n; i++){
        scanf("%d %d", &w[i], &v[i]);
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            dp[i][j] = dp[i-1][j];
            if(j-w[i] >= 0) dp[i][j] = MAX(dp[i][j], dp[i-1][j-w[i]]+v[i]);
        }
    }

    printf("%d\n", dp[n][k]);

    return 0;
}