#include<stdio.h>
#pragma warning(disable:4996)

int main(void){
    int num, n, count = 0;
    int flag = 1;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        scanf("%d", &num);
        if(num == 1) flag = 0;
        else if(num != 1){
            for (int j = 2; j < num; j++){
                if(num % j == 0){
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 1) count++;
        else flag = 1;
    }    

    printf("%d\n" , count);
    return 0;
}