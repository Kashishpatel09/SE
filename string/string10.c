//10. Extract a substring from a given string:

#include <stdio.h>
main() {
    char str[100], substr[100];
    int start, end, i, j;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the starting index: ");
    scanf("%d", &start);

    printf("Enter the ending index: ");
    scanf("%d", &end);

    if (start >= 0 && end < strlen(str) && start <= end) {
        for (i = start, j = 0; i <= end; i++, j++) {
            substr[j] = str[i];
        }
        substr[j] = '\0';

        printf("Substring: %s\n", substr);
    } else {
        printf("Invalid indices.\n");
    }
}

