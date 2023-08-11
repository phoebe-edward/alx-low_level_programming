#include "main.h"
/**
 * append_text_to_file - append text to file
 * @filename: char pointer
 * @text_content: char pointer
 * Return: 1 or -1 (success or failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size, j, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL && access(filename, F_OK) != -1)
		return (1);
	if (access(filename, F_OK) == -1)
		return (-1);
	fd = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (fd == -1)
		return (-1);
	for (j = 0; text_content[j] != '\0'; j++)
		;
	size = write(fd, text_content, j);
	if (size == -1)
		return (-1);
	i = close(fd);
	if (i == -1)
		return (-1);
	return (1);
}
