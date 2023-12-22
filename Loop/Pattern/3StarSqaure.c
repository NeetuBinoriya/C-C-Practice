#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int m;
    printf("Enter a number: ");
    scanf("%d", &m);


    for (int i = 1; i <= n; i++)// Outer Loop :- Number of Lines or Rows
    {
        for (int i = 1; i <= m; i++) // Inner loop : Number of stars in each lines Or Columns
        {
            printf("*");
        }
            printf("\n");
    }

    // printf("*****\n*****\n*****");

    return 0;
}