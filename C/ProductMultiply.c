#include <stdio.h>

int main(){
    int num1, num2, sum; //declared variable
    printf("Enter any two numbers to calculate the product\n");
    scanf("%d%d",&num1,&num2);

    sum = num1 * num2;
    printf("The product of given two numbers is : %d", sum);

}