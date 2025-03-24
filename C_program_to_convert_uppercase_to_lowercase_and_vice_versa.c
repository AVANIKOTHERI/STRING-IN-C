#include <stdio.h>

// Function to swap case of each character
void convert_Uppercase_To_Lowercase_And_Vice_Versa(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');  // Convert uppercase to lowercase
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // Convert lowercase to uppercase
        }
    }
}

int main() {
    char str[] = "Hello World 123!";

    printf("Original: %s\n", str);
    convert_Uppercase_To_Lowercase_And_Vice_Versa(str);
    printf("Converted: %s\n", str);

    return 0;
}
