/**
 * _strchr - searches for character c in string s
 * @s: pointer t character array (string)
 * @c: character to be searched within s
 * Return: pointer to first occurrence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
