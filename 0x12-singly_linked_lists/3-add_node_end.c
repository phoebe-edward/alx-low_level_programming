#include "lists.h"
/**
 * add_node_end - add node at the end
 * @head: head pointer to pointer
 * @str: string pointer
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *tail = malloc(sizeof(list_t));
	list_t *current = (*head);

	if (tail == NULL)
		return (NULL);
	while (current != NULL && current->next != NULL)
	{
		current = current->next;
	}
	if (current != NULL)
		current->next = tail;
	else
		(*head) = tail;
	tail->next = NULL;
	tail->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	tail->len = i;
	return (tail);
}
