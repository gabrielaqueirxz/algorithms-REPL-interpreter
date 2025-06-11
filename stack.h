typedef struct _stack Stack;

Stack* newStack(int size);
void stackPush(Stack* stack, int value);
int stackPop (Stack* stack);
void stackPrint(Stack* stack);
