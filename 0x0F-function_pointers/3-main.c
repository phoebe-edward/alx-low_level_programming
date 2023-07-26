#include "3-calc.h"
/**
 * main - entry point
 * @argc: int
 * @argv: args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, res;
	char *s;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];
	if ((*s == '/' || *s == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = func(a, b);
	printf("%d\n", res);
	return (0);
}
