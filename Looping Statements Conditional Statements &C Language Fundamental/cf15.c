//15.Convert school's name in abbreviated form
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void abbreviate(char *school_name) {
    int i, len = strlen(school_name);

    for (i = 0; i < len; i++) {
        // Print the first letter of each word as uppercase
        if (i == 0 || school_name[i - 1] == ' ') {
            printf("%c.", toupper(school_name[i]));
        }
    }
    printf("\n");
}

int main() {
    char school_name[100];

    printf("Enter the school name: ");
    fgets(school_name, sizeof(school_name), stdin);

    abbreviate(school_name);
}

