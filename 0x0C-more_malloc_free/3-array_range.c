#include <stdlib.h>
/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
