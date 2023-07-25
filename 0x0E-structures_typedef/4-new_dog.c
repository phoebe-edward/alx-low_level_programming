#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog structure
 * @name: pointer to its name
 * @age: its age
 * @owner: pointer to its owner
 * Return: pointer for dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	int i, j, k, l;
	char *n, *o;

	if (d == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(d);
		return (NULL);
	}
	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(n);
		free(d);
		return (NULL);
	}
	for (k = 0; k < i + 1; k++)
		n[k] = name[k];
	for (l = 0; l < j + 1; l++)
		o[l] = owner[l];
	d->name = n;
	d->age = age;
	d->owner = o;
	return (d);
}
