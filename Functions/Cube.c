#include <stdio.h>

void cube(int a)
{
}
int main()
{
    int num, result;

    printf("Enter a number you want to print Cube of \n");
    scanf("%d", &num);
    result = num * num * num;
    printf("%d", result);

    cube(num);
    return 0;
}