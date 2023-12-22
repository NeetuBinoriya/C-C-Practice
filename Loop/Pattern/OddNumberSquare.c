#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d", &num);
    int col;
     printf("Enter a Number:");
    scanf("%d", &col);

    for (int i = 1; i <= num; i++)
    {
        int a = 1;
        for (int j = 1; j <= col; j++)
        {
            printf("%d ",a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}