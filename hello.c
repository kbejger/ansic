#include <stdio.h>

int main()
{
    printf("hello, world\n");
    printf("hello, ");
    printf("world");
    /* \escape sequence */
    /* \n new line */
    printf("\n");
    /* \t tab */
    printf("hello, world\t");
    /* \b backspace */
    printf("hello, world\b\n");
    /* \" double quote */
    printf("hello, world\"\n");
    /* warning: unknown escape sequence '\c'
    printf("hello, world\c"); */
}
