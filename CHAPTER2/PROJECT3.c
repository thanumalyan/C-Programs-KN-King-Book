#include <stdio.h>
//TO CALCULATE VOLUME OF A SPHERE WITH RADIUS PROVIDED BY THE USER INPUT
int main(void)
{
    int r;
    double v;

    printf("Enter the radius of the sphere : ");
    scanf("%d", &r);

    v=(4.0f/3.0f)*3.14159265*r*r*r;
    
    printf("VOLUME : %.3lf (Cubic Metres)",v);
    
    return 0;
}