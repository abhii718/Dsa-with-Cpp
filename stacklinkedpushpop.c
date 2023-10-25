#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedinseartion(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Node *top)
{
    return 0; // A linked list-based stack is rarely considered full.
}

struct Node *push(struct Node *top, int x)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Overflow\n");
        return top;
    }
    n->data = x;
    n->next = top;
    top = n;
    return top;
}

int pop(struct Node **top)
{
    if (isEmpty(*top))
    {
        printf("Stack underflow\n");
        return -1; // Return a sentinel value to indicate underflow.
    }
    else
    {
        struct Node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main()
{
    struct Node *top = NULL;
    top = push(top, 78);
    top = push(top, 8);
    top = push(top, 68);
    top = push(top, 71);
    top = push(top, 18);

    int element = pop(&top); // Pass the address of 'top' to update it in the pop function.
    if (element != -1)
    {
        printf("Popped element is %d\n", element);
    }

    linkedinseartion(top);

    return 0;
}
