#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

#define TRUE 1
#define FALSE 0
#define MAX_SIZE 10000
#define MINUS -1

typedef struct _stack{
    int arr[MAX_SIZE];
    int top;
} Stack;

void stackInit(Stack *sp){
    sp->top = -1;
}

int isEmpty(Stack *sp){
    if(sp->top == -1) return TRUE;
    else return FALSE;
}

int isFull(Stack *sp){
    if(sp->top+1 >= MAX_SIZE) return TRUE;
    else return FALSE;
}

int stackSize(Stack *sp){
    return sp->top+1;
}

void Push(Stack *sp, int data){
    if(isFull(sp)==TRUE) return;
    else sp->arr[++(sp->top)] = data;
}

int Pop(Stack *sp){
    if(isEmpty(sp)==TRUE) return MINUS;
    else return sp->arr[(sp->top)--];
}

int Peek(Stack *sp){
    if(isEmpty(sp) == TRUE) return MINUS;
    else return sp->arr[sp->top];
}
int main(void){
    int i;
    char str[6];
    Stack stack;
    int n, num;

    scanf("%d", &n);
    fgetc(stdin);
    stackInit(&stack);

    for(int i=0; i<n; i++){
        scanf("%s", str);
        fgetc(stdin);

        if(!strcmp(str, "push")){
            scanf("%d", &num);
            fgetc(stdin);
            Push(&stack, num);
        }
        else if(!strcmp(str, "pop")) printf("%d\n", Pop(&stack));
        else if(!strcmp(str, "empty")) printf("%d\n", isEmpty(&stack));
        else if(!strcmp(str, "size")) printf("%d\n", stackSize(&stack));
        else if(!strcmp(str, "top")) printf("%d\n", Peek(&stack));
    }
    return 0;

}