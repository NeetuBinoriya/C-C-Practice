#include <stdio.h>
int main()
{
    int n;
    printf("Enter the range of the number: \n");
    scanf("%d", &n);
    int result = 0;
    for (int i = 1; i <= 10; i++)
    {
        result = i * n;
        printf("%d * %d = %d\n", i, n, result);
    }

    // for (int i = 15; i <= 150; i=i+15)
    // {
    //     // result = i * n;
    // printf("%d ", i);
    // }
    return 0;
}