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

// ���� �ﰢ���� �̷絵�� n�� �Է¹ް�
// 0��� 0���� 0���� ä���� dp�迭�� �ﰢ���� �����ϵ��� ���ڵ��� ä���ִ´�.
// ���� ���� ��, �������� ���� ���� ��, ���� ���Ͽ� �ִ밪�� ���س�����.