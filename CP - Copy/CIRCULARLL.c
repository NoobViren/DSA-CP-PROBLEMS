#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int data);
void traverseList(struct Node* head);
int countNodes(struct Node* head);
struct Node* insertAfter(struct Node* head, struct Node* ptr, int data);
struct Node* deleteAfter(struct Node* head, struct Node* ptr);
struct Node* insertFront(struct Node* head, int data);
struct Node* deleteFront(struct Node* head);
struct Node* insertLast(struct Node* head, int data);
struct Node* deleteLast(struct Node* head);


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = newNode; // Points to itself initially
    return newNode;
}


int countNodes(struct Node* head) {
    if (head == NULL) return 0;
    int count = 1;
    struct Node* current = head->next;
    while (current != head) {
        count++;
        current = current->next;
    }
    return count;
}


void traverseList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* current = head;
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);
    printf("(head)\n");
}


struct Node* insertAfter(struct Node* head, struct Node* ptr, int data) {
    if (head == NULL || ptr == NULL) return head;
    struct Node* newNode = createNode(data);
    newNode->next = ptr->next;
    ptr->next = newNode;
    return head;
}


struct Node* deleteAfter(struct Node* head, struct Node* ptr) {
    if (head == NULL || ptr == NULL || ptr->next == head) return head;
    struct Node* temp = ptr->next;
    ptr->next = temp->next;
    free(temp);
    return head;
}


struct Node* insertFront(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) return newNode;
    struct Node* last = head;
    while (last->next != head) last = last->next;
    newNode->next = head;
    last->next = newNode;
    return newNode;
}


struct Node* deleteFront(struct Node* head) {
    if (head == NULL) return NULL;
    if (head->next == head) {
        free(head);
        return NULL;
    }
    struct Node* last = head;
    while (last->next != head) last = last->next;
    struct Node* newHead = head->next;
    last->next = newHead;
    free(head);
    return newHead;
}


struct Node* insertLast(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) return newNode;
    struct Node* last = head;
    while (last->next != head) last = last->next;
    last->next = newNode;
    newNode->next = head;
    return head;
}


struct Node* deleteLast(struct Node* head) {
    if (head == NULL) return NULL;
    if (head->next == head) {
        free(head);
        return NULL;
    }
    struct Node* current = head;
    struct Node* prev = NULL;
    while (current->next != head) {
        prev = current;
        current = current->next;
    }
    prev->next = head;
    free(current);
    return head;
}


int main() {
    struct Node* head = NULL;
    
    
    head = insertFront(head, 10);
    head = insertFront(head, 20);
    head = insertLast(head, 30);
    
    printf("Initial list: ");
    traverseList(head);
    
    printf("Number of nodes: %d\n", countNodes(head));
    
    
    
    return 0;
}