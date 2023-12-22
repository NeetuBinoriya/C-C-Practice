#include <stdio.h>

int main (){
    int days, weaks, years;
    days = 1329; //declare days
    // Convert days to weaks and Year

    years = days/365; // Calculate the years
    weaks = (days % 365)/7; // Calculate the weaks
    days = days - ((years*365) + (weaks*7)); // Calculate the days


    printf("Years are : %d \n", years);
    printf("Weaks are : %d \n", weaks);
    printf("days are : %d \n", days);

    return 0;

}