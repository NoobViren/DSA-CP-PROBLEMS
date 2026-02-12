#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* insertAtBeginning(struct Node* head, int value);
struct Node* insertAtEnd(struct Node* head, int value);
struct Node* deleteFirst(struct Node* head);
struct Node* deleteLast(struct Node* head);
struct Node* deleteNode(struct Node* head, int n);
struct Node* deleteList(struct Node* head);
void displayList(struct Node* head);

int main() {
    struct Node* head = NULL;
    int choice, value;

    do {
        printf("\n1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Delete first node\n");
        printf("4. Delete last node\n");
        printf("5. Delete node with specific value\n");
        printf("6. Delete entire list\n");
        printf("7. Display list\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                head = insertAtBeginning(head, value);
                break;
            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                head = insertAtEnd(head, value);
                break;
            case 3:
                head = deleteFirst(head);
                break;
            case 4:
                head = deleteLast(head);
                break;
            case 5:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                head = deleteNode(head, value);
                break;
            case 6:
                head = deleteList(head);
                printf("List deleted successfully\n");
                break;
            case 7:
                displayList(head);
                break;
        }
    } while (choice != 8);

    return 0;
}


struct Node* insertAtBeginning(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    return newNode;
}


struct Node* insertAtEnd(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}


struct Node* deleteFirst(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }
    struct Node* temp = head->next;
    free(head);
    return temp;
}


struct Node* deleteLast(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }
    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}


struct Node* deleteNode(struct Node* head, int n) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    if (head->data == n) {
        struct Node* temp = head->next;
        free(head);
        return temp;
    }

    struct Node* temp = head;
    while (temp->next != NULL && temp->next->data != n) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        printf("Value not found\n");
        return head;
    }

    struct Node* toDelete = temp->next;
    temp->next = temp->next->next;
    free(toDelete);
    return head;
}


struct Node* deleteList(struct Node* head) {
    struct Node* current = head;
    struct Node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    return NULL;
}


void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}