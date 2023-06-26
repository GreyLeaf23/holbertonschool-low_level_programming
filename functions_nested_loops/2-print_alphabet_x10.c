#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet times 10.
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)

{

	char alphabet;
	int i;

	for (i = 0; i < 10; i++)

	{

	for (alphabet = 0; alphabet < 26; alphabet++)

	{

		_putchar("%c", 'a' + alphabet);

	}

_putchar('\n');

 return (0);

	}
}
