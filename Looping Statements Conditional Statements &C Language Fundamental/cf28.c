//28. Convert years into days and months:
#include <stdio.h>
main() {
    int years, days, months;

    printf("Enter the number of years: ");
    scanf("%d", &years);

    days = years * 365;
    months = days / 30;
    remaining_days = days % 30;

    printf("%d years is equal to %d days, %d months and %d days.\n", years, days, months, remaining_days);
}

