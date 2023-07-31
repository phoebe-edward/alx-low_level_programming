#include "lists.h"
/**
 * listint_len - list length
 * @h: head pointer
 * Return: the list length
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
