#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free pointers of 'struct dog' variables.
 * @name: d.
 * @owner: d.
 * @d: pointer.
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
