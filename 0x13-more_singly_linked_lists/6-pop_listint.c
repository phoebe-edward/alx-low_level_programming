#include "lists.h"
/**
 * pop_listint - gets the first element out
 * @head: pointer to pointer to the list
 * Return: the int poped out
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *ptr;

	if (head == NULL || *head == NULL)
		return (0);
	ptr = *head;
	*head = ptr->next;
	num = ptr->n;
	free(ptr);
	return (num);
}
