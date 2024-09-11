//27. Alternating harmonic series up to n
#include <stdio.h>
main() {
    int n, i;
    float sum = 0.0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= (float)i / (i + 1);
        } else {
            sum += (float)i / (i + 1);
        }
    }

    printf("Alternating harmonic series sum up to %d: %.2f\n", n, sum);
}

