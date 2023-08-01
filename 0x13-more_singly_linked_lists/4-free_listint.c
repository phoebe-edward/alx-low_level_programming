#include "lists.h"
/**
 * free_listint - free a linked list
 * @head: head pointer to the list
 */
void free_listint(listint_t *head)
{
	listint_t *ptr1 = head;
	listint_t *ptr2;

	if (head == NULL)
		return;
	ptr2 = ptr1->next;
	while (ptr2 != NULL)
	{
		free(ptr1);
		ptr1 = ptr2;
		ptr2 = ptr2->next;
	}
	free(ptr1);
}
