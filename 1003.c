#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)


int record[41]={1,1,};
// fibonacci by dynamic programming 
int fibonacci(int n){
  
    if(n==0) {
        return record[0];
    }
    else if(n==1){
        return record[1];
    }

    else {
        if(record[n] > 0) return record[n];
    }
    
    return record[n] = fibonacci(n-1)+fibonacci(n-2);
}

int main(void){
    int Testcase;
    scanf("%d", &Testcase);

    for (int i = 0; i < Testcase; i++)
    {
        int tmp;
        scanf("%d", &tmp);

        if(tmp == 0) printf("%d %d\n",1, 0);
        else if(tmp == 1) printf("%d %d\n", 0, 1);
        else{
            fibonacci(tmp);
            printf("%d %d\n", record[tmp-2], record[tmp-1]);
        }
    }
    
    return 0;
}