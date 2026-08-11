#include <stdio.h>
//TO CALCULATE VOLUME OF A SPHERE WITH RADIUS = 10 METRES
int main(void)
{
    int r=10;
    double v=(4.0f/3.0f)*3.14159265*r*r*r;
    printf("VOLUME : %.3lf (Cubic Metres)",v);
    return 0;
}