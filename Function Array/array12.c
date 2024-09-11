//12. Accept 5 students' names and store them in an array:
#include <stdio.h>
//#define MAX_NAME_LENGTH 50
main() {
    char student_names[5][MAX_NAME_LENGTH];
    int i;

    printf("Enter names of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        fgets(student_names[i], MAX_NAME_LENGTH, stdin);

        // Remove the newline character (if present)
        student_names[i][strcspn(student_names[i], "\n")] = '\0';
    }

    printf("\nStudent Names:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", student_names[i]);}
}

