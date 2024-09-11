//13.Find character value from ascii
#include <stdio.h>

int main() {
    int ascii_value;
    char character;

    printf("Enter the ASCII value: ");
    scanf("%d", &ascii_value);

    // Convert the ASCII value to a character
    character = (char)ascii_value;

    printf("The character for ASCII value %d is: %c\n", ascii_value, character);

        
}

