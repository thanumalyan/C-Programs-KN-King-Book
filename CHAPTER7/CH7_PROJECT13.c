#include <stdio.h>
#include <stdbool.h>

//Write a program that calculates the average word length for a sentence:
//Enter a sentence: It was deja vu all over again.
//Average word length: 3.4
//For simplicity, your program should consider a punctuation mark to be part of the word to
//which it is attached. Display the average word length to one decimal placе.

int main(void)
{
    char c;

    float avg = 0.0f;
    int lettersCount = 0, wordsCount = 0;
    
     
    printf("Enter a sentence: ");
    while ( (c = getchar()) != '\n') 
    {
        if (c == ' ') 
            if (lettersCount > 0) {
            wordsCount++;
            avg += lettersCount;
            lettersCount = 0.0f;
        } 

        if (c != ' ') lettersCount++;
    }
 

    if (lettersCount > 0) {
        wordsCount++;
        avg += lettersCount;
    }

    
    if (wordsCount > 0) {
        avg /= (float) wordsCount; 
        printf("Average word length: %.1f\n", avg);
    }
    else printf("No words entered.\n");
    

    return 0;
}