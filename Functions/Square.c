#include <stdio.h>

int square(int num1)
{
    return num1 * num1;
}
int main()
{
    int a, result;
    printf("Enter any number to find the Square \n");
    scanf("%d", &a);
    result = square(a);
    printf("The square of Given number is : %d", result);

    return 0;
}