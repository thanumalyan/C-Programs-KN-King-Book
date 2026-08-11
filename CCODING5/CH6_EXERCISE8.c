#include <stdio.h>

//for (i = 10; i >= 1; i /= 2)
//printf("%d ", i++);

int main(void)
{
    int i;

    for (i = 10; i >= 1; i /= 2) printf("%d ", i++);

    return 0;
}