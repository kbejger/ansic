#include <stdio.h>

/* conversion table from fahrenheit to celsius */
/* for values fahr = 0, 20, ..., 300 */
/* C = 5(F - 32) / 9 */

int main()
{
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0;      /* lower limit */
    upper = 300;    /* upper limit */
    step = 20;
    
    fahr = lower;
    
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + + step;
    }
}

