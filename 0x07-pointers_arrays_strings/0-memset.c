/**
 * _memset - fill first n bytes of memory
 * pointed to by s with the constant byte b
 * @s: pointer to the memory
 * @b: byte that is used to fill the memory with
 * @n: number of bytes to be filled
 * Return: s which is a pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
