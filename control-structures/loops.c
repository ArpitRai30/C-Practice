/*
 * Loop Examples
 * Demonstrates for, while, and do-while loops
 * Shows different loop patterns and use cases
 */

#include <stdio.h>

int main() {
    int i, n, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // For loop - print numbers 1 to n
    printf("\nNumbers from 1 to %d using for loop:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // While loop - calculate sum of numbers 1 to n
    i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("Sum of numbers 1 to %d: %d\n", n, sum);
    
    // Do-while loop - menu example
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Display numbers\n");
        printf("2. Calculate sum\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("You chose to display numbers\n");
                break;
            case 2:
                printf("You chose to calculate sum\n");
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 3);
    
    return 0;
}