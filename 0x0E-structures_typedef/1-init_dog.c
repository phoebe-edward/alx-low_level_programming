#include "dog.h"
/**
 * init_dog - initialize a dog
 * @d: pointer to the dog struct
 * @name: pointer to its name
 * @age: its age
 * @owner: its owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
