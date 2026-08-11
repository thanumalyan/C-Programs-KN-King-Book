#include <stdio.h>
#include <stdint.h>

//Use typedef to create types named Int8, Int16, and Int32. Define the types so that
//they represent 8-bit, 16-bit, and 32-bit integers on your machine.

typedef int8_t Int8;
typedef int16_t Int16;
typedef int32_t Int32;

int main(void)
{
    Int8 a = 100;
    Int16 b = 20000;
    Int32 c = 1000000;

    printf("%d %d %d", a, b, c);

    return 0;

}