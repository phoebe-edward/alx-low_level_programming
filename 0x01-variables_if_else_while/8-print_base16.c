#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	i = 0;
	while (i < 6)
	{
		putchar(c + i);
		i++;
	}
	putchar('\n');
	return (0);
}
