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
	unsigned int i, s1_len, s2_len, concat_len;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
	{
		s1_len = 0;
		for (i = 0; s2[i] != '\0'; i++)
			;
		s2_len = i;
	}
	else if (s2 == NULL)
	{
		s2_len = 0;
		for (i = 0; s1[i] != '\0'; i++)
			;
		s1_len = i;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
		s1_len = i;
		for (i = 0; s2[i] != '\0'; i++)
			;
		s2_len = i;
	}
	concat_len = s1_len * sizeof(*s1) + s2_len * sizeof(*s2) + 1;
	concat_str = malloc(concat_len);
	if (concat_str == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		concat_str[i] = s1[i];
	for (i = 0; i < s2_len; i++)
		concat_str[s1_len + i] = s2[i];
	concat_str[s1_len + i] = '\0';
	return (concat_str);
}
