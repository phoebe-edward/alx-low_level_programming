/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: string s
 * @accept: string accept
 * Return: pointer to first occurance in s of any of the bytes of accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int val = -1;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if ((accept[i] == s[j]) && (val == -1))
			{
				val = j;
			}
			else if ((accept[i] == s[j]) && (j < val))
			{
				val = j;
			}
		}
	}
	if (val == -1)
		return (0);
	else
		return (&s[val]);
}
