#include<stdio.h>
#include<stdlib.h>

#define MIN(a,b) (a<b?a:b)

int main(int argc, char** argv){
    
    int r, g, b;
    int n;
    int dp[1001][3] = {0,};

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d %d", &r, &g, &b);

        dp[i+1][0] = MIN(dp[i][1], dp[i][2])+r;
    }
    return 0;
}