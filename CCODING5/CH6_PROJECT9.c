#include <stdio.h>

//Programming Project 8 in Chapter 2 asked you to write a program that calculates the
//remaining balance on a loan after the first, second, and third monthly payments. Modify the
//program so that it also asks the user to enter the number of payments and then displays the
//balance remaining after each of these payments.

int main(void)
{
    float balance, interestRate, monthlyPayment; 
    int numberOfPayments;

    printf("Enter amount of loan: ");
    scanf("%f", &balance);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);
    printf("Enter the number of payments: ");
    scanf("%d", &numberOfPayments);

    for (int i = 1; i <= numberOfPayments; i++) printf("Balance remaining after payment %d : %.2f\n", i, balance = balance - monthlyPayment + (balance * (interestRate / 1200.0f)));

    return 0;



}