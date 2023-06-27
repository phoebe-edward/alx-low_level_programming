#include "main.h"

/**
 * swap_int - swap two int values with their pointers
 *@a: pointer to first int
 *@b: pointer to second int
 */

void swap_int(int *a, int *b)
{
	int temp1;
	int temp2;

	temp1 = *a;
	temp2 = *b;
	*a = temp2;
	*b = temp1;
}
