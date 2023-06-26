#include "main.h"

/**
 * main - Function that takes a pointer to an 'int' as
 * parameter and updates the value it points to to 98.
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 32;
	int *p = &n;

	*p = 98;

	_putchar(n);

return (0);

}
