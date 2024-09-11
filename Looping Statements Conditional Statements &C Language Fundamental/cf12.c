//12.Accept number of students from user. I need to give 5 apples to each
//student. How many apples are required?
#include <stdio.h>

int main() {
    int num_students, total_apples;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    total_apples = num_students * 5;

    printf("Total number of apples required: %d\n", total_apples);

        
}

