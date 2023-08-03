#include "main.h"
/**
 * set_bit - sets a bit to 1 at a certain index
 * @n: pointer to a number
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > 64)
		return (-1);
	num = 1 << index;
	*n = *n + num;
	return (1);
}
