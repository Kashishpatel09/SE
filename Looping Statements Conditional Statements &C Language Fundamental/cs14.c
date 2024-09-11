//14. Accepting 5 numbers from the user and finding their factorials
#include <stdio.h>
main() {
    int numbers[5], i, j, factorial;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Factorials of the numbers:\n");

    for (i = 0; i < 5; i++) {
        factorial = 1;
        for (j = 1; j <= numbers[i]; j++) {
            factorial *= j;
        }
        printf("Factorial of %d is %d\n", numbers[i], factorial);
    }
}

