#include <stdio.h>
 main() {
    char str[100];
    int i, length;

    printf("Enter a string: ");
    gets(str);

    length = 0;
    while (str[length] != '\0') {
        length++;
    }

    printf("Characters in reverse order:\n");
    for (i = length - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }
  
}

