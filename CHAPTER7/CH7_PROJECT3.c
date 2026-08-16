#include <stdio.h>

//Modify the sum2. c program of Section 7.1 to sum a series of double values.

int main(void)
{
    double n, sum = 0;                                      //MODIFIED HERE
    printf ("This program sums a series of integers.\n");

    printf("Enter numbers (0 to terminate): ");             //MODIFIED HERE
    scanf ("%lf", &n);                                      //MODIFIED HERE
    while (n != 0) 
    {
        sum += n;
        scanf ("%lf", &n);                                  //MODIFIED HERE
    }
    printf("The sum is: %lf\n", sum);                       //MODIFIED HERE

    return 0;
}