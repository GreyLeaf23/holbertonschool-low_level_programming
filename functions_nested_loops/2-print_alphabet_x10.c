#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet times 10.
 */

void print_alphabet_x10(void)

{

	char alphabet;
	int i = 10;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		while (alphabet < i)
	{
		_putchar(alphabet);
		alphabet++;
	}

_putchar('\n');

}
