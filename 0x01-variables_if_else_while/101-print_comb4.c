#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j;
	int k;

	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k < 10)
			{
				if (!(i == 0 && j == 1 && k == 2))
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
