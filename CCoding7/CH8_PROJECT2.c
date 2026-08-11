#include <stdio.h>


//Modify the repdigit.c program of Section 8.1 so that it prints a table showing how
//many times each digit appears in the number:
//Enter a number: 41271092
//Digit:        0 1 2 3 4 5 6 7 8 9
//Occurrences:  1 2 2 0 1 0 0 1 0 1

int main(void)
{
    int digit_count[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    if (n == 0) digit_count[0]++;

    printf("Digit:%10d", 0);
    for (int i = 1; i < 10; i++) printf("%2d", i);
    printf("\n");

    while (n > 0) {
        digit = n % 10;
        digit_count[digit]++;
        n /= 10;
    }

    printf("Occurrences:  ");
    for (int i = 0; i < 10; i++) printf("%2d",digit_count[i]);

    printf("\n");

    return 0;
}