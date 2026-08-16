#include <stdio.h>

//The value of the mathematical constant e can be expressed as an infinite series:
//e = 1 + 1/1! + 1/2! + 1/3! + ...
//Write a program that approximates e by computing the value of
//1+ 1/1! + 1/2! + 1/3! + ... + 1/n!
//where n is an integer entered by the user.

int main(void)
{
    double e = 1.0, factorial = 1.0;
    int n, i;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
        e += 1.0 / factorial;
    }

    printf("Approximated e value : %.15lf", e);

    return 0;
}