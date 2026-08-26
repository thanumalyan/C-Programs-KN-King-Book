//Modify Programming Project 17 from Chapter 8 so that it includes the following functions:
//void create _ magic square (int n, char magic square [n] (n) ) ,
//void print _ magic square (int n, char magic _ square [n] [n) ) ;
//After obtaining the number n from the user, main will call create _ magic square,
//passing it an n x n array that is declared inside main. create _ magic _ square will fill
//the array with the numbers 1, 2, n^2 as described in the original project. main will then
//call print _ magic square, which will display the array in the format described in the
//original project. Note: If your compiler doesn't support variable-length arrays. declare the
//array in main to be 99 x 99 instead of n x n and use the following prototypes instead:
//void create_magic_square (int n, char magic_square [99] [99] );
//void print_magic_square (int n, char magic_square [99] [99] );

/*PROJECT 17Q
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
*/


#include <stdio.h>

void create_magic_square(int n, int magic_square [99][99]);
void print_magic_square(int n, int magic_square [99][99]);

int main(void)
{
    int n;
    int magic_square[99][99] = {0};

    printf("\t\t--MAGIC SQUARE--\n\nThis program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\nEnter size of magic square: ");
    scanf("%d", &n);

    if (n % 2 == 0 || n < 1 || n > 99) {
        printf("INVALID VALUE ENTRY!!!\nEXITED FROM THE PROGRAM\n");
        return 0;
    }

    create_magic_square(n, magic_square);

    print_magic_square(n, magic_square);

    return 0;
}

void create_magic_square (int n, int magic_square [99][99]) 
{
    int row = 0, col = n / 2, prev_row, prev_col;

    magic_square[row][col] = 1;

    for (int i = 2; i <= n * n; i++) {

        prev_row = row;     prev_col = col;

        if (row - 1 >= 0) row--;
        else row = n - 1;   

        if (col + 1 < n) col++;
        else col = 0;

        if (magic_square[row][col] == 0) magic_square[row][col] = i;
        else {
            magic_square[++prev_row][prev_col] = i;

            row = prev_row;     col = prev_col;
        }
    }
    
    return;
}

void print_magic_square(int n, int magic_square[99][99]) 
{
    for (int i = 0; i < n; i++) {
        printf("\n");
        for (int j = 0; j < n; j++) {
            printf("%5d", magic_square[i][j]);
        } 
    }

    return;
}


