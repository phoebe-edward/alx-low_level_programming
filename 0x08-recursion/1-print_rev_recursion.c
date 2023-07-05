int _putchar(char c);
/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: pointer to a character array
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
