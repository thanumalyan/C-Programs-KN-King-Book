#include <stdio.h>

//Here's a simplified version of the Beaufort scale, which is used to estimate wind force:
//Speed (knots)     Description
//Less than 1       Calm
//1-3               Light air
//4-27              Breeze
//28-47             Gale
//48-63             Storm
//Above 63          Hurricane
//Write a program that asks the user to enter a wind speed (in knots), then displays the corresponding description.

int main(void)
{
    float windSpeed;

    printf("Enter a wind speed (in knots) : ");
    scanf("%f", &windSpeed);

    if (windSpeed < 1) printf("Calm");
    else if (windSpeed <= 3) printf("Light air");
    else if (windSpeed <= 27) printf("Breeze");
    else if (windSpeed <= 47) printf("Gale");
    else if (windSpeed <= 63) printf("Storm");
    else printf("Hurricane");

    return 0;
}
