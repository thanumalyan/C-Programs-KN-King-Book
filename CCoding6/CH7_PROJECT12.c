#include <stdio.h>

//Write a program that evaluates an expression:
//Enter an expression: 1+2.5*3
//Value of expression: 10.5
//The operands in the expression are floating-point numbers; the operators are +, -, *, and /.
//The expression is evaluated from left to right (no operator takes precedence over any other
//operator).

int main (void)
{
    float value, n;
    char c;

    printf("Enter an expression: ");
    scanf("%f", &value);

    while ( (c = getchar()) != '\n') {       
        scanf("%f", &n);
        switch (c) {
            case '+': value += n; break;
            case '-': value -= n; break;
            case '*': value *= n; break;
            case '/': value /= n; break;
        }
    }

    printf("Value of expression: %.1f", value);

    return 0;
}

