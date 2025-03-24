#include <stdio.h>
#include <string.h>

// Function to swap two characters
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Function to generate all permutations
void generate_Permutations(char *str, int left, int right) {
    if (left == right) {
        printf("%s\n", str);  // Print the permutation
        return;
    }

    for (int i = left; i <= right; i++) {
        swap(&str[left], &str[i]);  // Swap characters
        generate_Permutations(str, left + 1, right);  // Recurse for next position
        swap(&str[left], &str[i]);  // Backtrack to restore original order
    }
}

int main() {
    char str[] = "ABC";
    int n = strlen(str);

    printf("Permutations of %s:\n", str);
    generate_Permutations(str, 0, n - 1);

    return 0;
}
