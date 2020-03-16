#include<stdio.h>
#pragma warning(disable:4996)
int check_year(int year){
    if(year % 4 == 0 && year % 100 != 0) return 1;
    if(year % 4 == 0 && year % 400 == 0) return 1;
    else return 0;
}
int main(void){
    int year;
    scanf("%d", &year);
    printf("%d\n", check_year(year));
    return 0;
}