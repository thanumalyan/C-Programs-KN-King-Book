#include <stdio.h>

//If i and j are positive integers, does (-i)/j always have the same value as - (i/j)? Justify your answer.

int main(void)
{
//    Implementation-Defined Behavior
//The term implementation-defined will arise often enough that it's worth taking a
//moment to discuss it. The C standard deliberately leaves parts of the language
//unspecified, with the understanding that an "implementation"-the software needed
//to compile, link, and execute programs on a particular platform-will fill in the
//details. As a result, the behavior of the program may vary somewhat from one
//implementation to another. The behavior of the / and % operators for negative operands in C89 is an example of implementation-defined behavior.
//Leaving parts of the language unspecified may seem odd or even dangerous,
//but it reflects C's philosophy. One of the language's goals is efficiency, which often
//means matching the way that hardware behaves. Some CPUs yield -1 when -9 is
//divided by 7, while others produce -2; the C89 standard simply reflects this fact of
//life.
//It's best to avoid writing programs that depend on implementation-defined
//behavior. If that's not possible, at least check the manual carefully-the C standard
//requires that implementation-defined behavior be documented.

    printf("%d\n", (-9)/7);
    printf("%d\n", -(9/7));
//ANSWER : The rules aren't as complicated as they may first appear. In both C89 and C99, the
//goal is to ensure that the value of (a / b) *b + a% bwill always be equal to a
//(and indeed, both standards guarantee that this is the case, provided that the value
//of a / b is "representable"). The problem is that there are two ways for a / b and
//a% b to satisfy this equality if either a or b is negative, as seen in C89, where
//either -9/ 7 is -1 and -9% 7 is -2, or -9/7 is -2 and -9% 7 is 5. In the first
//case, (-9/7) * 7+-9%7 has the value -1 x 7 + −2 = -9, and in the second
//case, (-9/7) *7+- 9% 7 has the value -2 ×7+5=−9. By the time C99 rolled
//around, most CPUs were designed to truncate the result of division toward zero, so
//this was written into the standard as the only allowable outcome.

    return 0;
}