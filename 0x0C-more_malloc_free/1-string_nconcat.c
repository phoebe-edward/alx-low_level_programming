#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes to be concatenated from s2
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, k;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	if (n <= j)
		j = n;
	concat = malloc(i * sizeof(char) + j * sizeof(char) + 1);
	if (concat == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		concat[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		concat[i + k] = s2[k];
	}
	concat[i + k] = '\0';
	return (concat);
}
