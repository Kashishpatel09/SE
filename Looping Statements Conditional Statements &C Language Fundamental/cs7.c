//7. Printing a number in reverse order
#include <stdio.h>
main() {
    int number, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversed);
}

