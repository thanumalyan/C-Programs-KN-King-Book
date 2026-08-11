#include <stdio.h>

//Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then
//displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
//and diagonals:
//Enter the numbers from 1 to 16 in any order:
//16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
//16 3 2 13
//5 10 11 8
//9 6 7 12
//4 15 14 1
//Row sums: 34 34 34 34
//Column sums: 34 34 34 34
//Diagonal sums: 34 34
//If the row, column, and diagonal sums are all the same (as they are in this example), the
//numbers are said to form amagic square. The magic square shown here appears in a 1514
//engraving by artist and mathematician Albrecht Dürer. (Note that the middle numbers in the
//last row give the date of the engraving.)

int main(void) {
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
     
    printf("\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
    
    printf("\nRow sums: %d %d %d %d\nColumn sums: %d %d %d %d\nDiagonal Sums: %d %d\n\n", a+b+c+d, e+f+g+h, i+j+k+l, m+n+o+p, a+e+i+m, b+f+j+n, c+g+k+o, d+h+l+p, a+f+k+p, d+g+j+m );

    return 0;
}
