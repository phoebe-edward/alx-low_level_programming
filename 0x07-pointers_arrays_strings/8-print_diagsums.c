#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: pointer to integer matrix
 * @size: size of the square matrix, which is number of rows or columns
 */

void print_diagsums(int *a, int size)
{
	long int sum1 = 0;
	long int sum2 = 0;
	int i;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
		{
			sum1 += a[i];
		}
		if ((i % (size - 1) == 0) && (i != 0) && (i != (size * size - 1)))
		{
			sum2 += a[i];
		}
	}
	printf("%ld, %ld\n", sum1, sum2);
}
