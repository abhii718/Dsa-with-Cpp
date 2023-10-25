#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* push(struct Node* top, int x) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    if (!n) {
        printf("Overflow\n");
        return top;
    }
    n->data = x;
    n->next = top;
    return n;
}

int pop(struct Node** top) {
    if (!*top) {
        printf("Stack underflow\n");
        return -1;
    }
    struct Node* n = *top;
    *top = n->next;
    int x = n->data;
    free(n);
    return x;
}

void printStack(struct Node* top) {
    while (top) {
        printf("Element: %d\n", top->data);
        top = top->next;
    }
}

int main() {
    struct Node* top = NULL;
    top = push(top, 78);
    top = push(top, 8);
    top = push(top, 68);
    top = push(top, 69);

    printStack(top);

    for (int i = 1; i <= 4; i++) {
        printf("Value at position %d: %d\n", i, top ? top->data : -1);
        if (top) {
            top = top->next;
        }
    }

    return 0;
}
