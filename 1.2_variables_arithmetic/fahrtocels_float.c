#include <stdio.h>

/* conversion table from fahrenheit to celsius */
/* for values fahr = 0, 20, ..., 300, float */
/* C = (5 / 9)(F - 32))*/

int main()
{
    /* declaretion */
    /* type (float) list of names (fahr, celsius) */
    /* type (int) list of names (lower, upper, step) */
    float fahr, celsius;
    int lower, upper, step;
    
    /* assignment statements */
    lower = 0;      /* lower limit */
    upper = 300;    /* upper limit */
    step = 20;
    
    fahr = lower;
    
    while (fahr <= upper) { /* while true */
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        /* %f format specifier */
        /* %3.0f min. 3 characters wide, no digits after the decimal point */
        /* $6.1f min. 6 characters wide. 1 digit after the decimal point */
        printf("%3.0f%6.1f\n", fahr, celsius);
        fahr = fahr + + step;
    }
}


