#include <stdio.h>

//Programming Project 9 in Chapter 5 asked you to write a program that determines which of
//two dates comes earlier on the calendar. Generalize the program so that the user may enter
//any number of dates. The user will enter 0/0/0 to indicate that no more dates will be entered:
//Enter a date (mm/dd/yy): 3/6/08
//Enter a date (mm/dd/yy): 5/17/07
//Enter a date (mm/dd/yy): 6/3/07
//Enter a date (mm/dd/yy): 0/0/0
//5/17/07 is the earliest date

int main(void)
{
    int mm, dd, yy, mm1, dd1, yy1;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm, &dd, &yy);

    if (mm == 0 && dd == 0 && yy == 0) return 0;

    do 
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &mm1, &dd1, &yy1);

        if (mm1 != 0 && dd1 != 0 && yy1 != 0) 
        {
            if ( (yy1 < yy) || (yy == yy1 && mm1 < mm) || (yy == yy1 && mm == mm1 && dd1 < dd) ) {mm = mm1; dd = dd1; yy = yy1;} 
        }
        
    } while (mm1 != 0 && dd1 != 0 && yy1 !=0 );

    printf("%d/%d/%d is the earliest", mm, dd, yy);

    return 0;
}

