#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL)
		return;
	current = head;
	while (current->next != NULL)
	{
		current = current->next;
		free(current->prev);
	}
	free(current);
}
