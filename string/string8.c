
//8. Count the total number of vowels or consonants in a string:
#include <stdio.h>
main() {
    char str[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowels++;
            } else {
                consonants++;  
}
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
}

