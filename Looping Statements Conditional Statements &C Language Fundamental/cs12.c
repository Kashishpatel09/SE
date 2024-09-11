//12. Program of Armstrong Number in C Using For Loop & While Loop
#include <stdio.h>
#include <math.h>
main() {
    int number, originalNumber, remainder, result = 0, n = 0, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Count the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10; 
        ++count;
    }

    originalNumber = number;

    // Calculate the sum of powers of digits
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, count);
        originalNumber /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);   
    }
}

