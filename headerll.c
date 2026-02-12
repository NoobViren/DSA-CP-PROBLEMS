#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to create a linked list with a fixed header node
Node* createList() {
    Node* header = createNode(0); // Header node with dummy data
    return header;
}

// Function to traverse the list
void traverseList(Node* header) {
    Node* current = header->next; // Skip the header node
    while (current) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to insert a node after a given node
void insertAfter(Node* ptr, int data) {
    if (!ptr) {
        printf("Invalid node pointer\n");
        return;
    }
    Node* newNode = createNode(data);
    newNode->next = ptr->next;
    ptr->next = newNode;
}

// Function to delete a node after a given node
void deleteAfter(Node* ptr) {
    if (!ptr || !ptr->next) {
        printf("Nothing to delete\n");
        return;
    }
    Node* temp = ptr->next;
    ptr->next = temp->next;
    free(temp);
}

// Function to insert a node at the end of the list
void insertAtLast(Node* header, int data) {
    Node* current = header;
    while (current->next) {
        current = current->next;
    }
    current->next = createNode(data);
}

// Function to delete the last node of the list
void deleteLast(Node* header) {
    if (!header->next) {
        printf("List is empty\n");
        return;
    }
    Node* current = header;
    while (current->next && current->next->next) {
        current = current->next;
    }
    free(current->next);
    current->next = NULL;
}

// Main function to demonstrate the operations
int main() {
    Node* header = createList();

    // List creation
    insertAtLast(header, 10);
    insertAtLast(header, 20);
    insertAtLast(header, 30);
    printf("List after creation: ");
    traverseList(header);

    // Insertion after a node
    insertAfter(header->next, 15); // Insert 15 after 10
    printf("List after insertion after a node: ");
    traverseList(header);

    // Deletion after a node
    deleteAfter(header->next); // Delete node after 10
    printf("List after deletion after a node: ");
    traverseList(header);

    // Insertion at the last
    insertAtLast(header, 40);
    printf("List after insertion at the last: ");
    traverseList(header);

    // Deletion of the last node
    deleteLast(header);
    printf("List after deletion of the last node: ");
    traverseList(header);

    return 0;
}