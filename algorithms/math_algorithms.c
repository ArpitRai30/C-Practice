/*
 * Mathematical Algorithms
 * Demonstrates common mathematical algorithms
 * Includes GCD, LCM, Prime checking, and Factorial
 */

#include <stdio.h>

// Function prototypes
int gcd(int a, int b);
int lcm(int a, int b);
int isPrime(int n);
long long factorial(int n);
int fibonacci(int n);

int main() {
    int num1 = 48, num2 = 18;
    int n = 10;
    
    // GCD and LCM
    printf("GCD of %d and %d: %d\n", num1, num2, gcd(num1, num2));
    printf("LCM of %d and %d: %d\n", num1, num2, lcm(num1, num2));
    
    // Prime checking
    printf("\nPrime numbers up to %d:\n", 20);
    for (int i = 2; i <= 20; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    // Factorial
    printf("\nFactorial of %d: %lld\n", n, factorial(n));
    
    // Fibonacci series
    printf("\nFibonacci series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    
    return 0;
}

// Greatest Common Divisor using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Least Common Multiple
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

// Calculate factorial
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Calculate nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}