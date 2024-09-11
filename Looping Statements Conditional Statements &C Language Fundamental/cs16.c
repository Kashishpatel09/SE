//16. Calculating the Sum of Natural Numbers Using the While Loop
#include <stdio.h>
main() {
    int number, sum = 0, i = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (i <= number) {
        sum += i;
        i++;
    }

    printf("Sum of natural numbers up to %d: %d\n", number, sum);
}

