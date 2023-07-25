#include <stdlib.h>
/**
 * int_index - returns the first index for which cmp is not zero
 * @array: array to search in
 * @size: its size
 * @cmp: function pointer
 * Return: int of index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
	else
	{
		return (-1);
	}
}
