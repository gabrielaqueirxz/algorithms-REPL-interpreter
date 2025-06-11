#include "stack.h"
#include "stdio.h"
#include "stdlib.h"

struct _stack {
    int * values;
    int top;
    int maxSize;
};

Stack* newStack(int size){
    Stack* stack = (Stack*) calloc(1, sizeof(struct _stack));
    stack->values = (int*) calloc(size, sizeof(int));
    stack->top = 0;
    stack->maxSize = size;  
    return stack;
}

void stackPush(Stack* stack, int value){
    if (stack->top >= stack->maxSize) {
        printf("Erro: Pilha cheia!\n");
        return;
    }
    stack->values[stack->top++] = value;
}

int stackPop (Stack *stack){
     if (stack->top == 0) {
        printf("Erro: Pilha vazia!\n");
        return 0;
    }
    return stack->values[--stack->top];
}

void stackPrint(Stack* stack){
    printf("------Current Stack------\n");
    if(stack->top!=0){
        for (int i=0; i < stack->top; i++) {
        printf ("\n%d\n", stack->values[i]);
        }
    }
    printf("-------------------------\n");
}