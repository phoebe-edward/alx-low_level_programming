/**
 * _strncpy - a function that copies a string
 * @dest: dest pointer of string
 * @src: source pointer of string to be copied
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	if (n > i)
	{
		for (j = i + 1; j < n; j++)
			dest[j] = '\0';
	}
	return (dest);
}
