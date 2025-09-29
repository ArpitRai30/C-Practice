/*
 * Input and Output Operations
 * Demonstrates scanf() and printf() functions
 * Shows how to read user input and display output
 */

#include <stdio.h>

int main() {
    int num1, num2, sum;
    float decimal;
    char character;
    
    // Getting input from user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Enter a decimal number: ");
    scanf("%f", &decimal);
    
    printf("Enter a character: ");
    scanf(" %c", &character); // Note the space before %c
    
    // Calculating sum
    sum = num1 + num2;
    
    // Displaying results
    printf("\nResults:\n");
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);
    printf("Decimal number: %.2f\n", decimal);
    printf("Character entered: %c\n", character);
    
    return 0;
}