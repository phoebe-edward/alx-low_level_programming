#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: a pointer to character array
 */

void puts_half(char *str)
{
	int i, j, len;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	len = i;
	if (len % 2 == 1)
		j = (len + 1) / 2;
	else
		j = (len / 2) + 1;
	while (j <= len)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
