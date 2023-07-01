#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int sum = 0;
	int res1 = 0;
	int res2 = 0;
	int i;

	for (i = 1; res1 < 1024; i++)
	{
		sum += res1;
		res1 = 3 * i;
	}
	for (i = 1; res2 < 1024; i++)
	{
		sum += res2;
		res2 = 5 * i;
	}
	printf("%d\n", sum);
	return (0);
}
