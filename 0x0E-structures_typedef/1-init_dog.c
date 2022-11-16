#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes type struct dog variable
 * @d: the initialized dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
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
