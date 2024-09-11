//1. Write a program to find out the max number from given array using function
#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {10, 5, 8, 20, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_num = findMax(arr, n);
    printf("Maximum number is: %d\n", max_num);
        
}

