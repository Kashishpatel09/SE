//21. Accept 2 numbers from the user and swap 2 numbers with using 3rd variable and without using 3rd variable
#include <stdio.h>
main() {
    int num1, num2, temp;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Before swapping:\n");   
printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    // Swapping using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping using a third variable:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    // Swapping without a third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping without a third variable:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
}

