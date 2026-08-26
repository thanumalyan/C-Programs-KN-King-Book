#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

//Modify Programming Project 16 from Chapter 8 so that it includes the following functions:
//void read_word (int counts [26] ) ;
//bool equal _ array (int counts2[26] ,
//int counts2 [26] ) ;
//main will call read_word twice, once for each of the two words entered by the user. As it
//reads a word, read_word will use the letters in the word to update the counts array, as
//described in the origÄnal project. (main will declare two arrays, one for each word. These
//arrays are used to track how many times each letter occurs in the words.) main will then
//call equal array, passing it the two arrays. equal _ array will return true if the ele-
//ments in the two arrays are identical (indicating that the words are anagrams) and false
//otherwise.

void read_word (int counts [26]);
bool equal_array (int counts1 [26], int counts2[26]);



int main(void)
{
    int counts1[26] = {0}, counts2[26] = {0};

    printf("\t\t--ANAGRAM CHECKER--\n\nEnter first word: ");
    read_word(counts1);

    printf("Enter  second word: ");
    read_word(counts2);

    if (equal_array(counts1, counts2)) {
        printf ("The words are anagrams\n");
        return 0;
    }

    printf("The two words are NOT anagrams.\n");

    return 0;  
}

void read_word (int array[26]) {
    int ch;
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            ch = tolower(ch);
            array[ch - 'a']++;
        }
    }

    return;
}

bool equal_array(int counts1[26], int counts2[26]) {
    for (int i = 0; i < 26; i++) {
        if (counts1[i] != counts2[i]) 
            return false;
    }

    return true;
}