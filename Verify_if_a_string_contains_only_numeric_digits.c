#include <stdio.h>
#include <stdbool.h>

// Function to check if a string contains only numeric digits
bool is_Numeric_String(char *str) {
    if (str[0] == '\0') return false;  // Empty string is not numeric

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return false;  // If any non-digit character is found
        }
    }
    return true;
}

int main() {
    char str1[] = "123456";
    char str2[] = "123a45";

    printf("Is \"%s\" numeric? %s\n", str1, is_Numeric_String(str1) ? "Yes" : "No");
    printf("Is \"%s\" numeric? %s\n", str2, is_Numeric_String(str2) ? "Yes" : "No");

    return 0;
}
