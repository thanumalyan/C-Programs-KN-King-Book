#include <stdio.h>

//Write a program that prints an n × n magic square (a square arrangement of the numbers
//1, 2,..., n² in which the sums of the rows, columns, and diagonals are all the same). The
//user will specify the value of n:

//This program creates a magic square of a specified size.
//The size must be an odd number between 1 and 99.
//Enter size of magic square: 5
//17 24  1  8 15
//23  5  7 14 16
// 4  6 13 20 22
//10 12 19 21  3
//11 18 25  2  9

//Store the magic square in a two-dimensional array. Start by placing the number 1 in the middle of row 0. Place each of the remaining numbers 2, 3, ..., n² by moving up one row and
//over one column. Any attempt to go outside the bounds of the array should "wrap around"
//to the opposite side of the array. For example, instead of storing the next number in row -1,
//we would store it in row n- 1 (the last row). Instead of storing the next number in column n,
//we would store it in column 0. If a particular array element is already occupied, put the
//number directly below the previously stored number. If your compiler supports variablelength arrays, declare the array to have n rows and n columns. If not, declare the array to
//have 99 rows and 99 columns.

int main()
 {
    int n, i, j, row, col, prev_row, prev_col;
   

    printf("This program creates a magic square of a specified size.\n");

    do {
        printf("The size must be an odd number between 1 and 99.\n");
        printf("Enter size of magic square: ");
        scanf("%d", &n);
    } while (n < 1 || n > 99 || n % 2 == 0);

    int magic_square[n][n];

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            magic_square[i][j] = 0;

    
    prev_row = row = 0;
    prev_col = col = (n - 1) / 2;

    for (i = 1; i <= n * n; i++) {
        if (magic_square[row][col] == 0)
            magic_square[row][col] = i;
        else {
            if (prev_row != n - 1) {
                magic_square[++prev_row][prev_col] = i;
                row = prev_row;
                col = prev_col;
            }
            else {
                magic_square[prev_row = 0][prev_col] = i;
                row = prev_row;
                col = prev_col;
            }
        }

        prev_row = row;
        prev_col = col;

        if (row == 0) 
            row = n - 1;
    
        else 
            row -= 1; 
        
        if (col == n - 1) 
            col = 0;
        
        else 
            col += 1;
          
    }

    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%3d ", magic_square[i][j]);

    }  

    return 0;

}