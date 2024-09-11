//20. Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment, find out of remaining salary:
#include <stdio.h>
main() {
    float monthly_salary, insurance_premium, loan_installment, remaining_salary;

    printf("Enter your monthly salary: ");
    scanf("%f", &monthly_salary);

    insurance_premium = 0.1 * monthly_salary;
    loan_installment = 0.1 * monthly_salary;
    remaining_salary = monthly_salary - insurance_premium - loan_installment;

    printf("Remaining salary: %.2f\n", remaining_salary);
}

