#include <stdio.h>

//The square2.c program of Section 6.3 will fail (usually by printing strange answers) if
//i * i exceeds the maximum int value. Run the program and determine the smallest value
//of n that causes failure. Try changing the type of i to short and running the program
//again. (Don't forget to update the conversion specifications in the call of printf!) Then
//try long. From these experiments, what can you conclude about the number of bits used to
//store integer types on your machine?

int main(void)
{
    /* Prints a table of squares using a for statement */

    long int i, n, square; // JUST CHANGE AND

    printf("This program prints a table of squares.\n");
    printf ("Enter number of entries in table: ");

    scanf ("%hd", &n); // HERE (AND OBSERVE)

    for (i = 1; i <= n; i++) printf("%10d%10d\n", i, square = i * i);

    return 0;
    

}