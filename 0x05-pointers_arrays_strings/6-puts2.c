#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: a pointer to the character array
 */

void puts2(char *str)
{
	int i, len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	len = i;
	i = 0;
	while (i <= len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
