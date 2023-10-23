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
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf(" %d stack overflow \n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("  stack underflow cannot pop from the stacks %d\n:");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    printf("stack had been created successfully\n");

    printf("before pushing ,Full %d\n", isFull(sp));
    printf("before pushing ,Full %d\n", isEmpty(sp));
    push(sp, 65);
    push(sp, 65);
    push(sp, 65);
    push(sp, 65);
    push(sp, 65);
    push(sp, 65);
    push(sp, 65);
    push(sp, 65);
    push(sp, 1);
    push(sp, 2);
    push(sp, 3);
    push(sp, 4);
    push(sp, 5);
    printf(" after pushing, Full : %d\n", isFull(sp));
    printf(" after pushing, Empty : %d\n", isEmpty(sp));

    printf("%d from the stacks \n", pop(sp));

    return 0;
}