//13. Calculating the Factorial of a Given Number using a while loop
#include <stdio.h>
main() {
    int number, i = 1, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (i <= number) {
        factorial *= i;
        i++;
    }

    printf("Factorial of %d is %d\n", number, factorial);
}

