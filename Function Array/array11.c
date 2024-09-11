//11. Accept 5 numbers from the user and display them in reverse order (using for loop and array):
#include <stdio.h>
main() {
    int numbers[5];
    int i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Numbers in reverse order:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    printf("\n");     
}

