#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a dog 
 * @d: input pointer for the dog name
 * @name: input for the dog age
 * @owner: input for the dog owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
