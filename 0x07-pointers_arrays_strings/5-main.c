#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hewllwo, worlc";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("the returned pointer is :%p\n", t);
    return (0);
}
