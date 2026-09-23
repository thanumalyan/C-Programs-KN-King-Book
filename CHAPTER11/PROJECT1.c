//Modify Programming Project 7 from Chapter 2 so that it includes the following function:
//void pay_amount (int dollars, int *twenties, int *tens,
//int *fives, int *ones) ;
//The function determines the smallest number of $20, $10, $5, and Sl bills necessary to pay
//the amount represented by the dollars parameter. The twenties parameter points to a
//variable in which the function will store the number of S20 bills required. The tens,
//fives, and ones parameters are similar.

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main()
{
    int dollars, twenties, tens, fives, ones;

    printf("\t\t--Amount using the smallest number of $20, $10, $5, and $1 bills--\n\nEnter a dollar amount: ");

    scanf("%d", &dollars);

    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("\n20$ bills: %d\n10$ bills: %d\n5$ bills: %d\n1$ bills: %d\n",
        twenties, tens, fives, ones );

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars -= *twenties * 20;

    *tens = dollars / 10;
    dollars -= *tens * 10;

    *fives = dollars / 5;
    dollars -= *fives * 5;

    *ones = dollars;
}