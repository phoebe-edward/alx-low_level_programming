int _putchar(char c);

/**
 * print_last_digit - prints the last digit of an integer
 * @n: the given integer
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
		i *= -1;
	_putchar(i + '0');
	return (i);
}
