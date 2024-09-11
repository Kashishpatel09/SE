//13. Accept 5 numbers, check if even or odd using an array:
#include <stdio.h>
main() {
    int numbers[5];
    int i;
printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
 printf("Even and Odd Numbers:\n");
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d (Even)\n", numbers[i]);
        } else {
            printf("%d (Odd)\n", numbers[i]);
        }
    }
}

