/*
 * Stack Implementation
 * Demonstrates stack data structure using arrays
 * Shows push, pop, peek, and other stack operations
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

// Function prototypes
void initStack(Stack *s);
int isEmpty(Stack *s);
int isFull(Stack *s);
void push(Stack *s, int value);
int pop(Stack *s);
int peek(Stack *s);
void displayStack(Stack *s);

int main() {
    Stack stack;
    initStack(&stack);
    
    printf("Stack Operations Demo:\n");
    
    // Push elements
    printf("\nPushing elements: 10, 20, 30, 40, 50\n");
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    push(&stack, 40);
    push(&stack, 50);
    
    displayStack(&stack);
    
    // Peek top element
    printf("Top element: %d\n", peek(&stack));
    
    // Pop elements
    printf("\nPopping elements:\n");
    while (!isEmpty(&stack)) {
        printf("Popped: %d\n", pop(&stack));
    }
    
    printf("Stack is now empty.\n");
    
    return 0;
}

void initStack(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack overflow! Cannot push %d\n", value);
        return;
    }
    s->items[++s->top] = value;
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow! Cannot pop from empty stack\n");
        return -1;
    }
    return s->items[s->top--];
}

int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty! Cannot peek\n");
        return -1;
    }
    return s->items[s->top];
}

void displayStack(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    
    printf("Stack contents (top to bottom): ");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}