#include "lists.h"
/**
 * free_listint2 - free list and put head pointer to NULL
 * @head: pointer to pointer to list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr1;
	listint_t *ptr2;

	if (head == NULL)
		return;
	ptr1 = *head;
	ptr2 = ptr1->next;
	while (ptr2 != NULL)
	{
		free(ptr1);
		ptr1 = ptr2;
		ptr2 = ptr2->next;
	}
	free(ptr1);
	*head = NULL;
}
