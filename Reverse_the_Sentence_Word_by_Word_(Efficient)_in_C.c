#include <stdio.h>
#include <string.h>

// Function to reverse a portion of a string
void reverse(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to reverse the sentence word by word
void reverseSentence(char *str) {
    int n = strlen(str);

    // Step 1: Reverse the entire string
    reverse(str, 0, n - 1);

    // Step 2: Reverse each word in the reversed string
    int start = 0, end = 0;
    while (end < n) {
        if (str[end] == ' ' || str[end] == '\0') {
            reverse(str, start, end - 1);
            start = end + 1;
        }
        end++;
    }
    
    // Reverse the last word
    reverse(str, start, end - 1);
}

int main() {
    char str[] = "Hello World in C";

    printf("Original: %s\n", str);
    reverseSentence(str);
    printf("Reversed: %s\n", str);

    return 0;
}
