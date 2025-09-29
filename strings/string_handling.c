/*
 * String Handling
 * Demonstrates string operations and functions
 * Shows string input, output, and manipulation
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];
    char input[100];
    
    // String input
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    
    // Remove newline from fgets
    input[strcspn(input, "\n")] = 0;
    
    printf("You entered: %s\n", input);
    
    // String length
    printf("Length of '%s': %lu\n", str1, strlen(str1));
    
    // String copy
    strcpy(str3, str1);
    printf("After copying str1 to str3: %s\n", str3);
    
    // String concatenation
    strcat(str1, " ");
    strcat(str1, str2);
    printf("After concatenation: %s\n", str1);
    
    // String comparison
    if (strcmp(str2, "World") == 0) {
        printf("str2 is equal to 'World'\n");
    }
    
    // Character by character processing
    printf("Characters in '%s':\n", input);
    for (int i = 0; input[i] != '\0'; i++) {
        printf("input[%d] = '%c'\n", i, input[i]);
    }
    
    return 0;
}