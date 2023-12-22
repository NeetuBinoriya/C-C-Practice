#include <stdio.h>

int main(){
    double weight1, count1, weight2, count2, result;

    printf("Enter the weight for first: ");
    scanf("%lf", &weight1);
    printf("Enter the Count for first: ");
    scanf("%lf", &count1);
    printf("Enter the weight for second: ");
    scanf("%lf", &weight2);
    printf("Enter the Count for Second: ");
    scanf("%lf", &count2);
    
    result = ((weight1 * count1) + (weight2 * count2)) / (count1 + count2);

    printf("The Result is : %lf", result);
}