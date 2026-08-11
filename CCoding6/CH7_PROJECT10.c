#include <stdio.h>
#include <ctype.h>

//Write a program that counts the number of vowels (a, e, i, o, and u) in a sentence:
//Enter a sentence: And that's the way it is.
//Your sentence contains 6 vowels.

int main(void)
{
    char c;
    int count = 0;

    printf("Enter a sentence: ");
    scanf("%c", &c);

    while (c != '\n')
    {
        if ( (c = toupper(c)) == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') count += 1;
        scanf("%c", &c);
    }
    
    printf("Your sentence contains %d vowels", count);

    return 0;

}