#include <stdio.h>

//Write a program that reads a 5 x 5 array of integers and then prints the row sums and the
//column sums:
//Enter row 1: 8 3 9 0 10
//Enter row 2: 3 5 17 1 1
//Enter row 3: 2 8 6 23 1
//Enter row 4: 15 7 3 2 9و
//Enter row 5: 6 14 2 6 0
//Row totals: 30 27 40 36 28
//Column totals: 34 37 37 32 21

#define ROWS 5
#define COLS 5

int main(void)
{
    int array[ROWS][COLS], i, j, rowSum, columnSum;

    for (i = 0; i < ROWS; i++) {
        printf("Enter row %d: ", i + 1);
        for (j = 0; j < COLS; j++) scanf("%d", &array[i][j]);    
    }

    printf("Row totals: ");
    for (i = 0; i < ROWS; i++) {
        rowSum = 0;
        for (j = 0; j < COLS; j++) rowSum += array[i][j];
        printf("%d ", rowSum);
    }

    printf("\n");

    printf("Column totals: ");
    for (i = 0; i < COLS; i++) {
        columnSum = 0;
        for (j = 0; j < ROWS; j++) columnSum += array[j][i];
        printf("%d ", columnSum);
    }

    printf("\n");

    return 0;

}