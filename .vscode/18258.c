#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

#define TRUE 1
#define FALSE 0
#define MAX 100000

typedef struct queue{
    /* data */
    int head;
    int tail;
    int arr[MAX];
}Queue;

int is_Full(Queue *qp){
    if(qp->back >= MAX) return TRUE;
    else return FALSE;
}

int is_Empty(Queue *qp){
    if(qp->back == qp->front) return TRUE;
    else return FALSE;
}
int main(void){
    
}