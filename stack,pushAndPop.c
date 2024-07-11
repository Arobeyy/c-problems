#include <stdio.h>
#define STACK_MAX 20

typedef struct
{
    int top;
    int data[STACK_MAX];
} Stack;

void Push(Stack *s, int item)
{
    if (s->top < STACK_MAX)
    {
        s->data[s->top] = item;
        s->top += 1;
    }
    else
    {
        printf("stack is full!\n");
    }
}

int Pop(Stack *s)
{
    int item;

    if (s->top == 0)
    {
        printf("Stack is empty!\n");
        return -1;
    }
    else
    {
        s->top -= 1;
        item = s->data[s->top];
    }

    return item;
}

int main()
{
    Stack myStack;
    int item;

    myStack.top = 0;
    Push(&myStack, 1);
    Push(&myStack, 2);
    Push(&myStack, 3);

    item = Pop(&myStack);
    printf("%d\n", item);

    item = Pop(&myStack);
    printf("%d\n", item);

    return 0;
}