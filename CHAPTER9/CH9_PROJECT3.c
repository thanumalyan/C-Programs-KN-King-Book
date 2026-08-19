#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//3. Modify Programming Project 9 from Chapter 8 so that it includes the following functions:
//void generate_random_walk (char walk [10][10] ) ;
//void print _ array (char walk [10][10] ) ;
//main first calls generate random walk, which initializes the array to contain
//characters and then replaces some of these characters by the letters A through Z, as
//described in the original project. main then calls print _ array to display the array on
//the screen.

#define ROWS 10
#define COLS 10

void  generate_random_walk(char walk[ROWS][COLS]);
void print_array(char walk[ROWS][COLS]);

int main (void)

{
    char random_walk[ROWS][COLS];

    generate_random_walk(random_walk);
    print_array(random_walk);

    return 0;
}

void generate_random_walk(char walk[ROWS][COLS])

{
    int i, j, size, chosen_index, options[4];

    srand( (unsigned) time(NULL));

    for (i = 0; i < ROWS; i++)
        for (j = 0; j < COLS; j++)
            walk[i][j] = '.';

    

    i = j = 0;
    walk[i][j] = 'A';
    
    for (char c = 'B'; c <= 'Z'; c++) {

        size = 0;

        if (i - 1 >= 0 && walk[i - 1][j] == '.') options[size++] = 0;               //UP
        if (i + 1 < ROWS && walk[i + 1][j] == '.') options[size++] = 1;             //DOWN
        if (j - 1 >= 0 && walk[i][j - 1] == '.') options[size++] = 2;               //LEFT
        if (j + 1 < COLS && walk[i][j + 1] == '.') options[size++] = 3;             //RIGHT      

        if (size == 0) { 
            return;
        }

        chosen_index = rand() % size;

        switch (options[chosen_index]) {
            case 0: i--; break;
            case 1: i++; break;
            case 2: j--; break;
            case 3: j++; break;
        }

        walk[i][j] = c;

    }

    return;
}

void print_array(char walk[ROWS][COLS])

{
    for (int i = 0; i < ROWS; i++) {
        printf("\n");
        for (int j = 0; j < COLS; j++) {
            printf("%c ", walk[i][j]);
        }
    }

    printf("\n");

    return;
}