#ifndef dog_h
#define dog_h

/**
 * struct dog - structure holding variables.
 *
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's master.
 * @dog_t: new type.
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
