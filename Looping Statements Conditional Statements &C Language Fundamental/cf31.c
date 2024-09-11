//31. Convert kilometers into meters:
#include <stdio.h>
main() {
    float kilometers, meters;

    printf("Enter the number of kilometers: ");
    scanf("%f", &kilometers);

    meters = kilometers * 1000;

    printf("%.2f kilometers is equal to %.2f meters.\n", kilometers, meters);
}

