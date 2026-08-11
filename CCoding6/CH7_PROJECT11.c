#include <stdio.h>

//Write a program that takes a first name and last name entered by the user and displays the
//last name, a comma, and the first initial, followed by a period:
//Enter a first and last name: Lloyd Fosdick
//Fosdick, L.
//The user's input may contain extra spaces before the first name, between the first and last
//names, and after the last name.

int main(void)
{
    char c, initial;

    printf("Enter a first and last name: ");


    while ((initial = getchar()) == ' ');

    while (getchar() != ' ');

    while ( (c = getchar()) == ' ');

    do { 
        putchar(c);
    } while ( (c = getchar()) != '\n' && c != ' ');

    while (getchar() != '\n');

    printf(", %c.", initial);

    return 0;
}