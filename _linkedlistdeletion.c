#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlsttravesal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
// case1: deleting the first element from the linkedlist
struct Node *deletefirst(struct Node *head)
{
    /* data */ struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
};
// case2: deleting the element at a given index in the linked list
struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
};
// case3: deleting the last element in the linked list
struct Node *deleteLastIndex(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
};

// case 4: deleting the element at a given index in the linked list
struct Node *deleteAtNode(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
        return head;
    }
};

// void deletefirst(int head);
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

    printf("Linkeed list before deletion");
    linkedlsttravesal(head);

    // head = deletefirst(head);  //delete first element of linked list
    // head = deleteAtIndex(head, 2); deleting the element at a given index in the linked list
    // head = deleteLastIndex(head); // deleting last index of linked list
    head = deleteAtNode(head, 15);
    printf("linked list after deletion");
    linkedlsttravesal(head);
    return 0;
}
