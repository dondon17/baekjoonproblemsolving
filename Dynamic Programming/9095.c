#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    int dp[12] = {0, 1, 2, 4, };
    
    int T, n;
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        scanf("%d", &n);
        for(int j=4; j<=n; j++){
            dp[j] = dp[j-3]+dp[j-2]+dp[j-1];
        }
        printf("%d\n", dp[n]);
    }
    return 0;
}