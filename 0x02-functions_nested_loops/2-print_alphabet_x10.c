#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in lower case 10 times
 */

void print_alphabet_x10(void)
{
	int i, j = 0;

	while (j < 10)
	{
		i = 0;
		while (i < 26)
		{
			_putchar(i + 'a');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
