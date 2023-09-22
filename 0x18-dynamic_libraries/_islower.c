/**
 * _islower - checks if a character is in lower case
 * @c: character to be checked
 * Return: 1 if it is in lower case, 0 otherwise
 */

int _islower(int c)
{
	int i = 0;

	if (c >= (i + 'a') && c <= (i + 'z'))
		return (1);
	else
		return (0);
}
