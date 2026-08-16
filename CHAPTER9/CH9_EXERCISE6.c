#include <stdio.h>

//6. Write a function digit (n, k) that returns the kth digit (from the right) in n (a posi-
//tive integer). For example, digit (829, 1) returns 9, digit (829, 2) returns 2. and
//digit (829, 3) returns 8. If k is greater than the number of digits in n, have the func-
//tion return 0

int digit (long int n, long int k);

int main(void)
{
    long int n, k;
    // JUST FOR FUNCTION RUNNING PURPOSE
    printf("Enter n and k: ");
    scanf("%ld%ld", &n, &k);
    
    printf("Output: %ld", digit(n, k));

    return 0;
}

int digit(long int n,  long int k) 
{
    int count = 0, num = n;

    do {
        count++;
        num = n % 10;
        n /= 10;
    } while (count != k);

    return num;
}