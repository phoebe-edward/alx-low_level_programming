/**
 * _strchr - searches for character c in string s
 * @s: pointer t character array (string)
 * @c: character to be searched within s
 * Return: pointer to first occurrence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (*s == c)
			return (s);
		s += 1;
	}
	return (s + 1);
}
