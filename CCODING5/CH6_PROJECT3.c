#include <stdio.h>

//Write a program that asks the user to enter a fraction, then reduces the fraction to lowest
//terms:
//Enter a fraction: 6/12
//In lowest terms: 1/2
//Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and
//denominator. Then divide both the numerator and denominator by the GCD.

int main(void)
{
    int m, n, remainder;
    int num1, num2;
    
    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    num1 = m, num2 = n;


    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("In lowest terms: %d/%d", num1 / m, num2 / m);

    return 0;
}