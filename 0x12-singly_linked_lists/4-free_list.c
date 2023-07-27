#include "lists.h"
/**
 * free_list - free list
 * @head: pointer to list
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *current2;

	if (head == NULL)
		return;
	while (current != NULL)
	{
		current2 = current->next;
		free(current->str);
		free(current);
		current = current2;
	}
}
