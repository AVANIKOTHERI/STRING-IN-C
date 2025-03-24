#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256  // Total possible ASCII characters

// Function to find the first non-repeating character
char first_Non_Repeating_Character(char *str) {
    int count[MAX_CHAR] = {0};  // Array to store character frequencies

    // Step 1: Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Step 2: Find the first character with frequency 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0';  // Return null character if no non-repeating character found
}

int main() {
    char str[] = "swiss";

    char result = first_Non_Repeating_Character(str);

    if (result != '\0') {
        printf("First non-repeating character: %c\n", result);
    } else {
        printf("No non-repeating character found.\n");
    }

    return 0;
}
