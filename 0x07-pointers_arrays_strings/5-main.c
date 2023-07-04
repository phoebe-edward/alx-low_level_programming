#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hewllwo, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("the text haystack is: %s\n", s);
    printf("the pointer of haystack is: %p\n", s);
    printf("the returned pointer is: %p\n", t);
    printf("the returned string is: %s\n", t);
    return (0);
}
