typedef struct _stack Stack;

Stack* newStack(int size);
void stackPush(Stack* stack, float value);
float stackPop (Stack* stack);
void stackPrint(Stack* stack);