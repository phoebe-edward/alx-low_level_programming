#include "lists.h"
/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: head pointer of the dlistint_t
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *new = NULL;
	size_t count = 0;

	if (h == NULL)
		return (0);
	new = h;
	while (new != NULL)
	{
		count++;
		printf("%d\n", new->n);
		new = new->next;
	}
	return (count);
}
