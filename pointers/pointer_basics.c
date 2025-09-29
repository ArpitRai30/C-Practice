/*
 * Pointer Basics
 * Demonstrates pointer declaration, initialization, and operations
 * Shows address-of (&) and dereference (*) operators
 */

#include <stdio.h>

int main() {
    int num = 42;
    int *ptr; // Pointer declaration
    
    ptr = &num; // Pointer initialization
    
    printf("Variable and Pointer Information:\n");
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value of ptr (address it points to): %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);
    printf("Address of ptr itself: %p\n", (void*)&ptr);
    
    // Modifying value through pointer
    *ptr = 100;
    printf("\nAfter modifying through pointer:\n");
    printf("Value of num: %d\n", num);
    printf("Value pointed to by ptr: %d\n", *ptr);
    
    // Pointer arithmetic
    int arr[] = {10, 20, 30, 40, 50};
    int *arrPtr = arr; // Points to first element
    
    printf("\nPointer Arithmetic with Arrays:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, *(arrPtr + %d) = %d\n", 
               i, arr[i], i, *(arrPtr + i));
    }
    
    return 0;
}