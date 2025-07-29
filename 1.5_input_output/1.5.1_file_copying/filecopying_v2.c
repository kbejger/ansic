#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF) {  /* while c not equal EOF (end of file) */
        putchar(c);
    }
}

