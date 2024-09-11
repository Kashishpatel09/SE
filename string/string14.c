//14. Combine two strings manually:

#include <stdio.h>
main() {
    char str1[100], str2[100], combined_str[200];
    int i, j;

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    for (i = 0; str1[i] != '\0'; i++) {
        combined_str[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; j++) {
        combined_str[i + j] = str2[j];
    }

    combined_str[i + j] = '\0';

    printf("Combined string: %s\n", combined_str);
}

