#include <stdio.h>

//Write a program that reverses the words in a sentence:
//Enter a sentence: you can cage a swallow can't you?
//Reversal of sentence: you can't swallow a cage can you?
//Hint: Use a loop to read the characters one by one and store them in a one-dimensional
//char array. Have the loop stop at a period, question mark, or exclamation point (the "terminating character"),
//which is saved in a separate char variable. Then use a second loop to
//search backward through the array for the beginning of the last word. Print the last word,
//then search backward for the next-to-last word. Repeat until the beginning of the array is
//reached. Finally, print the terminating character.

int main(void)
{
    char sentence[100];
    char c;
    int i = 0, j, len, copy_j;

    printf("Enter a sentence: ");

    while ( (c = getchar()) !=  '.' && c != '?' && c != '!') sentence[i++] = c;

    printf("Reversal of sentence: ");

    len = i - 1;
    j = len;                               

    while (j >= 0 && sentence[j] == ' ') j--; /* TO REMOVE THE SPACES B/W SENTENCE AND TERMINATING CHARACTER IF EXIST */

    while (j >= 0) {
        len = j;
        for (;;j--) {
            if (j == 0 || sentence[j] == ' ') {  
                copy_j = (j == 0) ? j : j + 1;
                break;
            } 
        }
        for ( ; copy_j <= len; copy_j++) {
            if (sentence[copy_j] != ' ')
                putchar(sentence[copy_j]);
        }
        j--;
        if (j >= 0) printf(" ");
    }

    printf("%c", c);

    return 0;


}