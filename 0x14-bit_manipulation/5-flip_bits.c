#include "main.h"
/**
 * flip_bits - how many bits you need to flip to get from n to m
 * @n: first num
 * @m: second num
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0, i;
	unsigned long int trial1 = n, trial2 = m;

	for (i = 0; trial1 > 0 || trial2 > 0; i++)
	{
		if ((trial1 ^ trial2) & 1)
			count++;
		trial1 = trial1 >> 1;
		trial2 = trial2 >> 1;
	}
	return (count);
}
