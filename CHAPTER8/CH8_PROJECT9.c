#include <stdio.h>  
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

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

int main(void)
{
    char array[ROWS][COLS], letter;
    int i, j, choice, size;
    bool violation_occurred = false, termination;
    

    srand((unsigned) time(NULL));

    for (i = 0; i < ROWS; i++) 
        for (j = 0; j < COLS; j++) array[i][j] = '.';

    i = j = 0;
    array[i][j] = 'A';

    for (letter = 'B'; letter <= 'Z'; letter++) {
        choice = rand() % 4;
        bool blocked[4] = {false};
        int options[4] = {0, 1, 2, 3}; 
        size = 4;


        do {

            switch (options[choice]) {
                case 0:                                         /* LEFT */
                        if (j - 1 < 0 || array[i][j - 1] != '.') {  
                            choice = rand() % (--size);
                            violation_occurred = true; 
                            blocked[0] = true;
                            options = 
                            
                        }
                        else {
                            violation_occurred = false;
                            array[i][--j] = letter;
                        }
                        break;

                case 1:                                         /* RIGHT */
                        if (j + 1 >= COLS || array[i][j + 1] != '.') {
                            choice = rand() % 3;
                            violation_occurred = true;
                            blocked[1] = true;
                            
                        }
                        else {
                            violation_occurred = false;
                            array[i][++j] = letter;
                        }
                        break;

                case 2:                                         /* UP */
                        if (i - 1 < 0 || array[i - 1][j] != '.') {
                            choice = rand() % 3;
                            violation_occurred = true;
                            blocked[2] = true;
                           
                        }
                        else {
                            violation_occurred = false;
                            array[--i][j] = letter;
                        }
                        break;

                case 3:                                         /* DOWN */
                        if (i + 1 >= ROWS || array[i + 1][j] != '.') {
                            choice = rand() % 3;
                            violation_occurred = true;
                            blocked[3] = true;
                            
                        }
                        else {
                            violation_occurred = false;
                            array[++i][j] = letter;
                        }
                        break;
            }
            termination = true;
            for (int k = 0; k < 4; k++) if (blocked[k] == false) termination = false;

            if (termination) {
                printf("\n\n\tA RANDOM WALK\n\n");
                PRINT_ARRAY_ELEMENTS(array, ROWS, COLS);
                return 0;
            }

        } while (violation_occurred);
    }

    printf("\n\n\tA RANDOM WALK\n\n");

    PRINT_ARRAY_ELEMENTS(array, ROWS, COLS);

    return 0;

}