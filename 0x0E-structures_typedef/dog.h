#ifndef dog_structure
#define dog_structure
/**
 * struct dog - structure of dog
 * @name: its name
 * @age: its age
 * @owner: name of its owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
