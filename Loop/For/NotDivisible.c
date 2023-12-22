#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Range Number\n");
    scanf("%d", &n);
    printf("The Range Number from 1 to %d and which are not divisible by 2, 3,& 5 : \n", n);
    for (int i = 1; i <= n; i++)
    {
        if ((i % 2 != 0) && (i % 3 != 0) && (i % 5 != 0))
        {
            printf("%d ", i);
        }
    }
    return 0;
}