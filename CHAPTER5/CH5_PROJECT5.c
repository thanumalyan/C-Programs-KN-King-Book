#include <stdio.h>

//In one state, single residents are subject to the following income tax:
//Income            Amount of tax
//Not over $750     1% of income
//$750-$2.250       $7.50   plus 2% of amount over $750
//$2.250-$3.750     $37.50  plus 3% of amount over $2,250
//$3,750-$5,250     $82.50  plus 4% of amount over $3,750
//$5,250-$7,000     $142.50 plus 5% of amount over $5,250
//Over $7,000       $230.00 plus 6% of amount over $7,000
//Write a program that asks the user to enter the amount of taxable income, then displays the
//tax due.

int main(void)
{
    float income, taxDue;

    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

    if ( income < 750 ) taxDue = ( 1.0f / 100.0f ) * income;
    else if ( income <= 2250 ) taxDue = 7.50f + ( ( 2.0f / 100.0f ) * income );
    else if ( income <= 3750 ) taxDue = 37.50f + ( ( 3.0f / 100.f ) * income );
    else if ( income <= 5250 ) taxDue = 82.50f + ( ( 4.0f / 100.0f ) * income );
    else if ( income <= 7000 ) taxDue = 142.50f + ( ( 5.0f / 100.0f ) * income );
    else taxDue = 230.00f + ( ( 6.0f / 100.0f )  * income );

    printf("Tax due: %.2f", taxDue);

    return 0;

}

