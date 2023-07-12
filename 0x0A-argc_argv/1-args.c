#include <stdlib.h>
#include <stdio.h>
/**
 * main - print number of args
 * @argc: number of params including name
 * @argv: arguments
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
