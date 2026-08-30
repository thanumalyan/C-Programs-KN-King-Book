#include <stdio.h>

//Write a function that computes the value of the following polynomial:
//3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
//Write a program that asks the user to enter a value for x, calls the function to compute the
//value of the polynomial, and then displays the value returned by the function.

double compute_polynomial(double x);

int main(void)
{
    double x;

    printf("\t\t--VALUE CALCULATOR OF THE POLYNOMIAL - 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n\nEnter a value for x: ");
    scanf("%lf", &x);

    printf("\n\nValue of the polynomial: %.5lf", compute_polynomial(x));

    return 0;
}

double compute_polynomial(double x) 
{
    return 3 * (x*x*x*x*x) + 2 * (x*x*x*x) - 5 * (x*x*x) - (x*x) + 7 * (x) - 6;
}


