#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d", &num);
    // int col;
    // printf("Enter a Column:");
    // scanf("%d", &col);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num + 1 - i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}