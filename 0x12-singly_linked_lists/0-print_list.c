#include "lists.h"
/**
 * print_list - print the list
 * @h: pointer to the list header
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	int count = 0;

	if (h == NULL)
		return (0);
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
