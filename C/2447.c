#include<stdio.h>
#pragma warning(disable:4996)

char matrix[2201][2201];

void solve(int x, int y, int num){
    if(num == 1){
        matrix[x][y] = '*';
        return ;
    }

    int val = num/3;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == 1 && j == 1);
            else solve(x+(val*i), y+(val*j), val);
        }
    }
}

int main(void){
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            matrix[i][j] = ' ';
        }
    }

    solve(0, 0, N);
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
}