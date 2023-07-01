int _putchar(char c);

/**
 * times_table - print the time table from 0 till 9
 */

void times_table(void)
{
	int i = 0;
	int j, res;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
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
				_putchar(res + '0');

			}
			else
			{
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
				j++;
		}
		_putchar('\n');
		i++;
	}
}
