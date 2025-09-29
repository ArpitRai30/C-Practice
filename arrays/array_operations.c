/*
 * Array Operations
 * Demonstrates array declaration, initialization, and basic operations
 * Shows 1D and 2D arrays with common operations
 */

#include <stdio.h>

int main() {
    // 1D Array examples
    int numbers[5] = {10, 20, 30, 40, 50};
    int size = 5;
    
    // Display array elements
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    
    // Calculate sum and average
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    float average = (float)sum / size;
    printf("Sum: %d, Average: %.2f\n", sum, average);
    
    // Find maximum and minimum
    int max = numbers[0], min = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) max = numbers[i];
        if (numbers[i] < min) min = numbers[i];
    }
    printf("Maximum: %d, Minimum: %d\n", max, min);
    
    // 2D Array example
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    printf("\n2D Array (Matrix):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}