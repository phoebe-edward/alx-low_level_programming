#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table pointer
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL, *prev = NULL;
	unsigned long int i;

	if (ht == NULL || ht->array == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current->next != NULL)
			{
				prev = current;
				current = current->next;
				free(prev->key), free(prev->value), free(prev->next), free(prev);
			}
			free(current->key), free(current->value), free(current);
		}
	}
	free(ht->array);
	free(ht);
}
