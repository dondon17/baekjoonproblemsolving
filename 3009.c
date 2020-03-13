#include<stdio.h>
#pragma warning(disable:4996)
int main(void){
    int x[4], y[4];

    for (int i = 0; i < 3; i++){
        scanf("%d %d", &x[i], &y[i]);
    }
    if(x[0] == x[1]) x[3] = x[2];
    if(x[0] == x[2]) x[3] = x[1];
    if(x[1] == x[2]) x[3] = x[0];
    
    if(y[0] == y[1]) y[3] = y[2];
    if(y[0] == y[2]) y[3] = y[1];
    if(y[1] == y[2]) y[3] = y[0];

    printf("%d %d\n", x[3], y[3]);
    return 0;
}