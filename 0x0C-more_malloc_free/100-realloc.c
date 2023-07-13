#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to old memory
 * @old_size: old size
 * @new_size: new size
 * Return: void * to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_new, *copy;
	unsigned int min, i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr_new = malloc(new_size);
		if (ptr_new == NULL)
			return (NULL);
		return(ptr_new);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_new = malloc(new_size);
	if (ptr_new == NULL)
	{
		return (NULL);
	}
	if (old_size < new_size)
		min = old_size;
	else
		min = new_size;
	copy = ptr;
	for (i = 0; i < min; i++)
	{
		ptr_new[i] = copy[i];
	}
	free(ptr);
	return (ptr_new);
}
