//Modify Programming Project 3 from Chapter 6 so that it includes the following function:
//void reduce (int numerator, int denominator ,
//int *reduced numerator ,
//int *reduced denominator) ;
//numerator and denominator are the numerator and denominator of a fraction.
//reduced numerator and reduced denominator are pointers to variables in
//which the function will store the numerator and denominator of the fraction once it has been
//reduced to lowest terms


#include <stdio.h>

void reduce (int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);
int gcd(int, int);

int main()
{
    int num, denom, reduc_numer, reduc_denom;

    printf("\t\t--CONVERTS GIVEN FRACTION INTO SIMPLIFIED FRACTION--\n\nEnter an fraction: ");
    scanf("%d / %d", &num, &denom);

    reduce(num, denom, &reduc_numer, &reduc_denom);

    printf("Simplified fraction: %d / %d\n", reduc_numer, reduc_denom);

    return 0;
}

void reduce (int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    *reduced_numerator = numerator / gcd(numerator, denominator);
    *reduced_denominator = denominator / gcd(numerator, denominator);

}

int gcd(int num1, int num2)
{
    int remainder;

    while (num2 != 0) {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    return num1;
}