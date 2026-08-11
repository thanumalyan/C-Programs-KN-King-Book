#include <stdio.h>

//Write a program that formats product information entered by the user. A session with the
//program should look like this:
//Enter item number: 583
//Enter unit price: 13.5
//Enter purchase date (mm/dd/yyyy): 10/24/2010
//Item  Unit    Purchase
//      Price   Date
//583   $ 13.50 10/24/2010
//The item number and date should be left justified; the unit price should be right justified.
//Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns.


int main(void)
{
    int item, mm, dd, yyyy;
    float UnitPrice;

    printf("Enter item number: ");
    scanf("%d", &item);

    printf("Enter unit price: ");
    scanf("%f", &UnitPrice);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("Item\tUnit\tPurchas\n\tPrice\tDate\n%d\t$ %.2f\t%d/%d/%d", item, UnitPrice, mm, dd, yyyy );

    return 0;
}
