//12. Find the number of times a given word "is" appears in the given string:

#include <stdio.h>
main() {
    char str[100];
    char word[] = "is";
    int i, count = 0, j;

    printf("Enter a sentence: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == word[0]) {
            for (j = 1; word[j] != '\0' && str[i + j] == word[j]; j++) {
                ;
            }
            if (word[j] == '\0') {
                count++;
            }
        }
    }

    printf("Number of occurrences of 'is': %d\n", count);
}

