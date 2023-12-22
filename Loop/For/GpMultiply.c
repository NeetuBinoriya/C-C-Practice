#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value for N:");
    scanf("%d", &n);

    int result = 1;
    for (int i = 1; i <= n; i++)
    {
       printf("%d ",result);
       result = result * 2;
    }
    
    return 0;
}