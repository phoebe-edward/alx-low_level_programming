#include "main.h"

/**
 * _strlen - counts the length of a string
 *@s: pointer to a character array
 */

int _strlen(char *s)
{
	int len;

	len=0;

	while(*(s+len) != '\0')
	{
		len++;
	}
	return (len);
}
