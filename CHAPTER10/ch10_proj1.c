/*******************************************************************************
 * TO CHECK WHETHER THE PARENTHESES/BRACES ARE NESTED PROPERLY BY USING STACK  *
 * SAMPLE RUN:                                                                 *           
 *      Enter parentheses and/or braces: ( () {} { () })                       *
 *      Parentheses/braces are nested properly                                 *                                      
 *                                                                             *
 *******************************************************************************/


#include <stdio.h>
#include <stdbool.h>
#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;  //next free position

/* function prototypes */
void push(char element);
char pop(void);
bool is_empty(void);
bool is_full(void);

//main=>calls isfull,push,pop,isempty
int main(void)
{
    char temp, popped_item;
    printf("\t\t--TO CHECK WHETHER PARENTHESES/BRACES ARE NESTED PROPERLY--\n\n");
    printf("Enter parentheses and/or braces: ");

    do {
        if( (temp = getchar()) == '(' || temp == '{' ) {

            if (is_full()) {
                printf("Exceeds allocated memory!!!");
                return 0;
            }
           
            push(temp);
            
        }

        else if ( temp == ')' || temp == '}') {
                
                if (is_empty()
                    || !((temp == ')' && (popped_item = pop()) == '('  ) ||  ( temp == '}' && (popped_item = pop()) == '{'  ) ))
                {
                        printf("Parentheses/braces are NOT nested properly\n");
                        return 0;
                }
        }
        
    } while(temp != '\n');

    if ( !(is_empty())) {
        printf("Parentheses/braces are NOT nested properly\n");
        return 0;
    }
    printf("Parentheses/braces are nested properly\n");

    return 0;
}



void push(char element)
{
    if ( !(is_full())) {
        contents[++top] = element; 
    }
}

char pop()
{
    if ( !(is_empty())) {
        top--;
        return contents[top + 1];
    }
}


bool is_full()
{
    if (top == STACK_SIZE - 1)
        return true;
    return false;
}


bool is_empty()
{
    if (top == 0) 
        return true;
    return false;
}



