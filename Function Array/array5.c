//5. WAP to take two Array input from user and sort them in ascending or
//descending order as per user's choice
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr[], int n, int order) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (order == 1) { // Ascending order
                if (arr[j] > arr[j + 1]) {
                    swap(&arr[j], &arr[j + 1]);
                }
            } else if (order == 2) { // Descending order
                if (arr[j] < arr[j + 1]) {
                    swap(&arr[j], &arr[j + 1]);
                }
            }
        }
    }
}

int main() {
    int arr1[100], arr2[100], n1, n2, order;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    printf("Enter elements of the first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    printf("Enter elements of the second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Enter 1 for ascending order, 2 for descending order: ");
    scanf("%d", &order);

    sortArray(arr1, n1, order);
    sortArray(arr2, n2, order);

    printf("Sorted first array: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Sorted second array: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

        
}

