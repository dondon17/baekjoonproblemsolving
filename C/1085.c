#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main(void){
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int xdis, ydis;
    if(x > w/2) xdis = abs(x - w);
    if(x < w/2) xdis = x;

    if(y > h/2) ydis = abs(y - h);
    if(y < h/2) ydis = y;
    
    if(xdis <= ydis) printf("%d\n", xdis);
    else printf("%d\n", ydis);
    return 0;
}