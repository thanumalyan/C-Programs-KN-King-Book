#include <stdio.h>

//Write a program that prompts the user to enter two dates and then indicates which date
//comes earlier on the calendar:
//Enter first date (mm/dd/yy): 3/6/08
//Enter second date (mm/dd/yy): 5/17/07
//5/17/07 is earlier than 3/6/08



int main(void)
{
    int mm1, dd1, yy1, mm2, dd2, yy2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm1, &dd1, &yy1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm2, &dd2, &yy2);

    if (yy2 > yy1) printf("%d/%d/%02d is earlier than %d/%d/%02d", mm1, dd1, yy1, mm2, dd2, yy2); 
    else if(yy2 < yy1) printf("%d/%d/%d is earlier than %d/%d/%d", mm2, dd2, yy2, mm1, dd1, yy1);
    else 
    {
        if (mm2 > mm1) printf("%d/%d/%02d is earlier than %d/%d/%02d", mm1, dd1, yy1, mm2, dd2, yy2); 
    else if(mm2 < mm1) printf("%d/%d/%02d is earlier than %d/%d/%02d", mm2, dd2, yy2, mm1, dd1, yy1);
    else 
    {
        if (dd2 > dd1) printf("%d/%d/%02d is earlier than %d/%d/%02d", mm1, dd1, yy1, mm2, dd2, yy2); 
    else if(dd2 < dd1) printf("%d/%d/%02d is earlier than %d/%d/%02d", mm2, dd2, yy2, mm1, dd1, yy1);
    }
    }
    return 0;
    
}