#include<stdio.h>
#pragma warning(disable:4996)
int main(void){
    int burger[3], drink[2], min;
    for(int i = 0; i < 3; i++) scanf("%d", &burger[i]);
    for(int i = 0 ;i < 2; i++) scanf("%d", &drink[i]);

    min = burger[0] + drink[0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            if(burger[i]+drink[j]-50 < min) min = burger[i]+drink[j]-50;
            else continue; 
        }
    }
    printf("%d\n", min);
    return 0;
}
