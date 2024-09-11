//10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include <stdio.h>
 main() {
    float length, width, height, surface_area;
    printf("Enter the length of the rectangular prism: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangular prism: ");
    scanf("%f", &width);
    printf("Enter the height of the rectangular prism: ");
    scanf("%f", &height);
    surface_area = 2 * (length * width + length * height + width * height);
    printf("The surface area of the rectangular prism is: %.2f square units\n", surface_area);
}

