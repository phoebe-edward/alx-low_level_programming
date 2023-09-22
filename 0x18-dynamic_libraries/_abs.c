/**
 * _abs - prints the absolute value of an integer
 * @n: integer to get its absolute value
 * Return: the absolute value
 */

int _abs(int n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}
