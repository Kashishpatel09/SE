//23. C Program to Reverse a Number Using FOR Loop
#include <stdio.h>
main() {
    int number, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (; number != 0;) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversed);
}

