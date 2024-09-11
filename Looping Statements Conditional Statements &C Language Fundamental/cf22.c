//22. Calculate compound interest:
#include <stdio.h>
#include <math.h>
 main() {
    float principal, rate, time, amount, compound_interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter the number of years: ");
    scanf("%f", &time);

    amount = principal * pow(1 + (rate / 100), time);
    compound_interest = amount - principal;

    printf("Compound interest: %.2f\n", compound_interest);
}


