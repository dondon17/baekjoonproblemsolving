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
n�� ������Ű�� ���� 1,2,3,5,8,13.... �̷������� �Ǻ���ġ ���� ���¸� �ϴ� ���� �� �� �ִ�.
�ٸ� mod 10007�� ���ִ� ������ ������ �ñ�... mod ���� ���ϸ� ��� Ʋ�ȴٰ� ���´�.
*/
