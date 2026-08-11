#include <stdio.h>

//Show how to modify the addfrac.cprogram of Section 3.2 so that the user is allowed to
//enter fractions that contain spaces before and after each / character.

/* Adds two fractions */

int main (void) 
{

    int numl, num2, denom2, result_num, result_denom;
    int denom1;

    printf("Enter first fraction: ");
    scanf ("%d / %d", &numl, &denom1); //modified line1

    printf("Enter second fraction: ");
    scanf ("%d / %d", &num2, &denom2); //modified line2

    result_num = numl * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf ("The sum is %d/%d\n", result_num, result_denom);

    return 0;

}