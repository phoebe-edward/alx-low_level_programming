/**
 * _isalpha - checks a char c is alphabetic (lowercase or uppercase) or not
 *@c: character to be checked
 * Return: 1 if alphabetic character, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
