//19. Calculate compound interest:
#include <stdio.h>
 main() {
    float principal, rate, time, n, amount, compound_interest;
   printf("Enter the principal amount: ");
    scanf("%f", &principal);
   printf("Enter the annual interest rate: ");
    scanf("%f", &rate);
   printf("Enter the number of years: ");
    scanf("%f", &time);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%f", &n);
    amount = principal * pow(1 + (rate / n), n * time);
    compound_interest = amount - principal;
    printf("Compound interest: %.2f\n", compound_interest);
}

