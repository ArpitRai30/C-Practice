/*
 * If-Else Statements
 * Demonstrates conditional statements in C
 * Shows nested if-else and else-if constructs
 */

#include <stdio.h>

int main() {
    int marks;
    
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);
    
    // Simple if-else
    if (marks >= 40) {
        printf("You passed!\n");
    } else {
        printf("You failed. Better luck next time!\n");
    }
    
    // Nested if-else for grade calculation
    if (marks >= 90) {
        printf("Grade: A+ (Excellent)\n");
    } else if (marks >= 80) {
        printf("Grade: A (Very Good)\n");
    } else if (marks >= 70) {
        printf("Grade: B (Good)\n");
    } else if (marks >= 60) {
        printf("Grade: C (Average)\n");
    } else if (marks >= 40) {
        printf("Grade: D (Pass)\n");
    } else {
        printf("Grade: F (Fail)\n");
    }
    
    return 0;
}