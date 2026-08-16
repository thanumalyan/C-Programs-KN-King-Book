#include <stdio.h>

int day_of_year(int month, int day, int year)
{
    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;
    
    if ( (year % 100) == 0) {
        if ( (year % 400) == 0) {
            days_in_month[1]++;     /*Leap year*/
        }
    }
    else if ((year % 4) == 0) {
        days_in_month[1]++;         /*Leap year*/
    }

    for (int i = 0; i < month - 1; i++) {
        sum += days_in_month[i];
    }

    sum += day; 

    return sum;

}

