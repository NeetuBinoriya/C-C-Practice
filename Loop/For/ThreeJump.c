#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value for N:");
    scanf("%d", &n);
    // Three Jump
    // for (int i = 0; i < 3*n-1; i=i+3)
    // {
    //     printf("%d ",i);
    // }
    // Four Jump
    // for (int i = 4; i <= n; i=i+4)
    // {
    //     printf("%d ",i);
    // }
    // Five Jump

    int result = 5;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", result);
        result = result + 5;
    }
    return 0;
}