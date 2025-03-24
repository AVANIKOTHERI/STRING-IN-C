#include <stdio.h>
#include <ctype.h>

// Function to count vowels and consonants
void count_Vowels_And_Consonants(char *str, int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert to lowercase for uniformity

        if ((ch >= 'a' && ch <= 'z')) { // Check if it's a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
    }
}

int main() {
    char str[] = "Hello World in C";
    int vowels, consonants;

    count_Vowels_And_Consonants(str, &vowels, &consonants);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
