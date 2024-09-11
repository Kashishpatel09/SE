//2. WAP of Addition, Subtraction, Multiplication and Division using Switch Case.
#include <stdio.h>
 main() {
    int num1, num2, result;
    char operator;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Sum = %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Difference = %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Product = %d\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Quotient = %d\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

        
}

