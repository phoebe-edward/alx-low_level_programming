#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to list
 * @idx: index
 * @n: integer (data)
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new = NULL, *current = NULL, *previous = NULL;

	if (h == NULL || *h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	count = 0;
	current = *h;
	while (current != NULL)
	{
		if (count == idx)
		{
			if (current->next == NULL)
			{
				new = add_dnodeint_end(h, n);
				return (new);
			}
			else
			{
				new->n = n;
				previous = current->prev;
				previous->next = new;
				new->prev = previous;
				new->next = current;
				current->prev = new;
				return (new);
			}
		}
		count++;
		current = current->next;
	}
	free(new);
	return (NULL);
}
