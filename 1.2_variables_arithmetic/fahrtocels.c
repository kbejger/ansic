#include <stdio.h>

/* conversion table from fahrenheit to celsius */
/* for values fahr = 0, 20, ..., 300 */
/* C = 5(F - 32) / 9 */

int main()
{
    /* declaretion */
    /* type (int) list of name (fahr, celsius, lower...) */
    int fahr, celsius;
    int lower, upper, step;
    
    /* assignment statements */
    lower = 0;      /* lower limit */
    upper = 300;    /* upper limit */
    step = 20;
    
    fahr = lower;
    
    while (fahr <= upper) { /* while true */
        celsius = 5 * (fahr - 32) / 9;
        /* %d format specifier */
        // printf("%d\t%d\n", fahr, celsius);
        /* %3d/%6d at least 3/6 characters wide */
        printf("%3d%6d\n", fahr, celsius);
        fahr = fahr + + step;
    }
}

