#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char c = 'a';
	int i = 25;

	while (i >= 0)
	{
		putchar(c + i);
		i--;
	}
	putchar('\n');
	return (0);
}
