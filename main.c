#include <stdio.h>
#include <string.h>
#include "interpret.h"
#include "stack.h"

static void repl()
{
    char input[1024];
    while(1){
        printf("> ");
        if(!fgets(input,sizeof(input),stdin)){
            printf("\n");
            break;
    }

    input[strcspn(input, "\n")] = 0;

    if (strcmp(input, "exit") == 0) {
        printf("Saindo...\n");
        break;
    }

    interpret (input, 1); 
    }
}

int main () {
    printf("Comandos disponíveis:\n");
    printf("  push <numero>\n");
    printf("  pop \n");
    printf("  add, sub, mul, div \n");
    printf("  div\n");
    printf("  print\n");
    printf("  exit\n\n");

    generateStack(15);
    repl();
    return 0;
}
