#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i;
	int sum = 0;
	int res = 0;
	int num1 = 1;
	int num2 = 2;

	for (i = 0; res <= 4000000; i++)
	{
		if (i == 0)
		{
			sum = sum + num2;
			res = num1 + num2;
			num1 = num2;
			num2 = res;
		}
		else
		{
			if (res % 2 == 0)
			{
				sum = sum + res;
			}
			res = num1 + num2;
			num1 = num2;
			num2 = res;
		}
	}
	printf("%d\n", sum);
	return (0);
}
