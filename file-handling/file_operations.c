/*
 * File Handling in C
 * Demonstrates file operations: create, read, write, append
 * Shows different file modes and error handling
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[] = "sample.txt";
    char content[] = "This is a sample file created by C program.\nSecond line of the file.\n";
    char buffer[256];
    
    // Writing to file
    printf("Writing to file '%s'...\n", filename);
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Could not create file!\n");
        return 1;
    }
    
    fprintf(file, "%s", content);
    fclose(file);
    printf("File written successfully!\n");
    
    // Reading from file
    printf("\nReading from file '%s':\n", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file for reading!\n");
        return 1;
    }
    
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);
    
    // Appending to file
    printf("\nAppending to file '%s'...\n", filename);
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Could not open file for appending!\n");
        return 1;
    }
    
    fprintf(file, "This line was appended.\n");
    fclose(file);
    
    // Reading again to show appended content
    printf("\nFile content after appending:\n");
    file = fopen(filename, "r");
    if (file != NULL) {
        while (fgets(buffer, sizeof(buffer), file) != NULL) {
            printf("%s", buffer);
        }
        fclose(file);
    }
    
    // Character-by-character reading
    printf("\nReading character by character:\n");
    file = fopen(filename, "r");
    if (file != NULL) {
        char ch;
        int charCount = 0;
        while ((ch = fgetc(file)) != EOF) {
            charCount++;
        }
        printf("Total characters in file: %d\n", charCount);
        fclose(file);
    }
    
    return 0;
}