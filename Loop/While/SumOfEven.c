#include <stdio.h>
int main()
{
    int num, ld;
    int result = 0, count = 0;
    printf("Enter any Number:");
    scanf("%d", &num);

    while (num != 0)
    {
        num = num / 10;
        if (num % 2 == 0)
        {
        ld = num % 10;
        result = result + ld;
       }
        count++;
        
    }

    printf("The sum of the Digit is : %d \n", result);
    printf("The count of the Digit is : %d", count);

    return 0;
}