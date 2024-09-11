//15. Find the largest and smallest words in a string:

#include <stdio.h>
main() {
    char str[100], word[100], largest_word[100], smallest_word[100];
    int i, j, word_length, largest_length = 0, smallest_length = 100;

    printf("Enter a sentence: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            word[j] = '\0';
            word_length = strlen(word);
            if (word_length > largest_length) {
                largest_length = word_length;
                strcpy(largest_word, word);
            }
            if (word_length < smallest_length) {
                smallest_length = word_length;
                strcpy(smallest_word, word);
            }
            j = 0;
        } else {
            word[j] = str[i];
            j++;
        }
    }

    word[j] = '\0';
    word_length = strlen(word);
    if (word_length > largest_length) {
        largest_length = word_length;
        strcpy(largest_word, word);
    }
    if (word_length < smallest_length) {
        smallest_length = word_length;
        strcpy(smallest_word, word);
    }

    printf("Largest word: %s\n", largest_word);
    printf("Smallest word: %s\n", smallest_word);
}



