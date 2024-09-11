//22. Accepting 3 numbers from the user and checking if they are palindromes using a while loop
#include <stdio.h>

int isPalindrome(int number) {
    int reversed = 0, remainder, originalNumber = number;

    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    return reversed == originalNumber;
}

int main() {
    int numbers[3], i;

    printf("Enter 3 numbers:\n");

    for (i = 0; i < 3; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Palindrome numbers:\n");

    for (i = 0; i < 3; i++) {
        if (isPalindrome(numbers[i])) {
            printf("%d\n", numbers[i]);
        }
    }
}

