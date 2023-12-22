#include <stdio.h>
    void swapping(int a, int b){
        int temp = a;
        a = b;
        b = temp ;
    }
    int main(){
        int num1, num2;
        printf("Enter numbers one :\n");
        scanf("%d", &num1);
        printf("Enter numbers two :\n");
        scanf("%d", &num2);

        printf("Before Swapping Number is : num1 =  %d , num2 = %d\n ", num1, num2);
        swapping(&num1, &num2);

        printf("After Swapping Number is : num1 =  %d , num2 = %d\n ", num1, num2);
        swapping(num1, num2);

        return 0;
    }