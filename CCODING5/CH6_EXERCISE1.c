#include <stdio.h>

//What output does the following program fragment produce?
//i = 1;
//while (i <= 128) {
//printf("%d ", i);
//i *= 2;
//}

int main(void)
{
    int i;

    i = 1;
    while (i <= 128)
    {
        printf("%d ", i);
        i *= 2;
    }

    return 0;

}