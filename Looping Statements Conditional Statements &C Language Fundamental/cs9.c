//9. Finding the sum of digits in a given number
#include <stdio.h>
main() {
    int number, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder = number % 10;
        sum += remainder;
        number /= 10;
    }

    printf("Sum of digits: %d\n", sum);
}

