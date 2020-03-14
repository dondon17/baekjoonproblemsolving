#include<stdio.h>
#pragma warning(disable:4996)
int main(void){
    int n;
    scanf("%d", &n);
    if(n==1) printf("*");
    else{
        for(int i=0; i<2*n; i++){
            if(i%2==0){
                for(int j=0; j<n; j++){
                    if(j%2==0) printf("*");
                    else printf(" ");
                }   
            }
            if(i%2==1){
                for(int j=0; j<n; j++){
                    if(j%2==0) printf(" ");
                    else printf("*");
                }
            }
            printf("\n");
        }
    }
    return 0;
}