#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlsttravesal(struct Node *ptr)
{
    while (ptr !=NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in the heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Linked first and second node
    head->data = 7;
    head->next = second;

    // Linked second and third node
    second->data = 11;
    second->next = third;

    // Linked third and fourth node
    third->data = 15;
    third->next = fourth;

    // Linked fourth and first node
    fourth->data = 120;
    fourth->next = NULL;

    linkedlsttravesal(head);

    return 0;
}
