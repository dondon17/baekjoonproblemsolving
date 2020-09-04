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

/*
동적 계획법으로 풀기 위해, 이전에 구해진 값들을 저장해둘 배열 dp를 선언하였고
0, 1, 2, 3을 만드는 경우의 수는 각각 0, 1, 2, 4 이므로, 이 값들로 초기화하였다.
이 후 4부터는 경우의 수를 구해야 하기 때문에, 반복문을 통해 4부터 입력한 수 까지의 dp값을 계산하게 된다.

n = 7인 경우, for문은 j가 4부터 7까지 증가하면서 dp[4]~df[7] 값을 배열에 저장하게 된다.
이후 n이 7보다 큰 수일 때, df[7]까지는 배열에 저장되어 있던 값들을 꺼내 사용하면 되고, 8부터 값을 구하면 된다.
*/