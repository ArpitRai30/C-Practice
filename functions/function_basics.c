/*
 * Function Basics
 * Demonstrates function declaration, definition, and calling
 * Shows different types of functions and parameter passing
 */

#include <stdio.h>

// Function declarations (prototypes)
void greet(void);
int add(int a, int b);
float calculateArea(float radius);
void swap(int *a, int *b);

int main() {
    int num1 = 10, num2 = 20;
    float radius = 5.0;
    
    // Calling functions
    greet();
    
    int sum = add(num1, num2);
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);
    
    float area = calculateArea(radius);
    printf("Area of circle with radius %.1f is: %.2f\n", radius, area);
    
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}

// Function definitions
void greet(void) {
    printf("Hello! Welcome to C Functions!\n");
}

int add(int a, int b) {
    return a + b;
}

float calculateArea(float radius) {
    const float PI = 3.14159;
    return PI * radius * radius;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}