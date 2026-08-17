#include <stdio.h>  
#include <time.h>
#include <stdlib.h>

//Write a program that generates a "random walk" across a 10 × 10 array. The array will contain characters (all'. initially).
//The program must randomly "walk" from element to element, always going up, down, left, or right by one element. 
//The elements visited by the
//program will be labeled with the letters A through Z, in the order visited. Here's an example
//of the desired output:

//A . . . . . . . .
//B C D . . . . . . 
//. F E . . . . . .
//H G . . . . . . .
//I . . . . . . . . 
//J . . . . . . . Z
//K . . R S T U V Y 
//L M P Q . . . W X
//. N O . . . . . .

//Hint: Use the srand and rand functions (see deal.c) to generate random numbers.
//After generating a number, look at its remainder when divided by 4. There are four possible
//values for the remainder-0, 1, 2, and 3-indicating the direction of the next move. Before
//performing a move, check that (a) it won't go outside the array, and (b) it doesn't take us to
//an element that already has a letter assigned. If either condition is violated, try moving in
//another direction. If all four directions are blocked, the program must terminate. Here's an
//example of premature termination

#define ROWS 10
#define COLS 10
#define PRINT_ARRAY_ELEMENTS(array, rows, cols) for (int i = 0; i < (rows); i++) {printf("\n"); for(int j = 0; j < (cols); j++) printf("%c ", array[i][j]);}

int main (void)
{
    char random_walk[ROWS][COLS];
    int chosen_index, i, j, options[4], size = 0;
    
    srand( (unsigned) time(NULL));

    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            random_walk[i][j] = '.';

    random_walk[0][0] = 'A';

    i = j = 0;
  
    for (char c = 'B'; c <= 'Z'; c++) {

        size = 0;
        
        if (i - 1 >= 0 && random_walk[i - 1][j] == '.') options[size++] = 0;    // UP
        if (j - 1 >= 0 && random_walk[i][j - 1] == '.') options[size++] = 1;    // LEFT
        if (i + 1 < ROWS && random_walk[i + 1][j] == '.') options[size++] = 2;  // DOWN
        if (j + 1 < COLS && random_walk[i][j + 1] == '.') options[size++] = 3;  // RIGHT

        if (size == 0) {
            PRINT_ARRAY_ELEMENTS(random_walk, ROWS, COLS);
            return 0;
        }


        chosen_index = rand() % size;

        switch (options[chosen_index]) {
            case 0: i--; break;
            case 1: j--; break;
            case 2: i++; break;
            case 3: j++; break;
        }

        random_walk[i][j] = c;
    }

    PRINT_ARRAY_ELEMENTS(random_walk, ROWS, COLS);

    return 0;
}