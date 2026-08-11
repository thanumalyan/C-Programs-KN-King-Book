#include <stdio.h>

//Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit
//number without using arithmetic to split the number into digits. Hint: See the upc. c program of Section 4.1.

int main(void)
{
    int ones, tens, hundreds;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &hundreds, &tens, &ones);

    printf("The reversal is: %d%d%d", ones, tens, hundreds);

    return 0;
}