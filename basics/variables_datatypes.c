/*
 * Variables and Data Types
 * Demonstrates different data types in C
 * Shows variable declaration and initialization
 */

#include <stdio.h>

int main() {
    // Integer types
    int age = 25;
    short marks = 95;
    long population = 1000000L;
    
    // Floating point types
    float temperature = 36.5f;
    double pi = 3.14159265359;
    
    // Character type
    char grade = 'A';
    
    // Boolean (using int)
    int isStudent = 1; // 1 for true, 0 for false
    
    // Printing values
    printf("Age: %d\n", age);
    printf("Marks: %d\n", marks);
    printf("Population: %ld\n", population);
    printf("Temperature: %.1f\n", temperature);
    printf("Pi: %.10lf\n", pi);
    printf("Grade: %c\n", grade);
    printf("Is Student: %s\n", isStudent ? "Yes" : "No");
    
    return 0;
}