#include <stdio.h>

#define SIZE 5

void enqueue(int);
void dequeue(void);
void display(void);

int item[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }

        rear++;
        item[rear] = value;

        printf("Inserted: %d\n", value);
    }
}

void dequeue(void)
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Deleted: %d\n", item[front]);
        front++;

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

void display(void)
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Elements: ");

        for (i = front; i <= rear; i++)
        {
            printf("%d ", item[i]);
        }

        printf("\n");
    }
}

int main(void)
{
    dequeue();

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    display();

    dequeue();
    display();

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    return 0;
}
