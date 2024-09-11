//18. Write a C program to calculate profit and loss on a transaction

#include <stdio.h>

int main() {
    float costPrice, sellingPrice;

    // Get cost price from the user
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    // Get selling price from the user
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    // Calculate profit or loss
    if (sellingPrice > costPrice) {
        float profit = sellingPrice - costPrice;
        printf("Profit: %.2f\n", profit);
    } else if (sellingPrice < costPrice) {
        float loss = costPrice - sellingPrice;
        printf("Loss: %.2f\n", loss);
    } else {
        printf("No profit, no loss.\n");
    }

}
