#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j;
	int units_i;
	int tens_i;
	int units_j;
	int tens_j;

	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			if (!(i == 0 && j == 1))
			{
				putchar(',');
				putchar(' ');
			}
			units_i = i % 10;
			tens_i = (i - units_i) / 10;
			units_j = j % 10;
			tens_j = (j - units_j) / 10;
			putchar(tens_i + '0');
			putchar(units_i + '0');
			putchar(' ');
			putchar(tens_j + '0');
			putchar(units_j + '0');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
