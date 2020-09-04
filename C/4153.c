#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
int main(void){
    int min, mid, max;
    while(1){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(a == 0 && b == 0 && c == 0) break;
        max = a;
        if(a < b){
            if(c < b){
                max = b;
                if(a > c){
                    min = c;
                    mid = a;
                }
                else{
                    min = a;
                    mid = c;
                }
            }
            else if(c > b){
                max = c;
                mid = b;
                min = a;
            }
        }
        else if(a > b){
            if(a > c){
                max = a;
                if(c > b){
                    mid = c;
                    min = b;
                }
                else{
                    mid = b;
                    min = c;
                }
            }
            else if(a < c){
                max = c;
                mid = a;
                min = b;
            }
        }

        if(max*max == min*min + mid*mid) printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}