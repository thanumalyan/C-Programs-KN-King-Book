#include <stdio.h>

//Modify the program of Programming Project 5 so that the polynomial is evaluated using the
//following formula:
//((((3x +2)х-5)х 1)x+7)x-6
//Note that the modified program performs fewer multiplications. This technique for evaluating polynomials is known as Horner's Rule.

int main(void)
{
    float x, value;

    printf("Enter a value for x : ");
    scanf("%f", &x);
      
    value = ((((3*x + 2) * x - 5) * x - 1)*x + 7)*x - 6;

    printf("Value for the polynomial : %.3f", value);

    return 0;
}
