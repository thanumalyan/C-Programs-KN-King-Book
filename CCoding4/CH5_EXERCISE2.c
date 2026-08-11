#include <stdio.h>

//(a) i = 10; j = 5;
//printf ("%d", !i < j);
//(b) i = 2; j = 1;
//printf ("%d", !!i + !j);
//(c) i = 5; j = 0; k =-5;
//printf("%d", i && j || k);
//(d) i = 1; j = 2; k = 3;
//printf("%d", i < j || k);

int main(void)
{
    int i, j, k;

    i = 10; j = 5;
    printf("%d\n", !i < j);

    i = 2; j  = 1;
    printf("%d\n", !!i + !j);

    i = 5; j = 0; k = -5;
    printf("%d\n", i && j || k);

    i = 1; j = 2; k = 3;
    printf("%d\n", i < j || k);

    return 0;
}