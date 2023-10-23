#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    return (ptr->top == -1);
}

int isFull(struct stack *ptr)
{
    return (ptr->top == ptr->size - 1);
}

int main()
{
    struct stack s;
    s.size = 80;
    s.top = -1;
    s.arr = (int *)malloc(s.size * sizeof(int));

    if (s.arr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    // Pushing an element
    s.arr[0] = 7;
    s.top++;

    // Check if stack is empty
    if (isEmpty(&s))
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack is not empty\n");
    }

    free(s.arr); // Free allocated memory

    return 0;
}
