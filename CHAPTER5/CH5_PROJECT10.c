#include <stdio.h>

//Using the switch statement, write a program that converts a numerical grade into a letter
//grade:
//Enter numerical grade: 84
//Letter grade: B
//Use the following grading scale: A = 90-100, B = 80-89, С = 70–79, D = 60-69, F=0-59.
//Print an error message if the grade is larger than 100 or less than 0. Hint: Break the grade
//into two digits, then use a switch statement to test the ten's digit.

int main(void)
{
    int num, tens, ones;

    printf("Enter numerical grade: ");
    scanf("%d", &num);

    tens = num / 10;

    switch (tens) 
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: printf("Letter grade: F"); break;
        case 6: printf("Letter grade: D"); break;
        case 7: printf("Letter grade: C"); break;
        case 8: printf("Letter grade: B"); break;
        case 9:
        case 10: printf("Letter grade: A"); break;
    }

    return 0;

}