#include <stdio.h>
int main()
{
    int num;
    printf("Enter any Number:");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        char ch = 'a';
        for (int j = 0; j < num; j++)
        {
            printf("%c ", ch + j);
        }
        printf("\n");
    }

    return 0;
}