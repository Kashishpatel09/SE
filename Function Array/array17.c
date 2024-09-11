//17.WAP to show difference between Structure and Union.
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

union Number {
    int integer;
    float decimal;
};

int main() {
    struct Student student1 = {"Alice", 20, 95.0};
    union Number number;

    printf("Student Name: %s\n", student1.name);
    printf("Student Age: %d\n", student1.age);
    printf("Student Marks: %.2f\n", student1.marks);

    number.integer = 10;
    printf("Integer Value: %d\n", number.integer);

    number.decimal = 3.14;
    printf("Decimal Value: %.2f\n", number.decimal);
}


