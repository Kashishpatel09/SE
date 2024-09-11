// 19. Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer. The charge are as follow : Unit Charge/unit upto 350 @1.20 350 and above but less than 600 @1.50 600 and above but less than 800 @1.80 800 and above @2.00 If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/-
#include <stdio.h>
main() {
    int customerId, unitsConsumed;
    char customerName[100];
    float billAmount, surcharge;

    printf("Enter Customer ID: ");
    scanf("%d", &customerId);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    if (unitsConsumed <= 350) {
        billAmount = unitsConsumed * 1.20;
    } else if (unitsConsumed < 600) {
        billAmount = 350 * 1.20 + (unitsConsumed - 350) * 1.50;
    } else if (unitsConsumed < 800) {
        billAmount = 350 * 1.20 + 250 * 1.50 + (unitsConsumed - 600) * 1.80;
    } else {
        billAmount = 350 * 1.20 + 250 * 1.50 + 200 * 1.80 + (unitsConsumed - 800) * 2.00;
    }

    if (billAmount > 800) {
        surcharge = billAmount * 0.18;
        billAmount += surcharge;
    }

    if (billAmount < 256) {
        billAmount = 256;
    }

    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Bill Amount: %.2f\n", billAmount);
}

