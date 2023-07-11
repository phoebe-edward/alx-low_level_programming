#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to a new concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int i, j, k, l;

	if (s1 == NULL && s2 == NULL)
	{
		i = 0;
		j = 0;
	}
	else if (s1 == NULL)
	{
		i = 0;
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	else if (s2 == NULL)
	{
		j = 0;
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	concat_str = malloc(i * sizeof(*s1) + j * sizeof(*s2) + 1);
	if (concat_str == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		concat_str[k] = s1[k];
	for (l = 0; l < j; l++)
		concat_str[i + l] = s2[l];
	concat_str[i + l] = '\0';
	return (concat_str);
}
