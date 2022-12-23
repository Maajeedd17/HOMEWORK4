#include <stdio.h>

int main(void) {
    
    int length, width;

    // Read the sides of the rectangle from the user
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    // Calculate the area and perimeter of the rectangle
    int area = length * width;
    int perimeter = 2 * (length + width);

    // Print the results
    printf("The area of the rectangle is: %d\n", area);
    printf("The perimeter of the rectangle is: %d\n", perimeter);

    return 0;
}



