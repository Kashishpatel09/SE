//8. WAP to accept the height of a person in centimeters and categorize the person according to their height. 
#include <stdio.h>
 main() {
    float height;

    printf("Enter the height of the person in centimeters: ");
    scanf("%f", &height);

    if (height < 150.0) {
        printf("The person is short.\n");
    } else if (height >= 150.0 && height <= 165.0) {
        printf("The person is of average height.\n");
    } else if (height > 165.0 && height <= 195.0) {
        printf("The person is tall.\n");
    } else {
        printf("The person's height is unusual.\n");
    }
}

