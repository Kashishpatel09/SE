//15. Calculating the sum of 10 numbers using a while loop
#include <stdio.h>
main() {
    int number, sum = 0, i = 1;

    while (i <= 10) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        sum =sum+ number;
        i++;
    }

    printf("Sum of 10 numbers: %d\n", sum);
}

