#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 9)
	{
		j = i + 1;
		while (j < 10)
		{
			if (!(i == 0 && j == 1))
			{
				putchar(',');
				putchar(' ');
			}
			putchar(i + '0');
			putchar(j + '0');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
