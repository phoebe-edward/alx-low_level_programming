int _putchar(char c);
/**
 * _puts_recursion - prints a string, followed by a new line using recursion
 * @s: pointer to a char array
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
