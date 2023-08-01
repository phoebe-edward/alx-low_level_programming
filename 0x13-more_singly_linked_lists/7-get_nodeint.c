#include "lists.h"
/**
 * get_nodeint_at_index - gets a certain node
 * @head: pointer to list
 * @index: starts at 0
 * Return: pointer to list at required node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (ptr != NULL)
	{
		if (i == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
