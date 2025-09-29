/*
 * Recursion Examples
 * Demonstrates recursive functions
 * Shows factorial, fibonacci, and power calculation
 */

#include <stdio.h>

// Recursive function declarations
int factorial(int n);
int fibonacci(int n);
int power(int base, int exp);

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Factorial calculation
    printf("Factorial of %d is: %d\n", num, factorial(num));
    
    // Fibonacci series
    printf("Fibonacci series up to %d terms:\n", num);
    for (int i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    
    // Power calculation
    int base = 2;
    printf("%d raised to power %d is: %d\n", base, num, power(base, num));
    
    return 0;
}

// Recursive factorial function
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Recursive fibonacci function
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Recursive power function
int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * power(base, exp - 1);
}