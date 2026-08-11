#include <stdio.h>
//Write a program that asks the user to enter a value for x and then displays the value of the following polynomial: 3(x*x*x*x*x) + 5(x*x*x*x) - 5(x*x*x) - (x*x) + 7(x) - 6
int main(void)
{
    float x, value;

    printf("Enter a value for x [3(x*x*x*x*x) + 5(x*x*x*x) - 5(x*x*x) - (x*x) + 7(x) - 6)] : ");
    scanf("%f", &x);
      
    value = 3*(x*x*x*x*x) + 5*(x*x*x*x) - 5*(x*x*x) - (x*x) + 7*(x) - 6;

    printf("Value for the polynomial : %.3f", value);
    return 0;



    
}