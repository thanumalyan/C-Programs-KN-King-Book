#include <stdio.h>

//5. Write a function num_digits (n) that returns the number of digits in n (a positive inte-
//ger). Hint: To determine the number of digits in a number n, divide it by IO repeatedly.
//When n reaches O, the number of divisions indicates how many digits n originally had.

int num_digits (long int n);

int main(void)
{
    long int number;

    printf("\t\t--RETURNS NUMBER OF DIGITS IN YOUR NUMBER--\n\n");

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Number of digits: %d\n", num_digits(number));

    return 0;

}

int num_digits (long int n) 
{
    int count = 0;

    do {
        n /= 10;
        count++;
    } while (n != 0);

    return count;
}

