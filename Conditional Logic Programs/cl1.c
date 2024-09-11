//1.	Write a C program to accept two integers and check whether they are equal or not 
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2) {
        printf("%d and %d are equal.\n", num1, num2);
    } else {
        printf("%d and %d are not equal.\n", num1, num2);
    }
}

