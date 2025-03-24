#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_CHAR 256  // Total possible ASCII characters

// Function to remove duplicate characters from a string
void remove_Duplicate_Characters(char *str) {
    bool seen[MAX_CHAR] = {false};  // Array to track seen characters
    int index = 0;  // Index for new string

    for (int i = 0; str[i] != '\0'; i++) {
        if (!seen[(unsigned char)str[i]]) {
            seen[(unsigned char)str[i]] = true;
            str[index++] = str[i];  // Keep unique character
        }
    }
    str[index] = '\0';  // Null-terminate the modified string
}

int main() {
    char str[] = "programming";

    printf("Original: %s\n", str);
    remove_Duplicate_Characters(str);
    printf("Without Duplicates: %s\n", str);

    return 0;
}
