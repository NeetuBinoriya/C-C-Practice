#include <stdio.h>

int main()
{

    int num, result = 0;
    printf("Enter the range Number: \n");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d \n", i);
            result = result + i;
        }
    }
    printf("The Sum of given even number range is :%d\n", result);
    return 0;
}