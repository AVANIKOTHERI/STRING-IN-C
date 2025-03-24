#include <stdio.h>

// Function to remove all spaces from a string
void remove_All_Spaces(char *str) {
    int i = 0, j = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j++] = str[i];  // Copy non-space characters
        }
        i++;
    }
    str[j] = '\0';  // Null-terminate the modified string
}

int main() {
    char str[] = "Remove all spaces from a string.";

    printf("Original: %s\n", str);
    remove_All_Spaces(str);
    printf("Without Spaces: %s\n", str);

    return 0;
}
