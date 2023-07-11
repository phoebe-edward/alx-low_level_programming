#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter
 * @str: given pointer to an existing string
 * Return: a pointer to a newly created string duplicate
 */

char *_strdup(char *str)
{
	char *new_str;
	unsigned int i, str_len;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	str_len = i;
	new_str = malloc(str_len);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < str_len; i++)
		new_str[i] = str[i];
	new_str[i] = '\0';
	return (new_str);
}
