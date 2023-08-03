#include "main.h"
/**
 * print_binary - prints the binary representaion
 * @n: unsigned long int number
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp = n, result;
	int shifts;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (shifts = 0; temp > 0; shifts++)
	{
		temp = temp >> 1;
	}
	for (shifts--; shifts  >= 0; shifts--)
	{
		result = n >> shifts;
		if (result & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
