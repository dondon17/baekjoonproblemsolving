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
�������� ��ģ���� ��Ģ�� �Ǻ���ġ�� �̷�ٴ� ���� ���� �� �� �ִ�.
�ٸ� �Ǻ���ġ�� 90��° �ױ��� ������ �� �־�� �ϹǷ�
int�����δ� �Ұ����ϴ�(47��° ���� �Ǻ���ġ ���� int���� �Ѿ�� ����)
���� �Ǻ���ġ ���� ��� �迭�� long long int�� �����ؾ��Ѵ�.
*/

