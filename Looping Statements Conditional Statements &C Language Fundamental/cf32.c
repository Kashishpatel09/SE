//32. Accept 2 numbers and find out its sum check it size
#include <stdio.h>
main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;   
    if (sum > 0) {
        printf("The sum %d is positive.\n", sum);
    } else if (sum < 0) {
        printf("The sum %d is negative.\n", sum);
    } else {
        printf("The sum is 0.\n");
    }
}

