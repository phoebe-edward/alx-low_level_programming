#include "lists.h"
/**
 * add_node - add a node in the beginning
 * @head: pointer to a pointer
 * @str: string
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = (*head);
	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;
	(*head) = new;
	return (new);
}
