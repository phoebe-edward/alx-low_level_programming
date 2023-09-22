/**
 * _strspn - Returns the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 * @s: string (pointer to char)
 * @accept: prefix which is searched for in s
 * Return: unsigned int, number of prefix bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int prefix = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				prefix++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (prefix);
}
