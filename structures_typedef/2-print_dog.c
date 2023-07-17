#include "dog.h"
#include <stdio.h>

/**
 * print_dog - output the values of the structure's variables.
 * @d: points to the variables in the struct.
 *
 * Return: pointer.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");

	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)");

	else
		printf("Owner: %s\n", d->owner);
}
