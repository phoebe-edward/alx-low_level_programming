#include <stddef.h>
/**
 * array_iterator - performs a function on array elements
 * @array: array itself
 * @size: size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0 ; i < (int)size; i++)
	{
		action(array[i]);
	}
}
