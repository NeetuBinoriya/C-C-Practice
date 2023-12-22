#include <stdio.h>
int main()
{
    // declare variable for Radius of a circle  
    int radius;
    
    // declare variable for store the value of perimeter and Area of cicle
    float perimeter;
    float area;
    // Taking Values for width and Lenght from the User
    printf("Enter the radius");
    scanf("%d", &radius);

    // Calculating the Permieter of a Circle
    perimeter = 2 * 3.14 * radius;
    printf("Perimeter of a Circle is : %f \n", perimeter);

    area = 3.14 * radius * radius;
    // Calculating the Area of a circle
    printf("Area of a Circle is : %f", area);

    return 0;
}