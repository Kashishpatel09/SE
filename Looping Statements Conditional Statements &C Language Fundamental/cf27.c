//27. Convert days into months:
#include <stdio.h>
main() {
    int days, months, remaining_days;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    months = days / 30;
    remaining_days = days % 30;

    printf("%d  days is equal to %d months and %d days.\n", days, months, remaining_days);
}

