#include <stdio.h>

int findMaxMin(int a, int b){
    int max = a;
    int min = b;
    if (max > a)
    {
        printf("The Number is Max");
    }
    else if (min < b)
    {
        printf("The Number is Min");
    }  
    return max, min;
 }
 int main(){
    int num1, num2;
    printf("Enter two number to compare Max & Min\n");
    scanf("%d%d", &num1, &num2);

    int result = findMaxMin(num1, num2);
    printf("The Number is Max : %d\n", result);
    printf("The Number is Min : %d\n", result);
    return 0;
 }