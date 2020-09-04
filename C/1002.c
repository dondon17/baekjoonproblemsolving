#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#pragma warning(disable:4996)

int main(void){
    int x1, y1, x2, y2;
    int r1, r2;
    int d;

    scanf("%d", &d);

    for (int i = 0; i < d; i++){

        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        double dis = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        int sum = (r1+r2);
        int dif = sqrt((r1-r2)*(r1-r2));
        
        //printf("dis : %.2lf, sum : %d, dif : %d\n", dis, sum, dif);
        if(dis == 0){
            if(dif == 0) printf("-1\n"); // when Circle1 and Circle2 same
            else printf("0\n"); // when one circle locates inside of the other circle
        }

        else if(dis == sum || dis == dif) printf("1\n"); // when two circle meet at one point
        else if(dis > dif && dis < sum) printf("2\n"); // when two circle meeat at two points
        else printf("0\n");
    }

    return 0;
}