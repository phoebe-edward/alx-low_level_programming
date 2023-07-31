#include "lists.h"
/**
 * add_nodeint - add new node in the beginning
 * @head: pointer to pointer to a list
 * @n: integer to be added in the node
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
