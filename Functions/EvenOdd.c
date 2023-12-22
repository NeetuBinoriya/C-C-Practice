#include <stdio.h>

void EvenOdd(int num)
{
    if (num % 2 == 0)
    {
        printf("The Number is Even");
    }
    else
    {
        printf("The Number is Odd");
    }
}
int main()
{

    int number;
    printf("Enter a number to cehck whether it is Even or odd \n");
    scanf("%d", &number);
    EvenOdd(number);

    return 0;
}