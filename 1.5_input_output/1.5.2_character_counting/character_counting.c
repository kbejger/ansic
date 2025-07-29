#include <stdio.h>

/* hello <enter> world <ctrl + d> */

int main(void)
{
    long nc;
    
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
    /* hello, world */
    /* 13 = 11 letters + 1 space + 1 new line */
}
