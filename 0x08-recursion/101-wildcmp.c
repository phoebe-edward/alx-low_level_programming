/**
 * wildcmp - compares two strings and returns 1 if the
 * strings can be considered identical, otherwise return 0
 * @s1: pointer to first string
 * @s2: pointer to second string, can contain *
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	if (*s1 == '\0' && *s2 != '*')
		return (0);
	if (*s1 != '\0' && *s2 == '\0')
		return (0);
	if (*s1 != *s2 && *s2 != '*' && *(s2 - 1) != '*')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s1 != *s2 && *s2 == '*')
	{
		if (*(s2 + 1) == '*' || *s1 == *(s2 + 1))
			return (wildcmp(s1, s2 + 1));
		if (*(s1 + 1) == *(s2 + 1))
			return (wildcmp(s1 + 1, s2 + 1));
		return (wildcmp(s1 + 1, s2));
	}
	if (*s1 != *s2 && *s2 != '*' && *(s2 - 1) == '*')
		return (wildcmp(s1 + 1, s2));
	else
		return (0);
}
