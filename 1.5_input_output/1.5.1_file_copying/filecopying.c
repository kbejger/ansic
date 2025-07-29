#include <stdio.h>

int main(void)
{
    int c;
    c = getchar();
    while (c != EOF) {  /* while c not equal EOF (end of file) */
        putchar(c);
        c = getchar();
    }
}
