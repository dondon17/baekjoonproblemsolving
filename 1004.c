#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#pragma warning(disable:4996)


int distance(int x, int y, int cx, int cy){
    return (x-cx)*(x-cx)+(y-cy)*(y-cy);
}

int main(void){
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int count = 0;

        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        int planet_num;
        scanf("%d", &planet_num);


        for (int j = 0; j < planet_num; j++)
        {
            int cx, cy, r, dis;
            int in1, in2;
            
            scanf("%d %d %d", &cx, &cy, &r);
            dis = distance(x1, y1, cx, cy);
            in1 = dis > r*r ? 0 : 1;

            dis = distance(x2, y2, cx, cy);
            in2 = dis > r*r ? 0 : 1;

            if(in1 != in2) count++;
        }
        printf("%d\n", count);
    }
    
}