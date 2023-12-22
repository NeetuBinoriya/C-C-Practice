#include <stdio.h>
int main()
{
    int num;
    int result = 0;
    printf("Enter any Number:");
    scanf("%d", &num);

    while (num != 0)
    {
        num = num / 10;
        result++;
    }
    printf("The count od Digit is : %d", result);
    
    return 0;
}