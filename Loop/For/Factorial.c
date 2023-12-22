#include <stdio.h>

int main(){
    int num;
    long int result = 1;
    printf("Enter any Number: \n");
    scanf("%d",&num);

    for (int i = 1; i < num; i++)
    {
        result = result*i;
    }
    printf("The Factorial of Given Number is: %ld\n", result);
    return 0;

}