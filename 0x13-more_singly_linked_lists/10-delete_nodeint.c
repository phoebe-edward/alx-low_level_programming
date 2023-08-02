#include "lists.h"
/**
 * delete_nodeint_at_index - delete node
 * @head: pointer to pointer to head of list
 * @index: index of node to be deleted
 * Return: 1 on success or -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *ptr1, *ptr2;

	if (head == NULL || *head == NULL)
		return (-1);
	ptr1 = *head;
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(ptr1);
		return (1);
	}
	ptr2 = ptr1->next;
	while (ptr2 != NULL)
	{
		if (i == index)
		{
			ptr1->next = ptr2->next;
			free(ptr2);
			return (1);
		}
		ptr1 = ptr1->next;
		ptr2 = ptr1->next;
		i++;
	}
	return (-1);
}
