#include <stdio.h>

int main(){
    int num;
    printf("Enter any range to print Number: \n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("%d \n", i);
    }
    
    return 0;
}