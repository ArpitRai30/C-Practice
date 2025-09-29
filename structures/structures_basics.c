/*
 * Structures in C
 * Demonstrates structure declaration, initialization, and usage
 * Shows different ways to work with structures
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

// Structure definitions
struct Student {
    int id;
    char name[50];
    float marks;
    char grade;
};

struct Point {
    int x;
    int y;
};

struct Rectangle {
    struct Point topLeft;
    struct Point bottomRight;
};

// Function prototypes
void displayStudent(struct Student s);
float calculateDistance(struct Point p1, struct Point p2);

int main() {
    // Structure initialization methods
    
    // Method 1: Initialize during declaration
    struct Student student1 = {101, "Alice", 85.5, 'A'};
    
    // Method 2: Initialize after declaration
    struct Student student2;
    student2.id = 102;
    strcpy(student2.name, "Bob");
    student2.marks = 78.0;
    student2.grade = 'B';
    
    // Method 3: Designated initializers
    struct Student student3 = {
        .id = 103,
        .name = "Charlie",
        .marks = 92.0,
        .grade = 'A'
    };
    
    // Display student information
    printf("Student Information:\n");
    displayStudent(student1);
    displayStudent(student2);
    displayStudent(student3);
    
    // Working with nested structures
    struct Rectangle rect = {{0, 0}, {10, 5}};
    printf("\nRectangle coordinates:\n");
    printf("Top-left: (%d, %d)\n", rect.topLeft.x, rect.topLeft.y);
    printf("Bottom-right: (%d, %d)\n", rect.bottomRight.x, rect.bottomRight.y);
    
    // Calculate distance between points
    float distance = calculateDistance(rect.topLeft, rect.bottomRight);
    printf("Distance between points: %.2f\n", distance);
    
    return 0;
}

void displayStudent(struct Student s) {
    printf("ID: %d, Name: %s, Marks: %.1f, Grade: %c\n",
           s.id, s.name, s.marks, s.grade);
}

float calculateDistance(struct Point p1, struct Point p2) {
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}