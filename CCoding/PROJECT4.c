#include <stdio.h>
//user provides amount in dollars-and-cents and program should displays the amount with the 5% of tax
int main(void)
{
    float amt, amt_with_tax_added;

    printf("Enter an amount : ");
    scanf("%f", &amt);

    amt_with_tax_added=amt+(0.05*amt);

    printf("With tax added : %.2f", amt_with_tax_added);

    return 0;


}