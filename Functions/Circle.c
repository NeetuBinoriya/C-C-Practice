#include <stdio.h>
#include <math.h>

int getDiameter(double radius)
{
    return (2*radius); 
}
int getCircumference(double radius)
{
    return (2* 3.14 * radius); 
}
int getArea(double radius)
{
    return (3.14* radius *radius); 
}

int main (){
    float rad, dia, cir, area;

    printf("Enter the Radius of Circle \n");
    scanf("%f",&rad);

    dia = getDiameter(rad);
    cir = getCircumference(rad);
    area = getArea(rad);

    printf("Diameter of the Circle is : %.2f units\n", dia);
    printf("Circumference of the Circle is : %.2f units\n", cir);
    printf("Area of the Circle is : %.2f units\n", area);

    return 0;    
}