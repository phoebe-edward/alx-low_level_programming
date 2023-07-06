/**
 * _strncat - concatenates two strings, only n bytes from src
 * @dest: destination string, will be overwritten
 * @src: source string, will be concatenated after the dest
 * @n: number of characters to be concatenated from src to dest
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len_dest, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	len_dest = i;
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[len_dest + j] = src[j];
	}
	dest[len_dest + j] = '\0';
	return (dest);
}
