#include <stdio.h>
#include <stdlib.h>

//Write a program that calculates how many digits a number contains:
//Enter a number: 374
//The number 374 has 3 digits
//You may assume that the number has no more than four digits. Hint: Use if statements to
//test the number. For example, if the number is between 0 and 9, it has one digit. If the number is between 10 and 99, it has two digits.

int main(void)
{
    int num, org;

    printf("Enter a number: ");
    scanf("%d", &num);
    org = num;
    num = abs(num);

    if (num <= 9) printf("The number %d has 1 digit", org);
    else if (num > 9 && num < 100) printf("The number %d has 2 digits", org);
    else if ((num >= 100 && num < 1000)) printf("The number %d has 3 digits", org);
    else printf("The number %d has 4 digits", org);

    return 0;
}