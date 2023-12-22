#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("The Range is Given between 1 to %d  \n: ", n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d  ", i);
    }

    printf("\n The Number which is Perfectly divided %d by are: \n", n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}