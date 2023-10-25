struct Node *insertAfternode(struct Node *head, struct Node *previousnode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = previousnode->next;
    previousnode->next = ptr;

    return head;
};