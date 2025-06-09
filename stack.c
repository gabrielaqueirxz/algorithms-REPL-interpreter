#include "stack.h"
#include "stdio.h"
#include "stdlib.h"

struct _stack {
    float * values;
    int top;
};

Stack* newStack(int size){
    Stack* stack = (Stack*) calloc(1, sizeof(struct _stack));
    stack->values = (float*) calloc(size, sizeof(float));

    stack->top = 0;
    return stack;
}

void stackPush(Stack* stack, float value){
    stack->values[stack->top++] = value;
}

float stackPop (Stack *stack){
    return stack->values[--stack->top];
}

void stackPrint(Stack* stack){
    printf("------Current Stack------\n");
    if(stack->top!=0){
        for (int i=0; i < stack->top; i++) {
        printf ("\n%0.f\n", stack->values[i]);
        }
    }
    printf("----------Stack----------\n");
}