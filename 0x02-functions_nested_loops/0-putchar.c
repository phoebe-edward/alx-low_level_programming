#include "main.h"

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char char_arr[] = "_putchar";
	int i = 0;

	while (char_arr[i] != '\0')
	{
		_putchar(char_arr[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
