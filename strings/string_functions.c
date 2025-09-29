/*
 * String Functions
 * Demonstrates custom string functions
 * Shows how to implement common string operations
 */

#include <stdio.h>

// Custom string function prototypes
int stringLength(char str[]);
void stringCopy(char dest[], char src[]);
void stringConcat(char dest[], char src[]);
int stringCompare(char str1[], char str2[]);
void stringReverse(char str[]);
int isPalindrome(char str[]);

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];
    char palindrome[] = "radar";
    
    // Test custom functions
    printf("Length of '%s': %d\n", str1, stringLength(str1));
    
    stringCopy(str3, str1);
    printf("Copied string: %s\n", str3);
    
    stringConcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    
    int result = stringCompare("abc", "abc");
    printf("Comparison result: %d\n", result);
    
    printf("Original: %s\n", str2);
    stringReverse(str2);
    printf("Reversed: %s\n", str2);
    
    if (isPalindrome(palindrome)) {
        printf("'%s' is a palindrome\n", palindrome);
    } else {
        printf("'%s' is not a palindrome\n", palindrome);
    }
    
    return 0;
}

// Custom string length function
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Custom string copy function
void stringCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Custom string concatenation function
void stringConcat(char dest[], char src[]) {
    int destLen = stringLength(dest);
    int i = 0;
    while (src[i] != '\0') {
        dest[destLen + i] = src[i];
        i++;
    }
    dest[destLen + i] = '\0';
}

// Custom string comparison function
int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) return -1;
        if (str1[i] > str2[i]) return 1;
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') return 0;
    return (str1[i] == '\0') ? -1 : 1;
}

// String reverse function
void stringReverse(char str[]) {
    int length = stringLength(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

// Check if string is palindrome
int isPalindrome(char str[]) {
    int length = stringLength(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}