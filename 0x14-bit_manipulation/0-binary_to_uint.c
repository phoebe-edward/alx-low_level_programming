#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to char
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, power = 1;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	for (i--; i >= 0; i--)
	{
		num = num + ((b[i] - '0') * power);
		power = power * 2;
	}
	return (num);
}
