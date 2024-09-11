//9. Find the maximum number of characters in a string:

#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, max_length = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        length++;
        if (length > max_length) {
            max_length = length;
        }
    }

    printf("Maximum length: %d\n", max_length);
}

