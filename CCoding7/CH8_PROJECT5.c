#include <stdio.h>

//Modify the interest.c program of Section 8.1 so that it compounds interest monthly
//instead of annually. The form of the output shouldn't change; the balance should still be
//shown at annual intervals.

#define NUM_RATES(x) ((int)(sizeof(x) / sizeof((x)[0])))
#define INITIAL_BALANCE 100.00


int main(void) {

    int i, low_rate, num_years, year, month;
    double value [5];

    printf ("Enter interest rate: ");
    scanf ("%d", &low_rate);
    printf("Enter number of years: ");
    scanf ("%d", &num_years);

    printf("\nYears");

    for (i = 0; i < NUM_RATES(value); i++){
        printf("%11d%%", low_rate + i);

        value [i] = INITIAL_BALANCE;}
    printf("\n");

    for (year = 1; year <= num_years; year++) {
        printf("%3d ", year);

        
        
            for (i = 0; i < NUM_RATES(value); i++) {
                for (month = 1; month <= 12; month++) {
                    value[i] *= 1 + (low_rate + i) / 1200.0;
                
            } 
            printf("%12.2f", value [i]);
        }
       

        printf("\n"); 
    }
    return 0;
}

