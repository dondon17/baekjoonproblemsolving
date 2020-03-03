#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#pragma warning(disable:4996)

int main(void){
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        int planet_num;
        scanf("%d", &planet_num);

        int count = 0;

        for (int j = 0; j < planet_num; j++)
        {
            int cx, cy, r, d;
            int in1, in2;
            
            scanf("%d %d %d", &cx, &cy, &r);
            d = (cx-x1)*(cx-x1)+(cy-y1)*(cy-y1);
            in1 = d > r*r ? 0 : 1;

            d = (cx-x2)*(cx-x2)+(cy-y2)*(cy-y2);
            in2 = d > r*r ? 0 : 1;

            if(in1 != in2) count++;
        }
        printf("%d", count\n);
    }
    
}