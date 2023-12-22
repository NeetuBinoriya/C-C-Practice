#include <stdio.h>
int main()
{
    int n;
    printf("Enter a value for N : ");
    scanf("%d",&n);
    int result = 100;
    for (int i = 1; i <= n; i++)
    {
        result = result - 2;
        printf("%d ", result);
    }

    return 0;
}