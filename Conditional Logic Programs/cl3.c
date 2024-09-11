//3.	WAP to check if the given year is a leap year or not. 
 #include <stdio.h>
main() {
    int year;
    
    // Asking for user input
    printf("Enter a year: ");
    scanf("%d", &year);
    
    // Checking if the year is a leap year
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year.\n", year);
            } else {
                printf("%d is not a leap year.\n", year);
            }
        } else {
            printf("%d is a leap year.\n", year);
        }
    } else {
        printf("%d is not a leap year.\n", year);
    }
}

