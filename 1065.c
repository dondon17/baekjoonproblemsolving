#include<stdio.h>
#pragma warning(disable:4996)
int onenum(int n){
    int a,b,c;
    int count=0;
    for(int i=1;i<=n;i++){
        a=i%10;
        b=i%100/10;
        c=i/100;
        if(i<100) count++;
        else {
            if((c-b)==(b-a)) count++;
        }
    }
    return count;
}
int main(void){
    int n;
    scanf("%d", &n);
    printf("%d\n",onenum(n));
    return 0;
}