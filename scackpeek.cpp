#include <iostream>

struct Node {
    int data;
    Node* next;
};

Node* push(Node* top, int x) {
    Node* n = new Node;
    n->data = x;
    n->next = top;
    return n;
}

int pop(Node*& top) {
    if (!top) {
        std::cout << "Stack underflow" << std::endl;
        return -1;
    }
    Node* n = top;
    top = n->next;
    int x = n->data;
    delete n;
    return x;
}

void printStack(Node* top) {
    while (top) {
        std::cout << "Element: " << top->data << std::endl;
        top = top->next;
    }
}

int main() {
    Node* top = nullptr;
    top = push(top, 78);
    top = push(top, 8);
    top = push(top, 68);
    top = push(top, 69);

    printStack(top);

    for (int i = 1; i <= 4; i++) {
        std::cout << "Value at position " << i << ": " << (top ? top->data : -1) << std::endl;
        if (top) {
            top = top->next;
        }
    }

    return 0;
}
