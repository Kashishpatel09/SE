//4. WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement 
//Ò
#include <stdio.h>
main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;
        case '%':
            if ((int)num1 != num1 || (int)num2 != num2) {
                printf("Error: Modulo operation is only valid for integers\n");
            } else {
                result = (int)num1 % (int)num2;
                printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)result);
            }
            break;
        default:
            printf("Invalid operator\n");
    }
}

