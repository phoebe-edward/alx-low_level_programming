#include "main.h"
#include <stdio.h>
/**
 * create_file - create a file and write text in it
 * @filename: name of file
 * @text_content: text to be written inside it
 * Return: 1 or -1 (success or failure respectively)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, size, i, j;

	if (filename == NULL)
		return (-1);
	fd = creat(filename, 0600);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		for (j = 0; text_content[j] != '\0'; j++)
			;
		size = write(fd, text_content, j);
		if (size < 0)
			return (-1);
	}
	i = close(fd);
	if (i < 0)
		return (-1);
	return (1);
}
