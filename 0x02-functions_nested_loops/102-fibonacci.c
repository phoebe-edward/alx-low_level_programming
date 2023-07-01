#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i;
	long int res;
	long int num1 = 1;
	long int num2 = 2;

	printf("%ld, %ld", num1, num2);
	for (i = 0; i < 48; i++)
	{
		res = num1 + num2;
		num1 = num2;
		num2 = res;
		printf(", %ld", res);
	}
	printf("\n");
	return (0);
}
