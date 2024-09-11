//8. Finding the maximum digit in a given number
#include <stdio.h>
main() {
    int number, maxDigit = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder = number % 10;
        if (remainder > maxDigit) {
            maxDigit = remainder;
        }
        number /= 10;
    }

    printf("Maximum digit: %d\n", maxDigit);
}

