#include <stdio.h>

//Modify Programming Project 6 from Chapter 3 so that the user may add, subtract, multiply,
//or divide two fractions (by entering either +, -, *, or / between the fractions).

// 6. Modify the addfrac.c program of Section 3.2 so that the user enters both fractions at the
//same time, separated by a plus sign:
//Enter two fractions separated by a plus sign: 5/6+3/4
//The sum is 38/24

int main(void)
{
    char operator;
    int num1, denom1, num2, denom2;

    printf("Enter two fractions separated by an operator (+, -, *, /): ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &operator, &num2, &denom2);

    if (denom1 == 0 || denom2 == 0) { printf("DivisionByZero Error!!"); return 0; }

    switch (operator) 
    {
        case '+':
                    printf("The sum is %d/%d\n",
                        num1 * denom2 + denom1 * num2,
                        denom1 * denom2);
                    break;
                    
        case '-':
                    printf("The difference is: %d/%d\n",
                        num1 * denom2 - denom1 * num2,
                        denom1 * denom2);
                    break;
        case '/': 
                    if (num2 == 0) printf("DivisionByZero Error!!");
                    else 
                    {
                        printf("The quotient is: %d/%d\n",
                            num1 * denom2,
                            denom1 * num2);
                    }
                    break;
        case '*':
                    printf("The product is: %d/%d\n",
                        num1 * num2,
                        denom1 * denom2);
                    break;
        default:    
                    printf("INVALID!!\n");
                    break;
    }

    return 0;
}
