#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int isFull(void)
{
    return top == MAX - 1;
}

int isEmpty(void)
{
    return top == -1;
}

void push(int value)
{
    if (isFull())
    {
        printf("Stack overflow\n");
    }
    else
    {
        stack[++top] = value;
        printf("Pushed = %d\n", value);
    }
}

int pop(void)
{
    if (isEmpty())
    {
        printf("No element to pop\n");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}

int peek(void)
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return -1;
    }

    return stack[top];
}

void display(void)
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements:\n");

    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }

    printf("\n");
}

int main(void)
{
    pop();

    push(10);
    push(20);
    push(30);

    display();

    printf("Popped = %d\n", pop());
    printf("Top element = %d\n", peek());

    display();

    return 0;
}
