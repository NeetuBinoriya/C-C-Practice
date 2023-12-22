#include <stdio.h>
    int findMax(int a, int b, int c){
        int max = a;
        if (b>max){
            max = b;
        }
        if(c>max){
            max = c;
        }
        return max;
    }
    int findMin(int a, int b, int c){
        int min = a;
        if (b<min)
        {
            min = b;
        }
        if (c<min)
        {
            min = c;
        }
        return min;  
    }
    int main (){
        int num1, num2, num3;
        printf("Enter three Numbers to check Max aur Min Number: \n");
        scanf("%d%d%d",&num1, &num2, &num3);
        int maximum = findMax(num1,num2,num3);
        int minimum = findMin(num1,num2,num3);

        printf("The given number is Max: %d\n",maximum);
        printf("The given number is Max: %d\n",minimum);
        return 0;

    }