#include <stdio.h>

//Modify Programming Project 7 so that it prompts for five quiz grades for each of five students,
//then computes the total score and average score for each student, and the average
//score, high score, and low score for each quiz.

#define ROWS 5
#define COLS 5

int main(void)
{
    int array[ROWS][COLS], i, j, totalScore_stud, totalScore_quiz, highScore_quiz, lowScore_quiz;

    for (i = 0; i < ROWS; i++) {
        printf("Enter grades of student %d: ", i + 1);
        for (j = 0; j < COLS; j++) scanf("%d",  &array[i][j]);    
    }

    printf("\n\n\t\tQUIZ OVERVIEW\n\n");


    for (i = 0; i < ROWS; i++) {
        totalScore_stud = 0;

        for (j = 0; j < COLS; j++) totalScore_stud += array[i][j];

        printf("Student %d => Total score: %d \tAverage score: %.2f\n\n", i + 1, 
                totalScore_stud, (float) totalScore_stud / COLS);
    }




    printf("\n\n");
    for (i = 0; i < COLS; i++) {
        totalScore_quiz = 0;
        highScore_quiz = lowScore_quiz = array[0][i];


        for (j = 0; j < ROWS; j++) { 
            totalScore_quiz += array[j][i];
            if (array[j][i] > highScore_quiz) highScore_quiz = array[j][i];
            if (array[j][i] < lowScore_quiz) lowScore_quiz = array[j][i];
        }

        printf("Quiz number %d => Average score: %.2f\tHigh score: %d\tLow score: %d\n\n", i + 1,
               (float) totalScore_quiz / ROWS, highScore_quiz, lowScore_quiz);
    }

    return 0;

}