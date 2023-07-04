#include <stdlib.h>
/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack: first string
 * @needle: string to be found inside haystack
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0' && haystack[i + j] != '\0'; j++)
			{
				if (needle[j] != haystack[i + j])
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (&(haystack[i]));
			}
		}
	}
	return (NULL);
}
