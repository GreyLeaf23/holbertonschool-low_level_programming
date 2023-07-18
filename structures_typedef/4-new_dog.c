#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - represents the structure 'dog_t'.
 * @name: string to store.
 * @owner: string to store.
 *
 * Return: new_dog struct.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog; /*Sub-name for struct*/

	/*Make space for struct*/
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/*Make space for the lenght of name.*/
	new_dog->name = malloc(sizeof(char) * strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	/*Make space for the length of owner.*/
	new_dog->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name); /*Free space of previously-made functions.*/
		free(new_dog);
		return (NULL);
	}

	/*Make duplication of 'name' and 'owner'*/
	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);
	new_dog->age = age;

	return (new_dog);
}

