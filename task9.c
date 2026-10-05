#include <stdio.h>

int main() {

    char word[50];
    int length = 0;
    int vowels = 0, consonants = 0;
    int palindrome = 1;

    printf("Enter a word: ");
    scanf("%s", word);

    // 1. Original word
    printf("Original word: %s\n", word);

    // 2. Find length
    while (word[length] != '\0') {
        length++;
    }

    printf("Length: %d\n", length);

    // 3. Reverse the word
    printf("Reverse: ");

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", word[i]);
    }

    printf("\n");

    // 4. Check palindrome
    for (int i = 0; i < length / 2; i++) {

        if (word[i] != word[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1) {
        printf("Palindrome: Yes\n");
    }
    else {
        printf("Palindrome: No\n");
    }

    // 5 & 6. Count vowels and consonants
    for (int i = 0; i < length; i++) {

        if (word[i] == 'a' || word[i] == 'e' ||
            word[i] == 'i' || word[i] == 'o' ||
            word[i] == 'u') {

            vowels++;
        }
        else {
            consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}