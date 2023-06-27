#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an integer array
 * @a: pointer to the array of int
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%d", *(a + i));
	}
	printf("\n");
}
