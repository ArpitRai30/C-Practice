/*
 * Sorting Algorithms
 * Demonstrates different sorting algorithms
 * Includes Bubble Sort, Selection Sort, and Insertion Sort
 */

#include <stdio.h>

// Function prototypes
void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);
void printArray(int arr[], int n);

int main() {
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int arr2[] = {64, 34, 25, 12, 22, 11, 90};
    int arr3[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    
    printf("Original array: ");
    printArray(arr1, n);
    
    // Bubble Sort
    bubbleSort(arr1, n);
    printf("After Bubble Sort: ");
    printArray(arr1, n);
    
    // Selection Sort
    selectionSort(arr2, n);
    printf("After Selection Sort: ");
    printArray(arr2, n);
    
    // Insertion Sort
    insertionSort(arr3, n);
    printf("After Insertion Sort: ");
    printArray(arr3, n);
    
    return 0;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        // Move elements greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}