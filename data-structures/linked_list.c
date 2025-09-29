/*
 * Linked List Implementation
 * Demonstrates singly linked list operations
 * Shows insertion, deletion, traversal, and search
 */

#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function prototypes
Node* createNode(int data);
void insertAtBeginning(Node** head, int data);
void insertAtEnd(Node** head, int data);
void insertAtPosition(Node** head, int data, int position);
void deleteByValue(Node** head, int value);
void deleteAtPosition(Node** head, int position);
Node* search(Node* head, int value);
void displayList(Node* head);
int getLength(Node* head);
void freeList(Node** head);

int main() {
    Node* head = NULL;
    
    printf("Linked List Operations Demo:\n");
    
    // Insert elements
    printf("\nInserting elements:\n");
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    insertAtPosition(&head, 25, 2);
    
    displayList(head);
    printf("Length of list: %d\n", getLength(head));
    
    // Search for element
    Node* found = search(head, 25);
    if (found) {
        printf("Element 25 found in the list\n");
    } else {
        printf("Element 25 not found in the list\n");
    }
    
    // Delete elements
    printf("\nDeleting element 20:\n");
    deleteByValue(&head, 20);
    displayList(head);
    
    printf("\nDeleting element at position 1:\n");
    deleteAtPosition(&head, 1);
    displayList(head);
    
    // Free memory
    freeList(&head);
    printf("List memory freed.\n");
    
    return 0;
}

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

void insertAtPosition(Node** head, int data, int position) {
    if (position < 0) {
        printf("Invalid position!\n");
        return;
    }
    
    if (position == 0) {
        insertAtBeginning(head, data);
        return;
    }
    
    Node* newNode = createNode(data);
    Node* current = *head;
    
    for (int i = 0; i < position - 1 && current != NULL; i++) {
        current = current->next;
    }
    
    if (current == NULL) {
        printf("Position out of bounds!\n");
        free(newNode);
        return;
    }
    
    newNode->next = current->next;
    current->next = newNode;
}

void deleteByValue(Node** head, int value) {
    if (*head == NULL) {
        printf("List is empty!\n");
        return;
    }
    
    if ((*head)->data == value) {
        Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    
    Node* current = *head;
    while (current->next != NULL && current->next->data != value) {
        current = current->next;
    }
    
    if (current->next == NULL) {
        printf("Element %d not found!\n", value);
        return;
    }
    
    Node* temp = current->next;
    current->next = current->next->next;
    free(temp);
}

void deleteAtPosition(Node** head, int position) {
    if (*head == NULL || position < 0) {
        printf("Invalid operation!\n");
        return;
    }
    
    if (position == 0) {
        Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    
    Node* current = *head;
    for (int i = 0; i < position - 1 && current != NULL; i++) {
        current = current->next;
    }
    
    if (current == NULL || current->next == NULL) {
        printf("Position out of bounds!\n");
        return;
    }
    
    Node* temp = current->next;
    current->next = current->next->next;
    free(temp);
}

Node* search(Node* head, int value) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == value) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

void displayList(Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    
    printf("List: ");
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int getLength(Node* head) {
    int length = 0;
    Node* current = head;
    while (current != NULL) {
        length++;
        current = current->next;
    }
    return length;
}

void freeList(Node** head) {
    Node* current = *head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
    *head = NULL;
}