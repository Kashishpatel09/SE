//17. Calculating the number of even and odd numbers from 5 user-input numbers using a while loop
#include <stdio.h>
main() {
    int number, evenCount = 0, oddCount = 0, i = 1;

    while (i <= 5) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        i++;
    }

    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);
}

