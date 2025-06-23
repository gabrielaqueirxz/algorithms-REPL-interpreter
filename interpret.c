#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "interpret.h"
#include "stack.h"
#include "list.h"

Stack *stack;
List *list;

void generateList () {
    list = createList();
}

void generateStack (int quantValues) {
    stack= newStack(quantValues);
}

void interpret (const char *input, int print) {
    int a = 0, b = 0;
    char op[10] = "";
    char arg[20] = "";
    
    // Conta quantos itens foram lidos
    int numArgs = sscanf(input, "%s%s", op, arg);

    char *endptr;
    long val = strtol(arg, &endptr, 10);

    if (strcmp(op, "push") == 0) {
        if (sscanf(arg, "%d", &a) == 0 ) {
            a = listGet(list, arg);
        }
        stackPush(stack, a);
    } else if (strcmp(op, "pop") == 0) {
        a = stackPop(stack);
        if (numArgs == 2) {
            if (listExist(list, arg)) {
                listSet(list, arg, a);
            } else {
                listAppend(list, arg, a);
            }
        }
    } else if (strcmp(op, "print") == 0) {
        printf("Resultado: %d\n", stackPop(stack));
        if (print != 0) {
            listPrint(list);
            stackPrint(stack);
        }
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
        printf("Comandos: push <valor>, pop [<variavel>], add, sub, mul, div, print, exit.\n");
    }
}
