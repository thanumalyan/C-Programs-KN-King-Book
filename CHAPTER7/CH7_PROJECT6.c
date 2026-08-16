#include <stdio.h>

//Write a program that prints the values of sizeof (int), sizeof (short).
//sizeof (long), sizeof (float), sizeof (double) and sizeof (long double).

int main (void)
{
    printf("int: %zu\nshort: %zu\nlong: %zu\nfloat: %zu\ndouble: %zu\nlong double: %zu\n", 
        sizeof (int), sizeof (short),
        sizeof (long), sizeof (float), 
        sizeof (double), sizeof (long double));

    return 0;
}