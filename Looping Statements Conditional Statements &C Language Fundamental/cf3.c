// 3.) WAP to Find Area And Circumference of Circle .
  #include <stdio.h>
#include <math.h>
main() {
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of the circle = %.2f square units\n", area);
    printf("Circumference of the circle = %.2f units\n", circumference);

    
}

