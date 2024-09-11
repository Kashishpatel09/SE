//13. Remove characters from a string except alphabets:

#include <stdio.h>
main() {
    char str[100], new_str[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            new_str[j] = str[i];
            j++;
        }
    }

    new_str[j] = '\0';

    printf("String with only alphabets: %s\n", new_str);
}

