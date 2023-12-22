#include <stdio.h>

int main(){
    int num1, num2;
    int sum;

    printf("Enter two numbers to calculate the sum: \n");
    scanf("%d%d",&num1, &num2);

    sum = num1 + num2;
    printf("The Sum of two number is %d", sum);
}