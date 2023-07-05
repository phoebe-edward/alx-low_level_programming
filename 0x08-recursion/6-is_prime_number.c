/**
 * help - returns 1 if the input is prime, 0 otherwise
 * @m: input number
 * @l: helping number
 * Return: 0 or 1
 */

int help(int m, int l)
{
	if (m == l)
		return (1);
	if (m % l == 0)
		return (0);
	return (help(m, l + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: input number
 * Return: 0 or 1;
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (help(n, 2));
}
