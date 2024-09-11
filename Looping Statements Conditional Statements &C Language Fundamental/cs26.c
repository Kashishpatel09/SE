//26. Sum of triangular numbers up to n
#include <stdio.h>
main() {
    int n, i, j, sum = 0, triangularSum;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        triangularSum = 0;
        for (j = 1; j <= i; j++) {
            triangularSum += j;
        }
        sum += triangularSum;
    }

    printf("Sum of triangular numbers up to %d: %d\n", n, sum);
}

