#include <stdio.h>

//Modify Programming Project 11 so that the program continues adding terms until the current term becomes less than ε, where e is a small (floating-point) number entered by the
//user.

int main(void)
{
    double e = 1.0, epsilon = 1.0, factorial = 1.0, term;

    printf("Enter a small number: ");
    scanf("%lf", &epsilon);

    for (int i = 1;; i++) 
    {
        factorial *= i;
        term = 1.0 / factorial;
        if (term < epsilon) break;
        e += term;
    }

    printf("Approximated e value : %.15lf", e);

    return 0;
}