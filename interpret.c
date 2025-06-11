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
    int a = 0, b = 0;
    char op[10], arg[20];
    sscanf(input, "%s%s", op, arg);
    char *endptr;
    long val = strtol(arg, &endptr, 10);

    if (strcmp(op, "push") == 0) {
        if (*endptr == '\0') {
        stackPush(stack, (int)val);
    } else {
        printf("Erro: valor inválido para a operação 'push'. Digite apenas um número inteiro.\n");
    }

    } else if (strcmp(op, "pop") == 0) {
        a = stackPop(stack);

    } else if (strcmp(op, "print") == 0) {
        printf("Resultado: %d\n", stackPop(stack));
        if (print != 0) stackPrint(stack);

    } else if (
        strcmp(op, "add") == 0 ||
        strcmp(op, "sub") == 0 ||
        strcmp(op, "mul") == 0 ||
        strcmp(op, "div") == 0
    ) {
        a = stackPop(stack);
        b = stackPop(stack);

        if (strcmp(op, "add") == 0) {
            stackPush(stack, a + b);
        } else if (strcmp(op, "sub") == 0) {
            stackPush(stack, b - a);
        } else if (strcmp(op, "mul") == 0) {
            stackPush(stack, a * b);
        } else if (strcmp(op, "div") == 0) {
            if (a == 0) {
                printf("Erro: divisão por zero!\n");
                stackPush(stack, b);
                stackPush(stack, a);
            } else {
                stackPush(stack, b / a);
            }
        }

    } else {
        printf("Erro: comando inválido!\n");
        printf("Comandos: push <valor>, pop, add, sub, mul, div, print.\n");
    }
}
