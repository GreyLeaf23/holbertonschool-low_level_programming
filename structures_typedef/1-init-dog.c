#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function that gives input to structure's variables.
 * @d: pointing to the struct dog in the header.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog'owner.
 *
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
