#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @ac: number of arguments
 * @av: array of strings (arguments)
 * Return: 0
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, size_r = 1, size_w, i, j;
	char *buf;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (access(av[2], F_OK) == -1)
		fd_to = creat(av[2], 0664);
	else
		fd_to = open(av[2], O_WRONLY | O_TRUNC);
	buf = malloc(1024 * sizeof(char));
	while (size_r > 0)
	{
		size_r = read(fd_from, buf, 1024);
		if (access(av[1], F_OK) == -1 || size_r == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		size_w = write(fd_to, buf, size_r);
		if (fd_to == -1 || size_w == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	i = close(fd_from);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_from);
		exit(100);
	}
	j = close(fd_to);
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_to);
		exit(100);
	}
	free(buf);
	return (0);
}
