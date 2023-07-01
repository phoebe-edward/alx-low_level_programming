int _putchar(char c);

/**
 * jack_bauer - prints the minutes of the day
 */

void jack_bauer(void)
{
	int i = 0;
	int j;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			_putchar(':');
			if (j < 10)
			{
				_putchar('0');
				_putchar(j + '0');
			}
			else
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			_putchar('\n');
			j++;
		}
		i++;
	}
}
