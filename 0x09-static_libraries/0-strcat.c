/**
 * _strcat - concatenates two strings
 * @dest: destination string, will be overwritten
 * @src: source string, will be concatenated after the dest
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len_dest, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	len_dest = i;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[len_dest + j] = src[j];
	}
	dest[len_dest + j] = '\0';
	return (dest);
}
