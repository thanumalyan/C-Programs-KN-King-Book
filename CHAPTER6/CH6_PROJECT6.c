#include <stdio.h>

//Write a program that prompts the user to enter a number n, then prints all even squares
//between 1 and n. For example, if the user enters 100, the program should print the following:
//4
//16
//36
//64
//100

int main(void)
{
    float n;
    int i;

    printf("Enter a number: ");
    scanf("%f", &n);

    for (i = 2; i * i <= n; ) 
    {
        printf("%d\n", i * i);
        i += 2;
    }
    return 0;
}