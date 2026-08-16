#include <stdio.h>


// Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
// that amount using the smallest number of $20, $10, $5, and $1 bills:
// Enter a dollar amount: 93
// $20 bills: 4
// $10 bills: 1
// $5 bills: 0
// $1 bills: 3
// Hint: Divide the amount by 20 to determine the number of $20 bills needed, and then reduce
// the amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure to use
// integer values throughout, not floating-point numbers.

int main(void)
{
    int amount, bills_20, bills_10, bills_5, bills_1;
    
    printf("Enter a dollar amount : ");
    scanf("%d", &amount);

    bills_20 = amount/20;
    amount -= 20 * bills_20;
    bills_10 = amount/10;
    amount -= 10 * bills_10;
    bills_5 = amount/5;
    amount -= 5 * bills_5;
    bills_1 = amount;

    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n ", bills_20, bills_10, bills_5, bills_1);

    return 0;

}
