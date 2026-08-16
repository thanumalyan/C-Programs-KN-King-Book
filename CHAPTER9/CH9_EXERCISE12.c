#include <stdio.h>

//12. Write the following function:
//double inner_product (double a[] , double b[] , int n);
//The function should return a [0]* b [0] + a [1] * b [1] + ... + a [n-1] * b [n—1].

double inner_product(double a[], double b[], int n);

int main()
{
    int size, n;

    printf("\t\t--SUM OF THE INNER PRODUCT CALCULATOR--\n\nEnter a size for the two arrays: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("INVALID SIZE ENTRY!!!!\nEXITED FROM THE PROGRAM\n");
        return 0;
    }

    double a[size], b[size];

    printf("\nEnter %d Elements for the 1st array: ", size);
    for (int i = 0; i < size; i++) scanf("%lf", &a[i]);
    printf("Enter %d Elements for the 2nd array: ", size);
    for (int i = 0; i < size; i++) scanf("%lf", &b[i]);

    do {
        
        printf("\nEnter the number of elements to compute in it: ");
        scanf("%d", &n);
        if (n < 1 || n > size) printf("\t\tPlease.... Enter a valid number");
        
    } while (n < 1 || n > size);

    printf("\nThe value of the inner product function: %.3lf\n", 
        inner_product(a, b, n));

    return 0;
}

double inner_product(double a[], double b[], int n) 
{
    double total = 0.0;

    for (int i = 0; i < n; i++) {
        total += a[i] * b[i];
    }

    return total;
}