#include <stdio.h>

int sum (int num1, int num2){
    return num1 + num2;
}
int main(){
    int a, b, result;

    printf("Enter any two number to perform Addition Operation\n");
    scanf("%d%d", &a, &b);
    result = sum (a,b);
    printf("The result is : %d", result);
    return 0;
}