#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
#define TRUE 1
#define FALSE 0
#define MINUS -1
#define MAX_SIZE 100000

typedef struct _stack{
    int arr[MAX_SIZE];
    int top;
}Stack;

void init_Stack(Stack *sp){
    sp->top = -1;
}

int is_Empty(Stack *sp){
    if(sp->top < -1) return TRUE;
    else return FALSE;
}

int is_Full(Stack *sp){
    if(sp->top+1 >= MAX_SIZE) return TRUE;
    else return FALSE;
}

int Pop(Stack *sp){
    if(is_Empty(sp) == TRUE) return TRUE;
    else return sp->arr[(sp->top)--];
}

void Push(Stack *sp, int data){
    if(is_Full(sp) == TRUE) return;
    else sp->arr[++(sp->top)] = data;
}

int Peek(Stack *sp){
    if(sp->top == -1) return -1;
    else return sp->arr[sp->top];
}

int main(void){
    int k, num, sum = 0;
    Stack stack;
    init_Stack(&stack);

    scanf("%d", &k);

    for (int i = 0; i < k; i++){
        scanf("%d", &num);

        if(num == 0) {
            Pop(&stack);
            printf("%d-----\n", Peek(&stack));
        }
        else {
            Push(&stack, num);
            printf("%d+++++\n", Peek(&stack));
        }
    }
    printf("%d\n", num);
    return 0;
}