//21.Write a C program to input basic salary of an employee and calculateits Gross salary according to following: Basic Salary <= 10000 : HRA = 20%, DA = 80% Basic Salary <= 20000 : HRA = 25%, DA = 90% Basic Salary > 20000 : HRA = 30%, DA = 95%\
#include <stdio.h>

int main() {
    float basicSalary, HRA, DA, grossSalary;

    // Input basic salary
    printf("Enter basic salary of the employee: ");
    scanf("%f", &basicSalary);

    // Calculate HRA and DA based on basic salary
    if(basicSalary <= 10000) {
        HRA = basicSalary * 0.20;
        DA = basicSalary * 0.80;
    }
    else if(basicSalary <= 20000) {
        HRA = basicSalary * 0.25;
        DA = basicSalary * 0.90;
    }
    else {
        HRA = basicSalary * 0.30;
        DA = basicSalary * 0.95;
    }

    // Calculate gross salary
    grossSalary = basicSalary + HRA + DA;

    // Print gross salary
    printf("Gross Salary of the employee: %.2f\n", grossSalary);

    return 0;
}

