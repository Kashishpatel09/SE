//9. C Program to Check Uppercase or Lowercase or Digit or Special Character Topics Covered Control statements Conditional Statements
#include <stdio.h>
main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("%c is an uppercase letter.\n", ch);
    } else if (islower(ch)) {
        printf("%c is a lowercase letter.\n", ch);
    } else if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is a special character.\n", ch);
    }
}

