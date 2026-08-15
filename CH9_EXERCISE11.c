#include <stdio.h>
#include <ctype.h>

//11. Write the following function:
//float compute_GPA (char grades [] , int n) ;
//The grades array will contain letter grades (A, B, C, D, or F, either upper-case or lower-
//case); n is the length of the array. The function should return the average of the grades
//(assume that A = 4, B = 3, C = 2, D = 1, and F = 0).

float compute_GPA(int n, char grades[n]);

int main (void)
{
    int size;

    printf("\t\t--GPA Average Computer--\n\nEnter the number of grades: ");
    scanf("%d", &size);

    if (size <= 0) {printf("\nINVALID SIZE ENTRY!!!\nEXITED FROM THE PROGRAM.\n"); return 0; }

    char grades[size], c;

    printf("\nEnter the grades: ");

    for (int i = 0; i < size;) 
        if ( ((c = getchar()) >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ) 
            grades[i++] = c;

    printf("\nThe average of the grades: %.3f\n", compute_GPA(size, grades));

    return 0;
}

float compute_GPA(int n, char grades[n]) {
    float sum = 0.0f;
    for (int i = 0; i < n; i++) {
        switch (toupper(grades[i])) {
            case 'A': sum += 4; break;
            case 'B': sum += 3; break;
            case 'C': sum += 2; break;
            case 'D': sum += 1; break;
        }
    }
    return sum / n;
}