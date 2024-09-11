//11. Accepting 5 names from the user at runtime
#include <stdio.h>
main() {
    char names[5][100];
    int i;

    printf("Enter 5 names:\n");

    for (i = 0; i < 5; i++) {
        scanf("%s", names[i]);
    }

    printf("The names you entered are:\n");

    for (i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }
}

