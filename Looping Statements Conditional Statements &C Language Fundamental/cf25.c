//25. Accept 5 expense from user and find average of expense:
#include <stdio.h>
 main() {
    float expenses[5], total_expenses = 0, average_expenses;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter expense %d: ", i + 1);
        scanf("%f", &expenses[i]);

        total_expenses += expenses[i];
    }

    average_expenses = total_expenses / 5;

    printf("\nAverage expenses: %.2f\n", average_expenses);

        
}

