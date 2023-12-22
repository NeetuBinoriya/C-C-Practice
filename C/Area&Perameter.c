#include <stdio.h>
int main()
{
    // declare variable for length and width of rectangle
    int width;
    int length;
    // declare variable for store the value of perimeter and Area of rectangle
    int perimeter;
    int area;
    // Taking Values for width and Lenght from the User
    printf("Enter the Width and Length");
    scanf("%d %d", &width, &length);

    // Calculating the Permieter of a Rectangle
    perimeter = 2 * (length + width);
    printf("Perimeter of a Rectangular is : %d \n", perimeter);

    area = width * length;
    // Calculating the Area of a Rectangle
    printf("Area of a Rectangular is : %d", area);

    return 0;
}