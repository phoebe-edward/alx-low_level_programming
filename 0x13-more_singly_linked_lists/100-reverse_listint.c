#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: pointer to pointer to list
 * Return: pointer to the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr2, *ptr3;

	if (head == NULL || *head == NULL)
		return (NULL);
	ptr2 = (*head)->next;
	if (ptr2 == NULL)
		return (*head);
	ptr3 = ptr2->next;
	if (ptr3 == NULL)
	{
		ptr2->next = (*head);
		(*head)->next = NULL;
		(*head) = ptr2;
		return (*head);
	}
	(*head)->next = NULL;
	while (ptr3 != NULL)
	{
		ptr2->next = (*head);
		(*head) = ptr2;
		ptr2 = ptr3;
		ptr3 = ptr2->next;
	}
	ptr2->next = (*head);
	*head = ptr2;
	return (*head);
}
