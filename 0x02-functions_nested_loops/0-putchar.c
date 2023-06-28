#include "main.h"

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char char_arr[9] = "_putchar";
	int i = 0;

	while (i < 9)
	{
		_putchar(char_arr[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
