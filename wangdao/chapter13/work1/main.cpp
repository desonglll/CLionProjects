#include <stdio.h>

#define MaxSize 10
typedef int ElemType;

struct Stack {
    ElemType data[MaxSize];
    int size = 0;
};

void push_stack(Stack *stack, ElemType e) {
    stack->data[stack->size] = e;
    stack->size++;
}

ElemType pop_stack(Stack *stack) {
    ElemType bak = stack->data[stack->size - 1];
    stack->size--;
    return bak;
}

int main(void) {
    Stack *stack = new Stack();
    for (int i = 0; i < 3; i++) {
        int n;
        scanf("%d", &n);
        push_stack(stack, n);
    }
    for (int i = stack->size; i > 0; i--) {
        ElemType n = pop_stack(stack);
        printf("%2d", n);
    }


    return 0;
}