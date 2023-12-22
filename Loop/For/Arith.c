#include <stdio.h>

int main(){
    int n;
    printf("Enter the range of the number: \n");
    scanf("%d", &n);
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
        printf("%d ", i);
    }

    printf("\n The sum of the Series is : %d", sum);
    
}