#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet times 10.
 */

void print_alphabet_x10(void)

{

	char alphabet;
	int i;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		for (i = 10; alphabet < i;)
	{
		_putchar(alphabet);
	}

_putchar('\n');

}
