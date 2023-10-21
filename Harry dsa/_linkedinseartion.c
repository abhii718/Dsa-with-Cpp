

// Insertion At first between and last

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
// case 1
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
};

// case 2
struct Node *insertAtBetween(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
};

// case 3
struct Node *insertAtLast(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;

    ptr->next = head;
    return ptr;
};

// case 4
struct Node *insertAfternode(struct Node *head, struct Node *previousnode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = previousnode->next;
    previousnode->next = ptr;

    return head;
};
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

    printf("Linked list before insertion\n");
    linkedinseartion(head);

    printf("Linked list at first insertion\n");
    head = insertAtFirst(head, 1);
    linkedinseartion(head);

    printf("Linked list at Between insertion\n");
    head = insertAtBetween(head, 50, 3);
    linkedinseartion(head);

    printf("Linked list at Last insertion\n");
    head = insertAtLast(head, 100);
    linkedinseartion(head);

    printf("Linked list at previnode insertion\n");
    head = insertAfternode(head, second, 110);
    linkedinseartion(head);

    return 0;
}