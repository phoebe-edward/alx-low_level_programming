#include "lists.h"
/**
 * sum_dlistint - returns sum of all data (n) of dlistint_t linked list
 * @head: pointer to the list
 * Return: sum or 0 if empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = NULL;

	if (head == NULL)
		return (sum);
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
