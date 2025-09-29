/*
 * Pointers and Functions
 * Demonstrates pass by value vs pass by reference
 * Shows how pointers enable functions to modify variables
 */

#include <stdio.h>

// Function prototypes
void passByValue(int x);
void passByReference(int *x);
void swapValues(int *a, int *b);
int* findMax(int arr[], int size);

int main() {
    int num = 10;
    
    printf("Original value: %d\n", num);
    
    // Pass by value - doesn't change original
    passByValue(num);
    printf("After pass by value: %d\n", num);
    
    // Pass by reference - changes original
    passByReference(&num);
    printf("After pass by reference: %d\n", num);
    
    // Swapping values using pointers
    int a = 5, b = 15;
    printf("\nBefore swap: a = %d, b = %d\n", a, b);
    swapValues(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
    
    // Finding maximum using pointer return
    int numbers[] = {23, 67, 12, 89, 45};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int *maxPtr = findMax(numbers, size);
    printf("\nMaximum value in array: %d\n", *maxPtr);
    printf("Address of maximum element: %p\n", (void*)maxPtr);
    
    return 0;
}

void passByValue(int x) {
    x = x * 2;
    printf("Inside passByValue: %d\n", x);
}

void passByReference(int *x) {
    *x = *x * 2;
    printf("Inside passByReference: %d\n", *x);
}

void swapValues(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int* findMax(int arr[], int size) {
    int *maxPtr = &arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *maxPtr) {
            maxPtr = &arr[i];
        }
    }
    return maxPtr;
}