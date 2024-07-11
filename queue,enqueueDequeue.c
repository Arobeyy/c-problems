#include <stdio.h>
#define Q_SIZE 10

typedef struct
{
    int data[Q_SIZE + 1];
    int head, tail;
} queue;

void enqueue(int value, queue *q)
{
    if ((q->tail + 1) % (Q_SIZE + 1) == q->head)
    {
        printf("array is full!");
        return;
    }

    q->data[q->tail] = value;
    q->tail = (q->tail + 1) % (Q_SIZE + 1);
}

int dequeue(queue *q)
{
    int item;

    if (q->head == q->tail)
    {
        printf("array is empty!");
        return -1;
    }

    item = q->data[q->head];
    q->head = (q->head + 1) % (Q_SIZE + 1);
    return item;
}

int main()
{
    queue myqueue;
    int value;

    myqueue.head = 0;
    myqueue.tail = 0;

    enqueue(2, &myqueue);
    enqueue(3, &myqueue);
    enqueue(4, &myqueue);
    printf("%d", dequeue(&myqueue));

    return 0;
}
