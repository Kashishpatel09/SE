28. Series 1 2 3 6 9 18 27 54... up to n
#include <stdio.h>
main() {
    int n, i, term = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Series: 1 2 3 6 9 18 27 54...\n");

    for (i = 1; i <= n; i++) {
        printf("%d ", term);
        if (i % 2 == 0) {
            term *= 3;
        } else {
            term *= 2;
        }
    }

    printf("\n");
}


