#include "lists.h"
/**
 * pop_listint - gets the first element out
 * @head: pointer to pointer to the list
 * Return: the int poped out
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	if (head == NULL)
		return (0);
	n = (*head)->n;
	ptr = *head;
	head = &(ptr->next);
	free(ptr);
	return (n);
}
