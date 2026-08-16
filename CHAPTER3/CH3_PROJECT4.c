#include <stdio.h>

//Write a program that prompts the user to enter a telephone number in the form (xxx) xxxxxxx and then displays the number in the form xxx.xxx.xXx:
//Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
//You entered 404.817.6900

int main(void)
{
    int digits_1, digits_2, digits_3;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &digits_1, &digits_2, &digits_3);

    printf("You entered %d.%d.%d", digits_1, digits_2, digits_3);

    return 0;
}