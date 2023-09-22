#include "main.h"
/**
 * _strcpy - copy two strings and return the pointer to the first one
 * @dest: destination string
 * @src: the source string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr;
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	ptr = dest;
	return (ptr);
}
