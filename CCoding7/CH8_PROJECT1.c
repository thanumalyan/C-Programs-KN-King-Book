#include <stdio.h>
#include <stdbool.h>

//Modify the repdigit.c program of Section 8.1 so that it shows which digits (if any)
//were repeated:
//Enter a number: 939577
//Repeated digit(s): 7 9

int main(void)
{
    bool digit_seen[10] = {false};
    bool digit_printed[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Repeated digit(s):");

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit] && !digit_printed[digit]) { 
            printf(" %d", digit);
            digit_printed[digit] = true; 
        }
        else digit_seen[digit] = true;
        n /= 10;
    }

    printf("\n");
    return 0;
}