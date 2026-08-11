#include <stdio.h>
#include <ctype.h>

//The prototypical Internet newbie is a fellow named B1FF, who has a unique way of writing
//messages. Here's a typical B1FF communiqué:
//H3Y DUD3, C 15 R1LLY CO0L!!!!
//Write a "B1FF filter" that readsa message entered by the user and translates it into BIFFspeak:
//Enter message: Hey dude, C is rilly cool
//In B1FF-speak: H3Y DUD3, C 15 RILLY C00L!!!!!!!!!!
//Your program should convert the message to upper-case letters, substitute digits for certain
//letters (A→4, В→8, E→3, I→1, O→0, S→5), and then append 10 or so exclamation marks.
//Hint: Store the original message in an array of characters, then go back through the array,
//translating and printing characters one by one.

#define SIZE_OF_ARRAY(x) ((int) (sizeof(x) / sizeof((x)[0])))

int main(void)
{
    char messageArray[500];
    int message_len, i;
    printf("Enter message: ");


    for (i = 0; i < SIZE_OF_ARRAY(messageArray) - 1; i++) {
        messageArray[i] = getchar();
        if (messageArray[i] == '\n') break;
    }

    message_len = i;            /* Ignores '\n' */
    printf("In B1FF-speak: ");

    for (i = 0; i < message_len; i++) {
        switch(messageArray[i] = toupper( (unsigned char) messageArray[i])) {

            case 'A': putchar('4'); break;
            case 'B': putchar('8'); break;
            case 'E': putchar('3'); break;
            case 'I': putchar('1'); break;
            case 'O': putchar('0'); break;
            case 'S': putchar('5'); break;

            default: putchar(messageArray[i]); break;
        }
        
    }

    printf("!!!!!!!!!!\n");

    return 0;
}