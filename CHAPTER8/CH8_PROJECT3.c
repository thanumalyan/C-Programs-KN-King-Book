#include <stdio.h>
#include <stdbool.h>

//Modify the repdigit.c program of Section 8.1 so that the user can enter more than one
//number to be tested for repeated digits. The program should terminate when the user enters
//a number that's less than or equal to 0.

int main(void)
{
    int digit;
    long n;

    for (;;) {
        printf("Enter a number: ");
        scanf("%ld", &n);
        if (n <= 0) break;

        bool digit_seen[10] = {false};

        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit]) break;
            else digit_seen[digit] = true;
            n /= 10;
        }

        if (n == 0) printf("No digits were repeated.\n\n");
        else printf("Digits were repeated.\n\n");

    }

    return 0;
}