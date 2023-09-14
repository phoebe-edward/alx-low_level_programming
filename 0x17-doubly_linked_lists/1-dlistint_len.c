#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head pointer
 * Return: number ofg elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *new = NULL;

	if (h == NULL)
		return (0);
	new = h;
	while (new != NULL)
	{
		count++;
		new = new->next;
	}
	return (count);
}
