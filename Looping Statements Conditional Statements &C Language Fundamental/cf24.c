//24. Accept 5 employees name and salary and count average and total salary
#include <stdio.h>
#include <string.h>
 main() {
    char employee_names[5][50];
    float salaries[5], total_salary = 0, average_salary;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter employee %d's name: ", i + 1);
        scanf("%s", employee_names[i]);

        printf("Enter employee %d's salary: ", i + 1);
        scanf("%f", &salaries[i]);

        total_salary += salaries[i];
    }

    average_salary = total_salary / 5;

    printf("\nAverage salary: %.2f\n", average_salary);
    printf("Total salary: %.2f\n", total_salary);

        
}

