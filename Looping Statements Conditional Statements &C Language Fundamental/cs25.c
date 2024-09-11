//25. Sum of squares of natural numbers up to n
#include <stdio.h>
main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("Sum of squares of natural numbers up to %d: %d\n", n, sum);
}

