/*
 * Array Searching and Sorting
 * Demonstrates linear search, binary search, and bubble sort
 * Shows how to implement common array algorithms
 */

#include <stdio.h>

// Function prototypes
int linearSearch(int arr[], int size, int target);
int binarySearch(int arr[], int left, int right, int target);
void bubbleSort(int arr[], int size);
void printArray(int arr[], int size);

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 25;
    
    printf("Original array:\n");
    printArray(arr, size);
    
    // Linear search
    int index = linearSearch(arr, size, target);
    if (index != -1) {
        printf("Linear Search: Element %d found at index %d\n", target, index);
    } else {
        printf("Linear Search: Element %d not found\n", target);
    }
    
    // Sort the array
    bubbleSort(arr, size);
    printf("\nSorted array:\n");
    printArray(arr, size);
    
    // Binary search (works on sorted array)
    index = binarySearch(arr, 0, size - 1, target);
    if (index != -1) {
        printf("Binary Search: Element %d found at index %d\n", target, index);
    } else {
        printf("Binary Search: Element %d not found\n", target);
    }
    
    return 0;
}

// Linear search implementation
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; // Not found
}

// Binary search implementation (recursive)
int binarySearch(int arr[], int left, int right, int target) {
    if (right >= left) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target)
            return mid;
        
        if (arr[mid] > target)
            return binarySearch(arr, left, mid - 1, target);
        
        return binarySearch(arr, mid + 1, right, target);
    }
    return -1; // Not found
}

// Bubble sort implementation
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Print array function
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}