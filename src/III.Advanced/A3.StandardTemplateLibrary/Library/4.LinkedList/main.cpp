#include <iostream>

// Node của Linked List
struct Node
{
    int data;
    Node *next;
};

// Hàm thêm node vào đầu Linked List
void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Hàm in Linked List
void printList(Node *node)
{
    while (node != nullptr)
    {
        std::cout << node->data << " ";
        node = node->next;
    }
    std::cout << std::endl;
}

int main()
{
    Node *head = nullptr;

    // Thêm phần tử vào Linked List
    push(&head, 50);
    push(&head, 40);
    push(&head, 30);
    push(&head, 20);
    push(&head, 10);

    // In Linked List
    printList(head);

    return 0;
}
