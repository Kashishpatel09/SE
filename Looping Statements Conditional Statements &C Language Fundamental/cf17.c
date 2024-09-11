//17. Calculate person's insurance premium based on salary:
#include <stdio.h>
 main() {
    float salary, insurance_premium;
    printf("Enter your annual salary: ");
    scanf("%f", &salary);
    insurance_premium = 0.05 * salary;
    printf("Insurance premium: %.2f\n", insurance_premium);
}

