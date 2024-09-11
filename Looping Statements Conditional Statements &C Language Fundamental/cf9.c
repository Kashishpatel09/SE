//9) Find circumference of Triangle formula : triangle = a + b + c 
#include <stdio.h>
main() {
    float side1, side2, side3, perimeter;
    printf("Enter the length of side 1: ");
    scanf("%f", &side1);
    printf("Enter the length of side 2: ");
    scanf("%f", &side2);
    printf("Enter the length of side 3: ");
    scanf("%f", &side3);
    perimeter = side1 + side2 + side3;
    printf("The perimeter of the triangle is: %.2f units\n", perimeter);
}

