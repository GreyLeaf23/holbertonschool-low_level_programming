#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - check for allocated memory space.
 * @b: malloc input.
 *
 * Return: pointer with allocated space.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
/*Allocating memory space for 'b'*/
	ptr = malloc(b);
/*If malloc FAILS.*/
	if (ptr == NULL)
	{
		exit(98);
	}

return (ptr);

}
