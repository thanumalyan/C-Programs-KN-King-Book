#include <stdio.h>
#include <ctype.h>

//Write a program that asks the user for a 12-hour time, then displays the time in 24-hour
//form:
//Enter a 12-hour time: 9:11 PM
//Equivalent 24-hour time: 21:11
//See Programming Project 8 for a description of the input format.

int main(void)
{
    int hr, min;
    char c1, c2;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c%c", &hr, &min, &c1, &c2);

    if ( toupper(c1) == 'P' && ( toupper(c2) == 'M' || c2 == '\n') ) 
    { 
        if (hr != 12)  hr += 12;
        printf("Equivalent 24-hour time: %02d:%02d\n", hr, min);
    }
    else if( toupper(c1) == 'A' && ( toupper(c2) == 'M' || c2 == '\n') ) 
    { 
        if (hr == 12)  hr = 0;
        printf("Equivalent 24-hour time: %02d:%02d\n", hr, min);
    }

    return 0;
    
}