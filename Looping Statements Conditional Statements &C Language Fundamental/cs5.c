//5. Printing the factorial of a given number
#include <stdio.h>
main() {
    int number, i, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %d\n", number, factorial);
}

