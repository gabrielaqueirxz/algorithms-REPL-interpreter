#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "interpret.h"
#include "stack.h"

Stack *stack;

void generateStack (int quantValues) {
    stack= newStack(quantValues);
}

void interpret (const char *input, int print) {
    float a=0.0,b=0.0;
    char op[10];
    char arg[20];
    sscanf (input, "%s%s",op,arg);
//   printf("Operação: %s\n", op);
//   printf("Argumento: %s\n", arg);
    if(strcmp(op,"push")==0){
        a = atof(arg);
        stackPush(stack,a);
    } else if(strcmp(op,"pop")==0){
        a=stackPop(stack);
    } else if(strcmp(op,"print")==0){
        printf("Resultado: %.0f\n", stackPop(stack));
        if(print!=0){
        stackPrint(stack);
    }
  } else {
    a=stackPop(stack);
    b=stackPop(stack);
    if(strcmp(op,"add")==0){
      stackPush(stack,a+b);
    } else if(strcmp(op,"sub")==0){
        stackPush(stack,b-a);
        } else if(strcmp(op,"div")==0){
        stackPush(stack, b/a);
        } else if(strcmp(op,"mul")==0){
        stackPush(stack,a*b);
        } else {
        stackPush(stack,b);
        stackPush(stack,a);
        printf("Comandos: push, pop, add, sub, mul, div, print.\n");
        return;
        }
    }
}