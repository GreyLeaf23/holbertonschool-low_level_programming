#ifndef dog_h
#define dog_h

/**
 * struct dog - structure holding variables.
 *
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's master.
 *
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif