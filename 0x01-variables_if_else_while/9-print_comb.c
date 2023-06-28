#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 0)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('0' + i);
		i++;
	}
	putchar('\n');
	return (0);
}
