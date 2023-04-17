#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - entry
 * @d: the dog to be initialized
 * @name: the name of the dog
 * @age: the age
 * @owner: its owner
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
