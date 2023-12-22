#include <stdio.h>

int main(){
    char id[10]; //variable to store the Employee Id max upto 10 character 
   int hour; // variable to store the hour of work
    double amount, salary; // variable to store the salary and amount of employee

    printf("Enter the Employee Id:\n");
    scanf("%s", &id);

    printf("Enter the Working Hour:\n");
    scanf("%d", &hour);

    printf("Enter the per hour amount:\n");
    scanf("%lf", &amount);
    
    salary = amount * hour ;
    printf("\n Employee Id is : %s \n Salary is : U$ %.2lf\n ", id, salary);
    
    return 0;
}