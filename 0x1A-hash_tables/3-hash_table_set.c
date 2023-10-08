#include "hash_tables.h"
/**
 * hash_table_set - put an element in the hash table
 * @ht: pointer to hash table
 * @key: key to generate index
 * @value: value to be inserted
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL, *current = NULL;

	if (key == NULL || ht == NULL || value == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t *));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		(ht->array[index])->next = NULL;
		return (1);
	}
	else
	{
		current = ht->array[index];
		if (strcmp(current->key, key) == 0)
		{
			current->value = strdup(value);
			free(node->key), free(node->value), free(node);
			return (1);
		}
		while (current->next != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				current->value = strdup(value);
				free(node->key), free(node->value), free(node);
				return (1);
			}
			current = current->next;
		}
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
}
