#include <stdio.h>

//Write a program that asks the user for a 24-hour time, then displays the time in 12-hour
//form:
//Enter a 24-hour time: 21:11
//Equivalent 12-hour time: 9:11 PM
//Be careful not to display 12:00 as 0:00.

int main(void)
{
    int hour, min;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    if (hour == 0) printf("Equivalent 12-hour time: 12:%02d AM", min);
    else if (hour == 12) printf("Equivalent 12-hour time: 12:%02d PM", min);
    else if (hour < 12) printf("Equivalent 12-hour time: %d:%02d AM", hour, min);
    else printf("Equivalent 12-hour time: %d:%02d PM", hour - 12, min);

    return 0;
}