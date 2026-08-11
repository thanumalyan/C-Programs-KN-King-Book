#include <stdio.h>

//Modify Programming Project 11 from Chapter 7 so that the program labels its output:
//Enter a first and last name: Lloyd Fosdick
//You entered the name: Fosdick, L.
//The program will need to store the last name (but not the first name) in an array of characters
//until it can be printed. You may assume that the last name is no more than 20 characters long.

int main(void)
{
    char initial;
    char lastName[20];
    int i = 0, c;

    printf("Enter a first and last name: ");


    while ((initial = getchar()) == ' ');                   /* IGNORES WHITESPACES AND STORES INITIAL */

    while (getchar() != ' ');                               /* IGNORES REST OF THE FIRST NAME */

    while ( (c = getchar()) == ' ');                        /* IGNORES WHITESPACES */

    do { 
        lastName[i++] = c;                           
        
    } while ( (c = getchar()) != '\n' && c != ' ' && c != EOF);

    if (c == ' ') while ((c = getchar()) != '\n' && c != EOF);  /* TO CLEAR INPUT BUFFER*/

    printf("You entered the name: ");

    for (int j = 0; j < i; j++) printf("%c", lastName[j]);     /* PRINTS LAST NAME */

    printf(", %c.\n", initial);                                 /* PRINTS INITIAL */

    return 0;
}