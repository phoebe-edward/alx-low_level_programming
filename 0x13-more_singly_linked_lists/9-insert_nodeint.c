#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node
 * @head: pointer to pointer to list
 * @idx: index
 * @n: integer to be inserted
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptr;
	unsigned int i = 0;

	if ((head == NULL || *head == NULL) && (idx != 0))
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		(*head) = new;
		head = &new;
		return (new);
	}
	ptr = *head;
	while (ptr != NULL)
	{
		if (i == idx - 1)
		{
			if (ptr->next == NULL)
			{
				new->next = NULL;
				ptr->next = new;
				return (new);
			}
			new->next = ptr->next;
			ptr->next = new;
			return (new);
		}
		i++;
		ptr = ptr->next;
	}
	return (NULL);
}
