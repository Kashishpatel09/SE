//26.WAP to show
// i. Monday to Sunday using switch case
// ii. Vowel or Consonant using switch case
#include <stdio.h>

int main() {
    int day;

    printf("Enter a number (1-7) for the day of the week: ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

}

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a Vowel\n", ch);
            break;
        default:
            printf("%c is a Consonant\n", ch);
    }

}

 				


