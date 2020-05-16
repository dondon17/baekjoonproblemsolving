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
������ �ýİ� 90% ��ġ�ϴ� �����̴�.
�������� �������� ��� ������ �����ָ� ������ �ʾƵ� �Ǳ⿡ dp[i-1]�� arr[i]+dp[i-2]�� ���߾�� ������,
��� �������� ��� ������ ��찡 �ݵ�� ���ԵǹǷ� dp[i-1]�� ���� �ʿ䰡 ����.
�� ��� �����⿡���� arr[i]+arr[i-1]+dp[i-3]�� arr[i]+dp[i-2]���� ���� �ִ밪�� dp[i]�� �����ϱ⸸ �ϸ� �ȴ�.
*/