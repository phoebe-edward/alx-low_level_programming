#include "main.h"

/**
 * rev_string - reverses a string
 *@s: pointer to a character array
 */

void rev_string(char *s)
{
	int i, j, len;
	char temp;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;
	len = i;
	j = 0;
	while (i > len / 2)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i--;
		j++;
	}
}
