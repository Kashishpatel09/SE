//16) Accept 5 numbers from user and perform sum of array
#include <stdio.h>
 main() {
    int numbers[5];
    int i, sum = 0;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        sum =sum+ numbers[i];
    }

    printf("Sum of the numbers: %d\n", sum);
}

