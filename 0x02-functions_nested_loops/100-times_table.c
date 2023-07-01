int _putchar(char c);

/**
 * print_times_table - print the time table from 0 till n
 * @n: input integer
 */

void print_times_table(int n)
{
	int i = 0;
	int j, res;

	if (n < 0 || n > 15)
	{
		return;
	}
	else
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				res = i * j;
				if (j == 0)
				{
					_putchar(res + '0');
				}
				else if (res < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				}
				else if (res < 100)
				{
					_putchar(' ');
					_putchar(res / 10 + '0');
					_putchar(res % 10 + '0');
				}
				else
				{
					_putchar(res / 100 + '0');
					_putchar((res / 10) % 10 + '0');
					_putchar(res % 10 + '0');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
