#include <stdio.h>

//Extend the program in Programming Project I to handle three-digit numbers.

int main(void)
{
    int num, ones, tens, hundreds;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    tens = (num % 100) / 10; hundreds = num / 100; ones = num - (hundreds * 100 + tens * 10);

    printf("The reversal is: %d%d%d", ones, tens, hundreds);

    return 0;
}
