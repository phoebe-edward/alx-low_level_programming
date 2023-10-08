#include "hash_tables.h"
/**
 * key_index - makes modulus to get index within size
 * @key: string to produce index
 * @size: size of the array within hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
