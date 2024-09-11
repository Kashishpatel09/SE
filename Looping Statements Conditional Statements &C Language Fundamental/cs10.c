//10. Finding the sum of the first and last digits in a given number
#include <stdio.h>
main() {
    int number, firstDigit, lastDigit, sum;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Find the last digit
    lastDigit = number % 10;

    // Find the first digit
    while (number >= 10) {
        number /= 10;
    }
    firstDigit = number;

    // Calculate the sum
    sum = firstDigit + lastDigit;

    printf("Sum of first and last digits: %d\n", sum);
}

